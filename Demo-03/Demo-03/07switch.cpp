#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main11512412()
{
	//switch 翻译为:开关
	int score;
	scanf("%d", &score);
	//switch 优点效率比 if else 要高,缺点只能判断单一区间
	switch (score / 10)
	{
		case 10: {
			printf("优秀!");
			break;
		}
		case 9: {
			printf("优秀!");
			break;
		}
		case 8: {
			printf("良好!");
			break;

		case 7: {
			printf("良好!");
			break;
		}
		case 6: {
			printf("及格!");
			break;
		}
		case 5: {
			//验证
			printf("不及格!%d", score / 10);
			break;
		}
		default: {
			//补,之外的情况下
			printf("成绩较差");
			break;
		}
	}
	return 0;
	}
}