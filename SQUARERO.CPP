#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
float x1,y1,x2,y2,r;
printf("Enter starting points:");
scanf("%f%f",&x1,&y1);//x1=300x2=350
printf("Enter ending points:");
scanf("%f%f",&x2,&y2);//x2=350y2=400
rectangle(x1,y1,x2,y2);
printf("Enter rotation angle:");
scanf("%f",&r);//r=-0.11
x1=x1*cos(r)-y1*sin(r);
y1=x1*sin(r)+y1*cos(r);
x2=x2*cos(r)-y2*sin(r);
y2=x2*sin(r)+y2*cos(r);
printf("After Rotation:");
rectangle(x1,y1,x2,y2);
getch();
closegraph();
}

