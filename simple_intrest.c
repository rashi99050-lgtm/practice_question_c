#include <stdio.h>
int main(){
    int PR,R,T;
    printf("enter the amount deposited : ");
    scanf("%d",&PR);
    printf("enter the number of year : ");
    scanf("%d",&T);
    printf("enter the percentage of year :");
    scanf("%d",&R);

    int SI;
    SI = (PR*R*T)/100;
    printf("the principle amount is : %d\n", PR);
    printf("the rate of intrest  is : %d\n", R);
    printf("the number of year is : %d\n", T);
    printf("the simple intrest is : %d\n", SI);
    return 0;
}