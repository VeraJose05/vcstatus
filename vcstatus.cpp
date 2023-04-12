#include<string>
#include <cstddef>
#include<X11/Xlib.h>
#include <unistd.h>

#include<iostream>

#include"util.h"

using namespace std;



int main(){
    
    



    while(true){
        Display *d = XOpenDisplay(NULL);
        Window rootWindow = XRootWindow(d, 0);
        
        string info = "";

        info += Volume() + ' ';

        info += '[';

        info += Battery_Status();
        info += ' ' + Battery_Time() + ' ';
        info += Battery_Percentage() + " ]";

        info += Date();


        XStoreName(d , rootWindow, info.c_str());

        XCloseDisplay(d);
        sleep(1);


    }
    //
   
}