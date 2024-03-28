#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm, "c:\\tc\\bgi");
	int x1,x2,y1,y2;
	int dx,dy;
	int x,y;
	int Pk;
	printf("\n        **************************Bresenhams Algorithm**************************     \n");
	printf("Enter the points of the line : ");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	outtextxy(10,10,"  ***************Bresenham Algorithm*************");
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	x=x1;
	y=y1;
	int i=0;
	while(i<=dx)
	{
	putpixel(x,y,13);
	Pk=2*dy-dx;
	if(Pk<0)
	{
		x=x+1;
		y=y;
		Pk=Pk+2*dy;
	}
	else
	{
		x=x+1;
		y=y+1;
		Pk=Pk+2*dy-2*dx;
	}
	i++;
	putpixel(x,y,13);
	}
	getch();
	closegraph();
}
