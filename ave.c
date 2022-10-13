#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	int average = 0;
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + a[i];
	}
	average = sum / 10;
	printf("average=%d\n", average);
	return 0;
}