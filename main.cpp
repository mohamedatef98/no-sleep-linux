#include <X11/Xlib.h>
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    int rootX,rootY,winX,winY;
    unsigned int mask;
    Window windowReturned;
    Display * display = XOpenDisplay(0);
    int screen = XDefaultScreen(display);
    Window rootWindow = XRootWindow(display, screen);
    int height = DisplayHeight(display, screen);
    int width = DisplayWidth(display, screen);
    bool res;
    int x = 10;
    while (1) {
        usleep(5000000 * 60);
        res = XQueryPointer(display,rootWindow,&windowReturned,&windowReturned,&rootX,&rootY,&winX,&winY,&mask);
        XWarpPointer(display, None, rootWindow, 0, 0, 0, 0, rootX, rootY+10);
        res = XQueryPointer(display,rootWindow,&windowReturned,&windowReturned,&rootX,&rootY,&winX,&winY,&mask);
        XWarpPointer(display, None, rootWindow, 0, 0, 0, 0, rootX, rootY-10);
        res = XQueryPointer(display,rootWindow,&windowReturned,&windowReturned,&rootX,&rootY,&winX,&winY,&mask);

    }

}
