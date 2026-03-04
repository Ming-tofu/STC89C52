#include <REGX52.H>

void Timer0_Init(void)		//1毫秒@11.0592MHz
{
	TMOD &= 0xF0;		//设置定时器模式
	TMOD |= 0x01;
	TL0 = 0x66;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
	ET0=1;
	EA=1;
}
//void Timer0_Routine() interrupt 1
//{
//	static unsigned int Timer0_Count=0;
//	TL0=0x66;
//	TH0=0xFC;
//	Timer0_Count++;
//	if(Timer0_Count>=1000)
//	{
//		Timer0_Count=0;
//		P2_0=~P2_0;
//	}
//}

