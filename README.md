# no-sleep-linux
A small application which runs in the background and prevents the pc from going sleep by moving the pointer every couple minutes



I had an issue that i most of the time needed (and relayed on) the fact that my laptop is going to sleep if i left it for 5 minutes without any movement, but some time and occasionally i didn't need that, especially when i am studying or reading on my laptop.

and it was really annoying for me to go to the settings and change that every time.

So i searched for a solution and i found someone who solved the problem in windows by creating an app which moves the pointer every 5 minutes and if you didn't want that you just close the app by closing it from its icon in the taskbar.
And it really worked out for me !!! And it was a brilliant solution.

But after sometime i faced the same problem on linux, and i searched again and i didn't find anything useful.
So... i decided to do it !

I searched how i can move the pointer in C++ code in linux and i discovered that linux provides an interface for that called X11 or xlib (i am not sure what its name) and searched for the pointer functionality and i test it and it worked !

and made a loop which keeps running and every iteration it just moves the pointer just and tiny movement and moves it again to its original place and sleeps for 5 minutes.


It worked with me on Mint 18 and i really believe it should work on any linux distro.

Have Fun with it.
And i am really waiting for your ideas and opinions.
