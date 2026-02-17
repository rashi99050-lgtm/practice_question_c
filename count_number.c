#include <stdio.h>
int main(){
    int num,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    
    if(num==0){
        count=1;
    }
    else{
        for(int i=num ; i!=0 ; i=i/10){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}