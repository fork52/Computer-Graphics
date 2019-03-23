//Breesanham's correct  code
#include<stdio.h>
//#include<dos.h>
//#include<graphics.h>
#include<math.h>
#include<conio.h>

int sign(float arg){
	if(arg<0)           return -1;
	else if(arg==0)		return 0;
	else                return 1;
}

void BresenhamAlgo(int x1,int y1,int x2,int y2){
	int s1,s2,exchange,y,x,i;
	int dx,dy,g,temp;

	dx=(int)abs(x2-x1);
	dy=(int)abs(y2-y1);

	x=x1;
	y=y1;

	s1=sign(x2-x1);
	s2=sign(y2-y1);

	if(dy>dx){
		temp=dx;
		dx=dy;
		dy=temp;
		exchange=1;
	}
	else{
		exchange=0;
	}

	g=g*dy-dx;
	i=1;

	while(i<=dx){
		printf("\n(%d,%d)",x,y);
	//	delay(10);
		if(g>=0){

			x=x+s1;
			y=y+s2;

			g=g+2*dy-2*dx;
		}
		else {

			if(exchange==1)
				y=y+s2;

			else
				x=x+s1;

			g=g+2*dy;
		}
			i++;


	}


}//func


void main()
{

//int gdriver = DETECT,gmode;

//	initgraph(&gdriver,&gmode," C:\\TURBOC3\\BGI");
	//line(10,10,200,200);

	BresenhamAlgo(600,100,300,100);
getch();
//closegraph();
//restorecrtmode();
}

