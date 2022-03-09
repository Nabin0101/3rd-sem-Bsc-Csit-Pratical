#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
float round(float a);
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
int x1,y1,x2,y2,step,k;
float xincr,yincr,x,y,dx,dy;
printf("Enter x1,y1");
scanf("%d%d",&x1,&y1);
printf("Enter x2,y2");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
{
step=abs(dx);
}
else
{
step=abs(dy);
}
xincr=dx/step;
yincr=dy/step;
x=x1;
y=y1;
for(k=1;k<=step;k++)
{
x=x+xincr;
y=y+yincr;
putpixel(round(x),round(y),WHITE);
}
outtextxy(200,20,"DDA");
outtextxy(x1+5,y1-5,"(x1,y1)");
outtextxy(x2+5,y2-5,"(x2,y2)");
getch();
closegraph();
}
float round(float a)
{
int b=a+0.5;
return b;
}
