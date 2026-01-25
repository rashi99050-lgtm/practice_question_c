#include <stdio.h>
int main(){
    int a,b;
     printf("enter a first digit : ");
     scanf("%d",&a);
     printf("enter a second digit : ");
     scanf("%d",&b);
    
     int sum = a + b;
     printf("sum of %d and %d is : %d" ,a,b,sum);
     return 0;
}