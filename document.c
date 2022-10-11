#include<stdio.h>
#include<stdlib.h>
int main()
{
	//打开文件
	FILE* fp = fopen("C:\\Users\\Lenovo\\Desktop\\11.txt", "r");
	//操作
	   char ch;
	   while ((ch = fgetc(fp)) != EOF)
	  { 
		   printf("%c",ch);
	   }
	//关闭文件

	fclose(fp);
	return 0;
		
}