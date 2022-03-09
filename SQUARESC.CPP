#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
int x1,y1,x2,y2,sx,sy;
printf("Enter starting points:");
scanf("%d%d",&x1,&y1);//x1=70y1=120
printf("Enter ending points:");
scanf("%d%d",&x2,&y2);//x2=120y2=170
rectangle(x1,y1,x2,y2);
printf("Enter scalling factor:");
scanf("%d%d",&sx,&sy); //sx=2sy=2
printf("After Scalling:");
rectangle(x1*sx,y1*sy,x2*sx,y2*sy);
getch();
closegraph();
}