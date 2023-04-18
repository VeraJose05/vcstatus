#include<string>

#include"util.h"

const string background = "^b#a151d3^";

const string color_fg = "^c#5c5b6a^";

const string color_g1 = "^b#dd6a6a^";

const string color_g2 = "^b#6a9edd^";

const string color_g3 = "^b#ddbd6a^";

const int space = 3;

int main(){
    

    while(true){
        Bar widgets(background);

        widgets.Wlan(color_fg, color_g1);

        widgets.CPU(color_fg, color_g1);

        widgets.Memory(color_fg, color_g1);

        widgets.Sep(2, color_fg, color_g1);

        widgets.Volume(color_fg, color_g2);

        widgets.Sep(1, color_fg, color_g2);

        widgets.Battery_Status(color_fg, color_g2);

        widgets.Battery_Time(color_fg, color_g2);

        widgets.Battery_Percentage(color_fg, color_g2);

        widgets.Sep(2, color_fg, color_g2);

        widgets.Date(color_fg, color_g3);

        widgets.Sep(1, color_fg, color_g3);

        widgets.Run();

        sleep(1);

    }
    //
   
}