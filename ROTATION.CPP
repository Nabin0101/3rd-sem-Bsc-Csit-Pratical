#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
float x1,y1,x2,y2,x3,y3,x4,y4,t;
printf("Enter starting points:");
scanf("%f%f",&x1,&y1);
printf("Enter ending points:");
scanf("%f%f",&x2,&y2);
printf("Enter angle of rotation:");
scanf("%f",&t);
line(x1,y1,x2,y2);
x3=x1*cos(t)-y1*sin(t);
y3=x1*sin(t)+y1*cos(t);
x4=x2*cos(t)-y2*sin(t);
y4=x2*sin(t)+y2*sin(t);
line(x3,y3,x4,y4);
getch();
closegraph();
}
