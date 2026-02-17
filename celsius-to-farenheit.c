#include <stdio.h>
int main(){
    float num;
    printf("enter a number : ");
    scanf("%f",&num);

     float celsius = num;
     float farenheit = (celsius * 1.8)+ 32;

     printf("the degree of farenheit is: %f",farenheit);
     return 0;

}