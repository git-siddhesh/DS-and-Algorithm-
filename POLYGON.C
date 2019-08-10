#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main(){

    int gd = DETECT,gm,i,j;
    initgraph(&gd,&gm,"C:/TURBOC3/BGI");
    rectangle(70,90,570,390);
    line(70,240,570, 240);
    for(i=70;i<=320;i+=5){
	for(j=90;j<240;j++){
	    putpixel(i,j,15);
	}
	delay(50);
    }
    for(i=320;i<=570;i+=5){
	for(j=90;j<240;j+=5){
	    putpixel(i,j,15);
	}
	delay(50);
    }
    for(i=70;i<=320;i++){
	for(j=240;j<390;j++){
	    putpixel(i,j,15);
	}
	delay(10);
    }
    for(i=320;i<=570;i++){
	for(j=240;j<390;j+=10){
	    putpixel(i,j,15);
	}
	delay(20);
    }
    getch();
    closegraph();
}
