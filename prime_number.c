#include <stdio.h>
int main(){
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    
    for(int i =2;i<=num ;i++){
        int prime =1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime = 0;
                break;
            }
    }
    if(prime==1){
        printf("%d\n ",i);
        }
  }
  return 0;
}
