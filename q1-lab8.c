#include<stdio.h>
int main()
{
	int i,j,num;
	int a=1;
	printf("enter number of rows and columns:");
	scanf("%d",&num);
	int arr[num][num];
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
		printf("enter element %d: ",a);
	    scanf("%d",&arr[i][j]);	
	    a=a+1;
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",arr[i][i]);
	}
	
	
}