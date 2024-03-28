#include<graphics.h>
#include<iostream>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm, "c:\\tc\\bgi");
	int x,y,d,r;
	printf("Enter coordinates :");
	scanf("%d %d",&x,&y);
	printf("\nEnter radius:");
	scanf("%d",&r);
	x=0;
	y=r;
	d=1.25-r;
	do{
		putpixel(x,y,YELLOW);
		if(d>0){
			x=x+1;
			y=y;
			d=d=(2*x)+1;
		}
		else{
			x=x+1;
			y=y+1;
			d=d+(2*x)+(2*y)+1;
		}
	}
	while(x<y);
	getch();
	
}
