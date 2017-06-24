/*分模块设计学生信息系统*/
student.h
#include<stdio.h>
#include<string.h>
#define MaxSize 50
struct student{
	int num;
	char name[10];
	int computer, english , math;
	float average;
}; 
input_output.c
extern count;
void new_student(struct student students[])
{
	int i, n;
	if(count==MaxSize){
		printf("The array is full!\n");
		return;
	}
	printf("Input the Number of students:");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Input the student's num:");
		scanf("%d", &students[i].num);
		printf("Input the student's name:");
		scanf("%s", students[i].name);
		printf("Input the student's address:");
		scanf("%s", students[i].address);
		printf("Input the student's math score:");
		scanf("%d", &students[i].math);
		printf("Input the student's english score:");
		scanf("%d", &students[i].english);
		printf("Input the student's computer score:");
		scanf("%d", &students[i].computer);
		count++;
	}
}
void output_student(struct student students[])
{
	int i;
	if(count==0){
		printf("count of students is zero!\n");
		return;
	}
	printf("num\t name\t address\t math\t english\t computer\t average\n");
	for(i=0;i<count;i++){
		printf("%d\t", students[i].num );
		printf("%s\t", students[i].name );
		printf("%s\t", students[i].address );
		printf("%d\t", students[i].math );
		printf("%d\t", students[i].english);
		printf("%d\t", students[i].computer;
		printf("%f\t\n", students[i].average);
	}
}
aver_sort.c
extern count;
void average(struct student s[])
{
	int i;
	for(i=0;i<count;i++)
		s[i].average=(s[i].math + s[i].english + s[i].computer)/3.0;
}
void sort(struct student s[])
{
	struct student temp;
	int i,index,j;
	for(i=0;i<count-1;++i){
		index=i;
		for(j=i+1;j<count;j++)
			if(s[j].average>s[index].average)
				index=j;
		temp=s[index];
		s[index]=s[i];
		s[i]=temp;
		
	}
}
modify.c
extern count;
void modify(struct student *p)
{
	int num,course,score,i;
	printf("Input the number of update student:");
	scanf("%d", &num);
	printf("Choice the course:1.math 2.english 3.computer:");
	scanf("%d", &course);
	printf("Input the new score:");
	scanf("%d", &score);
	for(i=0;i<count;i++,p++)
		if(p->num==num)
			break;
	if(i<count)
		switch(course)
		{
			case 1:p->math=score;break;
			case 2:p->english=score;break;
			case 3:p->computer=score;break; 
		}
}
void search_student(struct student students[], int num)
{
	int i,flag=0;
	if(count==0){
		printf("count of students is zero!\n");
		return;
	}
	for(i=0;i<count;i++)
		if(students[i].num==num){
			flag=1;
			break;
		}
	if(flag){
		printf("num:%d", students[i].num );
		printf("name:%s", students[i].name );
		printf("math:%d", students[i].math );
		printf("english:%d", students[i].english );
		printf("computer:%d", students[i].computer );
		printf("average:%d", students[i].average );
		}
		else
			printf("Not found!");
}
student_system.c
#include"student.h"
#include"input_output.c"
#include"aver_sort.c"
#include"modify.c"
int count;
int main(void)
{
	struct student students[MaxSize];
	new_student(students);
	output_student(students);
	average(students);
	sort(students);
	output_student(students);
	modify(students);
	output_student(students);
	return 0;
}
