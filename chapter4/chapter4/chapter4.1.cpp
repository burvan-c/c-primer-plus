#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>    //提供strlen函数原型

int main()
{
//#define density 62.4   //定义人体密度
//	float weight, volume;
//	int size, letters;
//	char name[40];   //name可容纳40个字符的数组
//
//	printf("hi,what's your first name?\n");
//	scanf("%s", name);//把字符串读入字符数组中不用加&符号
//	printf("%s,what,s your weight in pounds\n", name);
//	scanf("%f", &weight);//读取变量的值，要加&符号
//	size = sizeof name;
//	letters = strlen(name);
//	volume = weight / density;
//	printf("well,%s,your volume is %2.2f cubic feet.\n", name, volume);
//	printf("also,your first name has %d letters,\n", letters);
//	printf("and we have %d bytes to store it.\n", size);


#define praise "you are an extraordinary being."
	char name[40];
	printf("what's your name?");
	scanf("%s", name);//scanf只读取到第一个空白符（空格、制表符、换行符）就不再读取
	printf("hello,%s.%s\n", name, praise);
	printf("your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
	printf("the phrase of praise has %zd letters ", strlen(praise));
	printf("and occupies %zd memory cells.\n", sizeof(praise));
	//strlen会把字符串末尾不可见空格符也计算在内,不管什么类型strlen后面都要加上括号


	return 0;
}
