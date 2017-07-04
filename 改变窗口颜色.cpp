#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	char c;
	printf("请输入一个整数：");
	while(1){
		scanf("%d", &a);
		if(a>0)
			system("color 1E");
		else if(a<0)
			system("color 2E");
		else
			system("color 3E");
		if(a>3||a<1)
			{
				printf("你输入错误，请输入1-3的整数: \n");
				return -1;
			 } 
		switch(a)
		{
			case 1:system("color 1E");break;
			case 2:system("color 2E");break;
			case 3:system("color 3E");break;
			default:
				return 0;
				break;
			
		}
			
	}
	return 0;
 } 
