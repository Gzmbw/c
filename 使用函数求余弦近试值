#include<stdio.h>
#include<math.h>
double funcos(double e,double x);
int main(void)
{
	double e, sum, x;
	scanf("%lf%lf", &e,&x);
	sum=funcos(e,x);
	printf("cos=%f\n", sum);
	return 0;
 } 
 double funcos(double e,double x)
 {
 	int flag, i;
 	double item,sum,temp,power;
 	flag=1;
 	power=1;
 	temp=1;
 	i=0;
 	item=1;
 	sum=0;
 	while(fabs(item)>=e){
 		item=flag*power/temp;
 		sum=sum+item;
 		power=power*x*x*x;
 		temp=temp*(i+1)*(i+2);
 		flag=-flag;
 		i=i+2;
	 }
	 return sum;
 }
