#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, x4, y3, y4, tx, ty;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("Enter the starting point of line segment : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the ending point of line segment : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter translation distances tx, ty : ");
    scanf("%d %d", &tx, &ty);
    setcolor(5);
    line(x1,y1,x2,y2);
    outtextxy(x2+2, y2+2, "original line");
    x3=x1+tx;
    y3=y1+ty;
    x4=y2+ty;
    setcolor(7);
    line(x3,y3,x4,y4);
    outtextxy(x4+2, y4+2, "line after transformation");
    getch();

}
