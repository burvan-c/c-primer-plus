#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>    //提供strlen函数原型
#include<limits.h>   //整型限制
#include<float.h>    //浮点型限制


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


//#define praise "you are an extraordinary being."
//	char name[40];
//	printf("what's your name?");
//	scanf("%s", name);//scanf只读取到第一个空白符（空格、制表符、换行符）就不再读取
//	printf("hello,%s.%s\n", name, praise);
//	printf("your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
//	printf("the phrase of praise has %zd letters ", strlen(praise));
//	printf("and occupies %zd memory cells.\n", sizeof(praise));
	//strlen会把字符串末尾不可见空格符也计算在内,不管什么类型strlen后面都要加上括号




//#define pi 3.14159
//	float area, circum, radius;
//	printf("what's the radius of your pizza?\n");
//	scanf("%f", &radius);
//	area = pi * radius * radius;
//	circum = 2.0 * pi * radius;
//	printf("your basic pizza parameters are as follows:\n");
//	printf("circumference=%1.2f,area=%1.2f\n", circum, area);
	//%1.2f---以两位小数输出




	/*printf("some number limits for this system:\n");
	printf("biggest int: %d\n", INT_MAX);
	printf("smallest long long: %lld\n", LLONG_MIN);
	printf("one byte = %d bits on this sistem.\n", CHAR_BIT);
	printf("largest double: %e\n", DBL_MAX);
	printf("smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);*/


#define pi 3.141593
	int number = 7;
	float pies = 12.75;
	int cost = 7800;
	printf("the %d contestants ate %f berry pies.\n", number, pies);
	printf("the value of pi is %f.\n", pi);
	printf("farewell! thou art too dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);
	return 0;
}
