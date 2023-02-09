#include <stdio.h> //printf
#include<string.h>
#include<stdlib.h>


int main2() {
	//system函数 用来打开一个外部的应用程序 如果带路径 要使用`\\`或者 `/`
	int value = system("calc");
	printf("%d\n" + value); //%d 占位符 整形输出
	return 0;
}