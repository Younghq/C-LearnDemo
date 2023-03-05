#include <stdio.h>
#include "main.h"

void bar(char s,int n)
{
	for (size_t i = 0; i < n; i++)
	{
		putchar(s);
	}
}

void starbar()	//Ä¬ÈÏ²ÎÊý
{
	bar('*', 40);
}

void space(int n)
{
	bar(' ',n);
}

double savemoney(double money)
{
	return 0.0;
}

double getmoney(double money)
{
	return 0.0;
}

void checkbalance(int cardid)
{

}


