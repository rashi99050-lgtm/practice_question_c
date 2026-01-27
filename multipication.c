#include <stdio.h>
int main(){
    int n;
    printf("enter a element:");
    scanf("%d",&n);

    // for loop to print 1-n
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n * i);
    }
    return 0;
}