#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void disp();
float x,y;
int xc,yc;
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
int rx,ry;
float p1,p2;
clrscr();
printf("Enter the center point:");
scanf("%d%d",&xc,&yc);
printf("Enter value for Rx and Ry:");
scanf("%d%d",&rx,&ry);
x=0;
y=ry;
disp();
p1=(ry*ry)-(rx*rx*ry)+(rx*rx)/4;
while((2*ry*ry*x)<=(2*rx*rx*ry))
{
x++;
if(p1<0)
{
p1=p1+(2*ry*ry*x)+(ry*ry);
}
else
{
y--;
p1=p1+(2*ry*ry*x)-(2*rx*rx*y)+(ry*ry);
}
disp();
x=-x;
disp();
x=-x;
}
x=rx;
y=0;
disp();
p2=(rx*rx)+(2*ry*ry*rx)+(ry*ry)/4;
while((2*ry*ry*x)>(2*rx*rx*y))
{
y++;
if(p2>0)
{
p2=p2+(rx*rx)-(2*rx*rx*y);
}
else
{
x--;
p2=p2+(2*ry*x)-(2*rx*rx*ry)+(rx*rx);
}
disp();
y=-y;
disp();
y=-y;
}
getch();
closegraph();
}
void disp()
{
putpixel(xc+x,yc+y,10);
putpixel(xc-x,yc+y,10);
putpixel(xc+x,yc-y,10);
putpixel(xc-x,yc-y,10);
}
