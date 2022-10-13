#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10;i++)
	{
		scanf_s("%d", &a[i]);
	}
	int max = a[0];
	for (i = 1; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("max=%d", max);
	return 0;
}
