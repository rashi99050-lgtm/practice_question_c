#include <stdio.h>
int main(){
    int  num,sum=0,ld;
    printf("enter a digit:");
    scanf("%d",&num);
    
    if(num==0){
        printf("sum of digit is =0 ");
    }
    else if (num<0){
       num = -num;
    }
    else{
        for(; num != 0; num = num / 10){
        ld = num % 10;
        sum = ld + sum;
        }
    }
    printf("%d",sum);
    return 0;
}