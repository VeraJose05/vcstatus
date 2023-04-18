
#include<string>
#include <cstddef>
#include<X11/Xlib.h>
#include <unistd.h>


using namespace std;


class Bar{
private:
    string info;

    Display *d;

    Window rootWindow;

    

    

    string GetCommand(string command);

public: 
    Bar(string color = "");

    ~Bar();

    void CPU(string foreground, string background);

    void Memory(string foreground, string background);

    void Battery_Percentage(string foreground, string background);

    void Battery_Status(string foreground, string background);

    void Battery_Time(string foreground, string background);

    void Date(string foreground, string background);

    void Volume(string foreground, string background);

    void Sep(int num, string foreground, string background);

    void Wlan(string foreground, string background);

    void Run();
};