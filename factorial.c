#include <stdio.h>
int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
     int product = 1;
    
    for(int i=1;i<=num;i++){
        product = product*i;
    }
    printf("%d",product);
    return 0;
}