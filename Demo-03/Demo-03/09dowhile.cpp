#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main15124124()
{
	int i = 0;
	//基本格式
	do 
	{
		printf("%d\n",i);
		i++;
	} while (i<=10);
	//不同与while的时,它是先执行循环体,再去判断条件是否为真
	return EXIT_SUCCESS;
}
//求1000以内的 水仙花数
int main12314124(){
	int i = 100;
	//基本格式
	do
	{
		//水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身。例如：1^3 + 5^3+ 3^3 = 153

		//拿到这个数的百位
		int hundred = i / 100 % 10;
		//十位
		int ten = i / 10 % 10;
		//个位
		int bits = i / 1 % 10;
		if (pow(hundred, 3) + pow(ten, 3) + pow(bits, 3) == i) {
			printf("%d\n", i);
		}
		i++;
	} while (i < 1000);
	//不同与while的时,它是先执行循环体,再去判断条件是否为真
	return EXIT_SUCCESS;
}

int main1231241() {
	int i = 356;
	int hundred = i / 100 % 10;
	//(i % 100)/10;
	int ten = i / 10 % 10;
	int bits = i / 1 % 10 ;
	//pow(hundred, 3) + pow(ten, 3) + pow(bits, 3)
	int a = pow(hundred, 3) + pow(ten, 3) + pow(bits, 3);
	printf("%d\n", hundred);
	printf("%d\n", ten);
	printf("%d\n", bits);
	printf("%d\n", a);
	return EXIT_SUCCESS;
}