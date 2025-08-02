#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
    int gd = DETECT,gm;
    int x,y,radius;
    intgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    x=getmaxx()/2;
    y=getmaxy()/2;
    for(radius=20;radius<=120;radius++){
        circle(x,y,radius);
    }
     getch();  
    closegraph();  
    return 0;
}

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include <stdlib.h> 
int main(){
    int gd= DETECT,gm,errorCode;
    initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
    errorCode = graphresult();
    if(errorCode != grOk){
        printf("Graphics is not initialization\n");
        exit(1);
    }
    rectangle(150,250,250,300);
    getch();
    closegraph();
}

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include <stdlib.h> 
int main(){
    int gd= DETECT,gm,errorCode;
    initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
    errorCode = graphresult();
    if(errorCode != grOk){
        printf("Graphics is not initialization\n");
        exit(1);
    }
    line(200, 100, 250, 150);
    line(250, 150, 250, 220);
    line(250, 220, 200, 270);
    line(200, 270, 150, 220);
    line(150, 220, 150, 150);
    line(150, 150, 200, 100);
    getch();
    closegraph();
}

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include <stdlib.h> 
int main(){
    int gd= DETECT,gm,errorCode;
    initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
    errorCode = graphresult();
    if(errorCode != grok){
        printf("Graphics is not initialization\n");
        exit(1);
    }
    line(100,100,200,200);
    getch();
    closegraph();
}

#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawNepalFlag() {
    // Set color and draw outline of flag
    setcolor(WHITE);

    // Draw outer triangle (big)
    line(100, 100, 100, 400);   // Left side
    line(100, 100, 300, 250);   // Top slant
    line(300, 250, 100, 250);   // Middle line

    // Draw inner triangle (small)
    line(100, 250, 300, 400);   // Bottom slant
    line(300, 400, 100, 400);   // Bottom horizontal

    // Fill the triangle with red
    setfillstyle(SOLID_FILL, RED);
    floodfill(150, 150, WHITE);
    floodfill(150, 300, WHITE);

    // Draw border with blue
    setcolor(BLUE);
    setlinestyle(SOLID_LINE, 0, 3);
    line(100, 100, 100, 400);
    line(100, 100, 300, 250);
    line(300, 250, 100, 250);
    line(100, 250, 300, 400);
    line(300, 400, 100, 400);

    // Draw moon (top triangle)
    setcolor(WHITE);
    circle(140, 180, 20);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(140, 180, WHITE);

    // Mask part of moon to look crescent
    setcolor(RED);
    circle(145, 180, 20);
    setfillstyle(SOLID_FILL, RED);
    floodfill(145, 180, RED);

    // Draw sun (bottom triangle)
    setcolor(WHITE);
    circle(150, 320, 15);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(150, 320, WHITE);

    // Simple sun rays
    line(150, 305, 150, 335);
    line(135, 320, 165, 320);
    line(140, 310, 160, 330);
    line(140, 330, 160, 310);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    drawNepalFlag();

    getch();
    closegraph();
    return 0;
}
