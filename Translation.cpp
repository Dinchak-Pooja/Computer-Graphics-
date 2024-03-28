#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	initwindow(500,700,"Translation");
	outtextxy(10,10,"   Scalling    ");
	int x1,y1,x2,y2,Sx,Sy;
	printf("Enter the Translating endpoints : ");
	scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
	rectangle(x1,y1,x2,y2);
	printf("Enter the Translating points : ");
	scanf("%d%d", &Sx, &Sy);
	
	x1=x1+Sx;
	y1=y1+Sy;
	x2=x2+Sx;
	y2=y2+Sy;
	rectangle(x1,y1,x2,y2);
	getch();
	closegraph();
}
