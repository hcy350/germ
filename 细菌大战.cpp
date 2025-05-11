#include<bits/stdc++.h>
#include<graphics.h>
void gongji(int num);
void draw(int x,int y,int color);
void fenshu();
int ax[100],ay[100],by[100],bx[100],anxia=0,fenshu=100,jia=2,fenshuhong=100,yanse=2;
using namespace std;
int main()
{
	initgraph(400,400,8);
	setbkcolor(WHITE);
	ege_enable_aa(true);
	
	for(int i=0;i<100;i++)
	{
		ax[i]=45;
		ay[i]=45;
		bx[i]=375;
		by[i]=375;
	}
	for(;is_run();delay_fps(60))
	{
		cleardevice();
		setfillcolor(BLUE);
		ege_fillellipse(0,0,40,40);
		setfillcolor(RED);
		ege_fillellipse(380,380,40,40);
		if(keystate(key_Q))gongji(0);
		if(keystate(key_P))gongji(1);
	}
	closegraph();
	return 0;
}
void gongji(int num)
{
	anxia+=1;
	if(num==0)
	{
		for(;is_run();delay_fps(60))
		{
			cleardevice();
			for(int i=0;i<100;i++)
			{
				if(anxia==2)
				{
					anxia=0;
					break;
				}
				ax[i]+=2;
				ay[i]+=2;
				if(ax[i]!=380)draw(ax[i],ay[i],0);
				else{
					ax[i]=45;
					ay[i]=45;
					jia=1;
					yanse=0;
				}
			}
			if(anxia==2)
			{
				anxia=0;
				break;
			}
		}
	}
	if(num==1)
	{
		for(;is_run();delay_fps(60))
		{
			cleardevice();
			for(int i=0;i<100;i++)
			{
				bx[i]-=2;
				by[i]-=2;
				if(bx[i]!=40)draw(bx[i],by[i],1);
				else{
					bx[i]=45;
					by[i]=45;
					jia=1;
					yanse=1;
				}
				if(anxia==2)
				{
					anxia=0;
					break;
				}
			}
			if(anxia==2)
			{
				anxia=0;
				break;
			}
		}
	}
}
void draw(int x,int y,int color)
{
	if(color==0)
	{
		if(x!=0&&y!=0)
		{
			setfillcolor(BLUE);
			ege_fillellipse(x,y,5,5);
		}
	}
	if(color==1)
	{
		if(x!=0&&y!=0)
		{
			setfillcolor(RED);
			ege_fillellipse(x,y,5,5);
		}
	}
}
void fenshu()
{
	while(1)
	{
		if(jia==1)
		{
			
		}
	}
}