#include <stdio.h>
int main(){
    int a[10],n1;
    printf("enter a  size of number : ");
    scanf("%d",&n1);

    printf("enter a number : ");
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n1;i++){
        if(a[i]>50){
           continue;
        }
        else{
            printf(" the number is %d\n",a[i]);
        }
    }
 return 0;
}