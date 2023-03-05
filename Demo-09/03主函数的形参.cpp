#include <stdio.h>
#include <stdlib.h>


//如果使用gcc -o hello.c(4个参数 "gcc" "-o" "hello" "hello.c")
//int argc 表示传递参数的个数
//char * argv[] = {"gcc" "-o" "hello" "hello.c"};
int main0003(int argc ,char * argv[])
{
	for (int i = 0 ; i < argc ; i++)
	{
		printf("%s\n",argv[i]);
	}
	return 0;
}
/*
* 在C语言的main函数中，argc和argv[]是用来接收命令行参数的。
argc表示命令行参数的个数，包括程序本身。例如，如果你在命令行中输入./my_program arg1 arg2，那么argc的值就为3。

argv[]是一个字符指针数组，每个元素指向一个命令行参数的字符串。
第一个元素argv[0]指向程序本身的名称，第二个元素argv[1]指向第一个命令行参数的字符串，
以此类推。在上面的例子中，argv[0]的值为./my_program，argv[1]的值为arg1，argv[2]的值为arg2。

通过使用argc和argv[]，我们可以在程序运行时获取命令行参数，根据不同的参数来执行不同的操作。
这在很多应用中都非常有用，例如在命令行中执行不同的操作、传递配置信息等。
*/