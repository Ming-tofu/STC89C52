#include <REGX52.H>

void Delay(unsigned char nms)		//@12.000MHz
{
	while(nms--)
	{
		unsigned char i, j;
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}
