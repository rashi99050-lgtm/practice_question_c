#include <stdio.h>
int main(){
    int year;
    int month;
    printf("ener the year : ");
    scanf("%d",&year);

    printf("enter the month : ");
    scanf("%d",&month);


    if(month==1){
        printf("january has 31 days %d",year);
    }
    if(month==2){
         if(year%4==0){
        printf("year is leap year");
        printf("ferbuary has 29 days %d",year);
    }
    if(year%100==0){
         printf("ferbuary has 28 days %d",year);
    }
    
        }
    
    if(month==3){
        printf("march has 31 days%d",year);
    }
    if(month==4){
        printf("april has 30 days %d",year);
    }
    if(month==5){
        printf("may has 31 days %d",year);
    }
    if(month==6){
        printf("june has 30 days %d",year);
    }
    if(month==7){
        printf("july has 31 days%d",year);
    }
    if(month==8){
        printf("august has 31 days %d",year);
    }
    if(month==9){
        printf("september has 31 days %d",year);
    }
    if(month==10){
        printf("august has 31 days %d",year);
    }
    if(month==11){
        printf("november has 31 days%d",year);
    }
    if(month==12){
        printf("december has 31 days %d",year);
    }
    return 0;
}