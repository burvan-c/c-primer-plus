#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>    //�ṩstrlen����ԭ��
#include<limits.h>   //��������
#include<float.h>    //����������


int main()
{
//#define density 62.4   //���������ܶ�
//	float weight, volume;
//	int size, letters;
//	char name[40];   //name������40���ַ�������
//
//	printf("hi,what's your first name?\n");
//	scanf("%s", name);//���ַ��������ַ������в��ü�&����
//	printf("%s,what,s your weight in pounds\n", name);
//	scanf("%f", &weight);//��ȡ������ֵ��Ҫ��&����
//	size = sizeof name;
//	letters = strlen(name);
//	volume = weight / density;
//	printf("well,%s,your volume is %2.2f cubic feet.\n", name, volume);
//	printf("also,your first name has %d letters,\n", letters);
//	printf("and we have %d bytes to store it.\n", size);


//#define praise "you are an extraordinary being."
//	char name[40];
//	printf("what's your name?");
//	scanf("%s", name);//scanfֻ��ȡ����һ���հ׷����ո��Ʊ�������з����Ͳ��ٶ�ȡ
//	printf("hello,%s.%s\n", name, praise);
//	printf("your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
//	printf("the phrase of praise has %zd letters ", strlen(praise));
//	printf("and occupies %zd memory cells.\n", sizeof(praise));
	//strlen����ַ���ĩβ���ɼ��ո��Ҳ��������,����ʲô����strlen���涼Ҫ��������




//#define pi 3.14159
//	float area, circum, radius;
//	printf("what's the radius of your pizza?\n");
//	scanf("%f", &radius);
//	area = pi * radius * radius;
//	circum = 2.0 * pi * radius;
//	printf("your basic pizza parameters are as follows:\n");
//	printf("circumference=%1.2f,area=%1.2f\n", circum, area);
	//%1.2f---����λС�����




	/*printf("some number limits for this system:\n");
	printf("biggest int: %d\n", INT_MAX);
	printf("smallest long long: %lld\n", LLONG_MIN);
	printf("one byte = %d bits on this sistem.\n", CHAR_BIT);
	printf("largest double: %e\n", DBL_MAX);
	printf("smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);*/


//#define pi 3.141593
//	int number = 7;
//	float pies = 12.75;
//	int cost = 7800;
//	printf("the %d contestants ate %f berry pies.\n", number, pies);
//	printf("the value of pi is %f.\n", pi);
//	printf("farewell! thou art too dear for my possessing,\n");
//	printf("%c%d\n", '$', 2 * cost);


//#define pages 959
//		printf("*%d*\n", pages);
//		printf("*%2d*\n", pages);//2�ֶο�ȣ��Զ�����
//		printf("*%10d*\n", pages);//10�ֶο�ȣ��Ҷ���
//		printf("*%-10d*\n", pages);//10�ֶο�ȣ������


	const double rent = 3852.99;
	printf("*%f*\n", rent);//�ֶο�Ⱥ�С��λ��ΪϵͳĬ��
	printf("*%e*\n", rent);//%e--С�������һλ���֣�С�����Ҳ�6λ����
	printf("*%4.2f*\n", rent);//2��С��
	printf("*%3.1f*\n", rent);//��������
	printf("*%10.3f*\n", rent);//10������2��С��
	printf("*%10.3E*\n", rent);//���������E
	printf("*%+4.2f*\n", rent);
	printf("*%010.2f*\n", rent);//ǰ�油0

	return 0;
}
