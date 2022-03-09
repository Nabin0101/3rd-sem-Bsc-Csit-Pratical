#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
int x1,y1,x2,y2,tx,ty;
printf("Enter left and top points :");
scanf("%d%d",&x1,&y1);  //x1=100 x2=150
printf("Enter right and bottom points");
scanf("%d%d",&x2,&y2);// x2=200 y2=250
rectangle(x1,y1,x2,y2);
printf("Enter translation Factor:");
scanf("%d%d",&tx,&ty);//tx=10ty=10
x1=x1+tx;
y1=y1+ty;
x2=x2+tx;
y2=y2+ty;
printf("After Translation");
rectangle(x1,y1,x2,y2);
getch();
closegraph();
}
