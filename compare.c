#include<stdio.h>
int main(void)
{
	int a, b, c,max;
	int temp;
	printf("������3����\n");
	scanf_s("%d%d%d", &a, &b, &c);
	//����һ
	/*if (a > b || a > c)
	{
		max = a;
	}
	if (b > a || b > c)
	{
		max = b;
	}
	if (c > a || c > b)
	{
		max = c;
	}
	printf("%d", max);*/
	//������
	/*max = a;
	if (b>max)
	{
		max = b;
		if (max > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	else
	{
		max = a;
	}
	printf("%d", max);*/

	//��С�����������
	
	if (a > b)
	{
		temp = a; a = b; b = temp;
	}
	if (a > c)
	{
		temp = a; a = c; c = temp;
	}
	if (b > c)
	{
		temp = b; b = c; c = temp;
	}
	printf("%d %d %d\n", a, b, c);


	return 0;
}