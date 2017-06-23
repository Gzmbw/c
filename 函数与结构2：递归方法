/*汉诺塔问题*/
#include<stdio.h>
void hanio(int n, char a, char b, char c);
int main(void)
{
	int n;
	printf("input the number of disk:");
	scanf("%d", &n);
	printf("the steps for %d disk are: \n", n);
	hanio(n, 'a', 'b', 'c');
	
	return 0;
 } 
 void hanio(int n, char a, char b, char c)
 {
 	if(n==1)
 		printf("%c-->%c\n", a, b);
 	else {
 		hanio(n-1, a, c, b);
 		printf("%c-->%c\n", a, b);
 		hanio(n-1, c, b, a);
	 }
 }
 /*用递归法算n!*/
 #include<stdio.h>
 double fact(int n);
 int main(void)
 {
 	int n;
 	scanf("%d", &n);
 	printf("%f", fact(n));
 	return 0;
  } 
  double fact(int n)
  {
  	double result;
  	if(n==1||n==0)
  		result=1;
  	else
  		result=n*fact(n-1);
		  
	return result; 
  		
  }
