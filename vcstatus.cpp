#include<string>
#include <cstddef>
#include<X11/Xlib.h>
#include <unistd.h>

#include<iostream>

#include"util.h"

using namespace std;

const string color_fg = "^c#ffffff^";

const string color_g1 = "^b#d600f7^";

const string color_g2 = "^b#007bff^";

const string color_g3 = "^b#ff7f00^";

int main(){
    
    



    while(true){
        Display *d = XOpenDisplay(NULL);
        Window rootWindow = XRootWindow(d, 0);
        
        string info = "";

        info += Volume(color_fg, color_g1) + ' ';

        info += '[';

        info += Battery_Status(color_fg, color_g2);
        info += ' ' + Battery_Time(color_fg, color_g2) + ' ';
        info += Battery_Percentage(color_fg, color_g2) + " ]";

        
        info += Date(color_fg, color_g3);


        XStoreName(d , rootWindow, info.c_str());

        XCloseDisplay(d);
        sleep(1);


    }
    //
   
}