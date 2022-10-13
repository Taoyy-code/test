#include<stdio.h>
#include<math.h>
int main()
{
	int age = 0;
	double sum = 0;
	double n = 3.156 * pow(10, 7);
	printf("请输入年龄：");
	scanf_s("%d/n", &age);
	sum = age * n;
	printf("对应的秒数为：%f", sum);
	return 0;
}
