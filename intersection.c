#include <stdio.h>
int main(){
    int n1,n2;
    int a[10],b[10];
    printf("enter a  size of number : ");
    scanf("%d",&n1);

    printf("enter a number : ");
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }

    printf("enter a size of  number : ");
    scanf("%d",&n2);
     printf("enter a number : ");
    for(int j=0;j<n2;j++){
        scanf("%d",&b[j]);
    }
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                printf("the intersection of number are : %d\n",a[i]);
                break ;
            }
        }
    }
   
    return 0;
}