
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main123151512()
{
	int score;
	printf("----欢迎来到志愿系统----\n请输入你高考的成绩:\n");
	scanf("%d", &score);//scanf 禁止使用\n &为指针
	if (score < 0 ) 
	{
		printf("成绩不能为负数!");
	}
	else if (score == 0) 
	{
		printf("成绩无效!");
	}
	else if (score > 750)
	{
		printf("成绩无效!");
	}
	else if (score <=200)
	{
		printf("无可以选择的学校");
	}
	else if(score <= 450)
	{
		printf("建议填报专科录取几率较大");
	}
	else if (score <=530) 
	{
		printf("建议填报普本录取几率较大");
	}
	else if (score <= 600)
	{
		printf("可以冲击一下双非一本或211");
	}
	else if(score <= 650){
		printf("可以冲击一下双一流大学");
	}
	else {
		printf("可以冲击一下清北哈工");
	}
	return 0;
}
