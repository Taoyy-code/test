#include<stdio.h>
#include<stdlib.h>
int main()
{
	//���ļ�
	FILE* fp = fopen("C:\\Users\\Lenovo\\Desktop\\11.txt", "r");
	//����
	   char ch;
	   while ((ch = fgetc(fp)) != EOF)
	  { 
		   printf("%c",ch);
	   }
	//�ر��ļ�

	fclose(fp);
	return 0;
		
}