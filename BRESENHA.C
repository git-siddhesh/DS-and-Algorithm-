#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int i=0;
int gd = DETECT, gm;
int xo=5,yo=5,x1=13,y1=11,dx,dy,m,p,k;
initgraph(&gd, &gm, "C:/TURBOC3/BGI");

clrscr();
dx = x1-xo;
dy = y1-yo;
m = dy/dx;
if(m<1){
// starting value for the decision parameter
p = 2*dy-dx;
//for all value of xk where k=0
for(k=0;k<=dx;k++)
{
	if(p<0){
		xo+=1;
		p+=2*dy;
	}
	else{
		xo+=1;
		yo+=1;
		p+=2*dy-2*dx;
	}
	putpixel(xo,yo,RED);
	delay(100);
	printf("%d %d\n",xo,yo);
}
}
getch();
closegraph();

}