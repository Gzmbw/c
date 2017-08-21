/*#include<stdlib.h>
#include<stdio.h>
int main()
{
	char ch[20], name1[20], name2[20];
	FILE *file;
	FILE *file2;
	puts("请输入要打开的文本文件：");
	gets(name1);
	puts("请输入要写入的文本文件：");
	gets(name2);
	file=fopen(name1, "r");
	file2=fopen(name2, "w");
	if(file==NULL)
		puts("打开文件失败。");
	while(fgets(ch,20,file)!=NULL)
		fputs(ch,file2);
	system("PAUSE");
	return 0;
}*/
//
#include<stdlib.h>
#include<stdio.h> 
int main()
{
	char ch[20];
	FILE *file;
	file=fopen("D:\\hh.txt", "r");
	if(file==NULL)
		printf("打开文件失败。\n");
	fgets(ch,20,file);/*fgets(他可以读取一连串的字符串，但是会在碰到回车后停止读取*/ 
	fputs(ch,stdout);
	system("PAUSE");
	return 0;
}
