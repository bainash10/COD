#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
//first arc:
ellipse(100,100,270,90,70,30);
arc(100,100,270,90,30);
line(170,100,250,100);
line(115,75,30,75);
line(115,125,30,125);
circle(25,75,5);
circle(25,125,5);
circle(255,100,5);
outtextxy(10,70,"A");
outtextxy(10,120,"B");
outtextxy(265,100,"C");
outtextxy(100,150,"OR gate");
outtextxy(260,190,"Table of OR Gate");
rectangle(200,200,450,350);
	//vertical
	line(325,200,325,350);
	line(265,225,265,350);
//horizontal
line(200,225,450,225);
outtextxy(235,210,"Input");
outtextxy(365,210,"Output");
line(200,250,450,250);
outtextxy(220,235,"A");
outtextxy(300,235,"B");
line(200,275,450,275);
line(200,300,450,300);
line(200,325,450,325);
line(200,350,450,350);

//input
outtextxy(220,260,"0");
outtextxy(300,260,"0");
outtextxy(220,285,"0");
outtextxy(300,285,"1");
outtextxy(220,310,"1");
outtextxy(300,310,"0");
outtextxy(220,335,"1");
outtextxy(300,335,"1");

//output
outtextxy(380,235,"C");
outtextxy(380,260,"0");
outtextxy(380,285,"1");
outtextxy(380,310,"1");
outtextxy(380,335,"1");
getch();
}