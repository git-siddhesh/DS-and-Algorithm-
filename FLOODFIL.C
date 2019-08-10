#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
	void floodfill4(x,y,fill,old)
	{	int current = getpixel(x,y);
		if(current==old)
		{		putpixel(x,y,fill);
				delay(10);

			floodfill4(x+1,y,fill,old);
			floodfill4(x,y+1,fill,old);
			floodfill4(x-1,y,fill,old);
			floodfill4(x,y-1,fill,old);
		}
	}

	void main()
	{	int gd = DETECT, gm,i;
		initgraph(&gd, &gm, "c:/turboc3/bgi");
		clrscr();
		setcolor(WHITE);
		for(i=0;i<50;i++)
		{	line(100,100+i,150,100+i);
			delay(10);
		}
		floodfill4(101,101,BLUE,WHITE);
		getch();
		closegraph();
	}