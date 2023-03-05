#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#include "main.h"
#define Width 40

int main()
{
	char str[] = "欢迎使用强盛银行系统";

	bar('/', Width);		//斜线
	printf("\n");	//换行
	space((Width - sizeof(str))/2);		//预留空格
	printf(str);	
	printf("\n");	//换行
	bar('-',Width);		//横线
	//输出命令目录一行一个
	char cmd[] = "\n0:退出\n1:查看银行卡余额\n";
	//输出操作列表
	printf(cmd);
	//设置外部变量
	bool qt = false;	//控制死循环退出
	bool close = false;		//控制确定返回
	while (!qt)
	{	
		bar('-', Width);		//横线
		printf("\n");//换行
		int i = getchar() - '0'; 	//输入命令
		getchar();
		switch (i)
		{
		case 0:
		{
			printf("确定退出吗? 0:返回 1:确定\n");//换行
			int n = getchar() - '0'; 	//输入命令
			getchar();
			if (n == 1)	//询问是否退出
			{
				qt = true;
			}
			break;
		}
		case 1: 
		{
			printf("请输入银行卡卡号:");//换行
			int num;
			scanf("%d", &num);
			printf("%d\n",num);
			break;
		}
			
		}
	}
	printf("系统正在退出\n退出成功!");
	return EXIT_SUCCESS;
}
