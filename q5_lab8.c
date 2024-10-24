#include <stdio.h>

int main() {
    int matrix[3][3];
    //taking input from user
int i,j;
for (i = 0; i < 3; i++) {
      
    for (j = 0; j < 3; j++) { 
    printf("enter element: ");
    scanf("%d",&matrix[i][j]);
}
}
//displaying matrix
    printf("Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int row_min, col_max;


    for (i = 0; i < 3; i++) {
        //finding smallest in row
        row_min = matrix[i][0];
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] < row_min) {
                row_min = matrix[i][j];
            }
        }

        for (j = 0; j < 3; j++) {
            //finding the column at min number of the row is
            if (matrix[i][j] == row_min) {
                col_max = 1;
                //checking if the value is largest in column
                for (int k = 0; k < 3; k++) {
                    if (matrix[k][j] > matrix[i][j]) {
                        col_max = 0;
                        break;
                    }
                }
                if (col_max==1) {
                    printf("Saddle point: %d at (%d, %d)\n", row_min, i + 1, j + 1);
                }
            }
        }
    }

    return 0;
}