#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>    //�ṩstrlen����ԭ��

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


#define praise "you are an extraordinary being."
	char name[40];
	printf("what's your name?");
	scanf("%s", name);//scanfֻ��ȡ����һ���հ׷����ո��Ʊ�������з����Ͳ��ٶ�ȡ
	printf("hello,%s.%s\n", name, praise);
	printf("your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
	printf("the phrase of praise has %zd letters ", strlen(praise));
	printf("and occupies %zd memory cells.\n", sizeof(praise));
	//strlen����ַ���ĩβ���ɼ��ո��Ҳ��������,����ʲô����strlen���涼Ҫ��������


	return 0;
}
