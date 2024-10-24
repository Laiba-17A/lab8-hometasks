#include <stdio.h>

int main()
{
    int i,j;

    int matrix[2][3][3] = {
        {
            {2, 4, 6},{3, 6, 9},{4, 8, 12}
            
        },
    {
        {10, 15, 5},{1,4,5},{7, 9, 11}
        
    }
        
    };

    int sum1 = 0, sum2 = 0;


    for (i = 0; i < 3; i++) 
    {
        for (j= 0; j < 3; j++) 
        {
            sum1 = sum1 +  matrix[0][i][j];
        }
    }


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) 
        {
            sum2 =sum2 + matrix[1][i][j];
        }
    }

    printf("Page 1 sum: %d\n", sum1);
    printf("Page 2 sum: %d\n", sum2);

    return 0;
}