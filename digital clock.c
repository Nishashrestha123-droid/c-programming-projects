#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    int hour, minute, second;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Set the path to your BGI folder

    settextstyle(3, 0, 4);
    outtextxy(150, 50, "Digital Clock");

    while (!kbhit()) {
        struct time t;
        gettime(&t);
        hour = t.ti_hour;
        minute = t.ti_min;
        second = t.ti_sec;

        char timeStr[20];
        sprintf(timeStr, "%02d:%02d:%02d", hour, minute, second);

        setcolor(WHITE);
        settextstyle(3, 0, 6);
        outtextxy(180, 200, timeStr);
        delay(1000);
        setcolor(BLACK);
        outtextxy(180, 200, timeStr);  // Clear previous time
    }

    getch();
    closegraph();
    return 0;
}
