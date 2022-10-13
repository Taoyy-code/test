#include<stdio.h>
int main()
{
	int y;
	printf("请输入年份\n");
	scanf_s("%d", &y);
	if (y % 400 == 0 ||( y % 4 == 0 && y % 100 != 0))
	{
		printf("%d是闰年", y);
	}
	else
	{
		printf("%d是平年", y);
	}
	return 0;
}