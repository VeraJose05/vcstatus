
#include<string>

using namespace std;

string GetCommand(string command){
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

string Battery_Percentage(){
    string battery_percentage = "";

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

    return battery_percentage;
}

string Battery_Status(){

    string symbol;

    if(GetCommand("acpi -b | awk '{print $3}' | tr -d ','") == "Charging")
        symbol = "";

    else if (GetCommand("acpi -b | awk '{print $3}' | tr -d ','") == "Discharging")
        symbol = "";
    else
        symbol = "F";

    return symbol;
}

string Battery_Time(){
    string chain = GetCommand("acpi -b | awk '{print $5}' | sed 's/,//'");

    string time = "";

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

    return time;
}

string Date(){
    return GetCommand("date +'  %d/%m/%Y   %H:%M'");
}

string Volume(){
    string vol = "";

    string volume_status = GetCommand("amixer -c 0 get Master | awk '/Mono:/ {print $6}'");

    int vol_int = stoi(GetCommand("amixer sget Master | grep -o '[0-9]*%' | head -1 | cut -d'%' -f1"));

    if( volume_status == "[off]" ){
        vol += "󰝟  M";
    }
    else{
        if( vol_int < 20)
            vol += "󰕿  ";
        else if( vol_int < 50)
            vol += "󰖀  ";
        else
            vol += "󰕾  ";

        vol += GetCommand("amixer sget Master | grep -o '[0-9]*%' | head -1 | cut -d'%' -f1");
        vol += '%';      
    }



    return vol;
}