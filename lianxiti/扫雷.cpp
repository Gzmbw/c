#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int arr[10][10]={0};
	int row,col;
	int row1,col1;
	int count=0;
	srand(time(0));
	do
	{
		row=rand()%10;
		col=rand()%10;
		if(arr[row][col]==0)
		{
			arr[row][col]=-1;
			count++;
		}
	}while(count<10);
	for(row=0;row<10;row++){
		for(col=0;col<10;col++){
			if(arr[row][col]!=-1){
				count=0;
				for(row1=row-1;row1<row+1;row1++){
					for(col1=col-1;col1<col+1;col1++){
						if(((row1>=0&&row1<10)&&(col1>=0&&col1<10))&&arr[row1][col1]==-1)
							count++;
					}
				}
				if(count==0)
					printf("0");
				else
					printf("%d",arr[row][col]=count);
			}
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
 }
