#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundary(int x, int y, int f_color, int b_color)
{
	if(getpixel(x,y)!=b_color&&getpixel(x,y)!=f_color)
	{
		putpixel(x,y,f_color);
		delay(0);
		boundary(x+1,y,f_color,b_color);
		boundary(x,y+1,f_color,b_color);
		boundary(x-1,y,f_color,b_color);
		boundary(x,y-1,f_color,b_color);
	}
}
int main()
{
	initwindow(500,700,"BoundaryFill");
	int xb,yb,r;
	xb=200;
	yb=200;
	r=120;
	circle(xb,yb,r);
	boundary(xb+10,yb+10,5,15);
	getch();
	closegraph();
}
