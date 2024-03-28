#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
	initwindow(400,300,"DDA");
	int x1,y1,x2,y2,dx,dy,length;
	int x,y,i;
	printf("\n        **************************DDA Algorithm**************************     \n");
	printf("Enter the points of the line : ");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	outtextxy(10,10,"     *********DDA Algorithm*********");

	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy)
	{
	   length=dx;
	}
	else
	{
	   length=dy;
	}
	dx=(x2-x1)/length;
	dy=(y2-y1)/length;
	x=x1;
	y=y1;
	i=1;
	putpixel(x,y,14);
	while(i<=length)
	{
		x=x+dx;
		y=y+dy;
		putpixel(x,y,14);
		i=i+1;
		
	}
	getch();
	closegraph();
	
	
}
