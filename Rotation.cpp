#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	initwindow(500,600,"Rotation");
	int x1,y1,x2,y2,x,y,xn,yn;
	double r11,r12,r21,r22,th;
	printf("Enter the coordinate of the rotation : ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	rectangle(x1,y1,x2,y2);
	printf("Enter the angle : ");
	scanf("%lf",&th);
	r11=cos((th*3.142)/180);
	r12=sin((th*3.142)/180);
	r21=(-sin((th*3.142)/180));
	r22=cos((th*3.142)/180);
	xn=((x2*r11)-(y2*r12));
	yn=((x2*r12)-(y2*r22));
	line(x1,y1,xn,yn);
	getch();
	closegraph();
	
	
}
