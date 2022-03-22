#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
int x1,y1,x2,y2,x3,y3,x4,y4,tx,ty;
printf("Enter initial points:");
scanf("%d%d",&x1,&y1);
printf("Enter ending points:");
scanf("%d%d",&x2,&y2);
printf("Enter translation distance:");
scanf("%d%d",&tx,&ty);
line(x1,y1,x2,y2);
line(x1+tx,y1+ty,x2+tx,y2+ty);
getch();
}