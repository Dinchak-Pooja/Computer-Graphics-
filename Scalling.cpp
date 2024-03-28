#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	initwindow(500,700,"scalling");
	outtextxy(10,10,"   Scalling    ");
	int x1,y1,x2,y2,Sx,Sy, x,y,r;
	printf("Enter the Scalling endpoints : ");
	scanf("%d%d%d", &x1,&y1,&r);
	circle(x1,y1,r);
	printf("Enter the Scalling points : ");
	scanf("%d%d", &Sx, &Sy);
	
	x1=x1*Sx;
	y1=y1*Sy;
	r=r*Sx;
	//y2=y2*Sy;
	circle(x1,y1,r);
	getch();
	closegraph();
}
