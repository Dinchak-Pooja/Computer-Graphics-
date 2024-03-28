#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

  void flood(int x, int y, int newcolor, int oldcolor)
	{
		if(getpixel(x,y)==oldcolor)
		{
			putpixel(x,y,newcolor);
			delay(0);
			flood(x+1,y,newcolor,oldcolor);
			flood(x,y+1,newcolor,oldcolor);
			flood(x-1,y,newcolor,oldcolor);
			flood(x,y-1,newcolor,oldcolor);
		}
	}
int main()
{
	initwindow(500,700,"Floodfill");
	rectangle(100,100,200,200);
	flood(101,101,9,0);
	getch();
	closegraph();
}

