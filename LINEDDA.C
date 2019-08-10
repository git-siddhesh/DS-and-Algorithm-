#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
//#define Round(a) (int(a+0.5))

void line_DDA(int xa, int ya, int xb, int yb){
	int dx = xb-xa, dy = yb-ya, slope, k;
	float xincr, yincr, x = xa, y = ya;
	if(abs(dx) > abs(dy))
		slope = dx;
	else slope = dy;
	xincr = dx/(float)slope;
	yincr = dy/(float)slope;
	putpixel(x,y,RED);
	for(k=0; k<slope; k++){
		x+= xincr;
		y+= yincr;
 //		printf("%d ",x);
		putpixel(x,y,WHITE);
		delay(50);
	}
}
void main()
{	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
	line_DDA(10,10,100,100);
	getch();
	closegraph();
}