
#include<string>
#include<iostream>

#include"util.h"

using namespace std;

using namespace std;

void Bar::Sep(int num, string foreground, string background){
    info += foreground + background;

    for(int i=1; i <= num; i++)
        info += ' ';
}


string Bar::GetCommand(string command){
    string command_value =  "";

    // Create a buffer to store the output of the commands
    char buffer[128];

    //Create a file pointer to the outpout of the battery level command
    FILE* pipe = popen(command.c_str() , "r");

    // Read the output of the command from the pipe and store it in the string
    while (!feof(pipe)) {
        if (fgets(buffer, 128, pipe) != NULL)
            command_value += buffer;
    }

    // Close the pipe
    pclose(pipe);

    command_value.erase(command_value.size()-1);

    return command_value;
}



void Bar::CPU(string foreground, string background){
    string cpu_val = foreground + background;
    
    cpu_val += " CPU: ";

    cpu_val += GetCommand("grep -o '^[^ ]*' /proc/loadavg");

    info += cpu_val;
}

void Bar::Memory(string foreground, string background) {
    string memory = foreground + background;

    memory += "   ";
    memory += GetCommand("free -h | awk '/^Mem/ { print $3 }' | sed s/i//g");

    info += memory;
}

Bar::Bar(string color)
{
    info = color;
    d = XOpenDisplay(NULL);
    rootWindow = XRootWindow(d, 0);
}

Bar::~Bar(){
    XCloseDisplay(d);
}

void Bar::Battery_Percentage(string foreground, string background){
    string battery_percentage = foreground + background;

    int battery_percentage_int = stoi(GetCommand("acpi -b | awk '{print int($4)}' | sed 's/%//'"));

    if( battery_percentage_int < 20 )
        battery_percentage += "  ";
    

    else if (battery_percentage_int < 50 )
        battery_percentage += "  ";
    
    else if (battery_percentage_int < 75 )
        battery_percentage += "  ";
    
    else
        battery_percentage += "  ";
    
    battery_percentage += GetCommand("acpi -b | awk '{print int($4)}' | sed 's/%//'");
    
    battery_percentage += '%';

    info += battery_percentage;
}

void Bar::Battery_Status(string foreground, string background){

    string symbol = foreground + background;

    if(GetCommand("acpi -b | awk '{print $3}' | tr -d ','") == "Charging")
        symbol += "  ";

    else if (GetCommand("acpi -b | awk '{print $3}' | tr -d ','") == "Discharging")
        symbol += "  ";
    else
        symbol += "F  ";

    info += symbol;
}

void Bar::Battery_Time(string foreground, string background){
    string chain = GetCommand("acpi -b | awk '{print $5}' | sed 's/,//'");

    string time = foreground + background;

    int cont = 0, pos;

    while( chain.find(':') != string::npos){

        pos = chain.find(':');

        time += chain.substr(0 ,pos);

        chain.erase(0,pos+1);

        if( cont ==0 )
            time += "h ";
        else
            time += "m ";

        cont++;
    }

    info += time;
}

void Bar::Date(string foreground, string background){
    string date = foreground + background;

    date += GetCommand("date +'  %d/%m/%Y   %H:%M'");

    info += date;
}

void Bar::Volume(string foreground, string background){
    string vol = foreground + background;

    string volume_status = GetCommand("amixer -c 0 get Master | awk '/Mono:/ {print $6}'");

    int vol_int = stoi(GetCommand("amixer sget Master | grep -o '[0-9]*%' | head -1 | cut -d'%' -f1"));

    if( volume_status == "[off]" ){
        vol += " 󰝟 M";
    }
    else{
        if( vol_int < 20)
            vol += " 󰕿 ";
        else if( vol_int < 50)
            vol += " 󰖀 ";
        else
            vol += " 󰕾 ";

        vol += GetCommand("amixer sget Master | grep -o '[0-9]*%' | head -1 | cut -d'%' -f1");
        vol += '%';      
    }



    info += vol;
}

void Bar::Wlan(string foreground, string background){
    info += foreground + background;
    string wlan = GetCommand("cat /sys/class/net/wl*/operstate 2>/dev/null");

    if (wlan ==  "up"){        
        info += "   ";
        info += "Connected";
    }
    else{
        info += " 󰖪  ";
        info +=  "Disconnected";
    }
        
}

void Bar::Run(){
    XStoreName(d , rootWindow, info.c_str());
}