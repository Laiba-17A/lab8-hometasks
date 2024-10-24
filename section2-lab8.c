#include <stdio.h>
int main() {
int i, j,m,n;
printf("enter the order of matrix\n");
printf("Rows: ");
scanf("%d",&m);
printf("columns: ");
scanf("%d",&n);
int arr[m][n];
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) { 
printf("enter element: ");
scanf("%d",&arr[i][j]);
}
}
for (i = 0; i < n; i++) {
for (j = 0; j < m; j++) {
    printf("%d ",arr[j][i]);
}
printf("\n");
}
return 0;
}