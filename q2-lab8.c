#include <stdio.h>
int main() {
    int a,b,i,j;
    int flag=0;
    printf("enter lower limit");
    scanf("%d",&a);
    printf("enter upper limit");
    scanf("%d",&b);
    if(a==1){
        a=a+1;
    }
    if (a==2){
        printf("%d,",a);
        a=a+1;
    }
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
            
        }
        if(flag==0){
            printf(" %d,",i);
        }
        flag=0;
        i++;
    }
    

return 0;
}