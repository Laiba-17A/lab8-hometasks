# include<stdio.h>
int main()
{
    int i, j;
    int n;
    printf("Number of rows of the upper half: ");
    scanf("%d",&n);
   
    for (i =0; i <= n+1; i++) 
    {
        for (j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i-1); j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = n; i > 1; i--) 
    {
        for (j = 0; j <= n - i; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= (i-1); j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}