#include<stdio.h>
int main()
{
	int m,n,i,j,c,maxr,maxc;
	int max=0;
	c=1;
	printf("enter number of rows: ");
	scanf("%d",&m);
	printf("enter number of columns: ");
	scanf("%d",&n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("enter element %d: ",c);
	    scanf("%d",&arr[i][j]);	
	    if(arr[i][j]>max)
	    {
	    	max=arr[i][j];
	    	maxr=i;
	    	maxc=j;
		}
	    c=c+1;
		}
	}
	
	printf("maximum number in the matrix is: %d in (%d,%d)",max,maxr+1,maxc+1);
	return 0;
}