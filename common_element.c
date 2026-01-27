#include <stdio.h>
int main(){
    int num[5] = {1,2,3,4,5};
    int num2[5] = {4,5,6,7,8};
     int n1 = sizeof(num)/sizeof(num[0]);
      int n2 = sizeof(num2)/sizeof(num2[0]);
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            if(num[i]==num2[j]){
                printf("%d",num[i]);
           
        }
    }
   
}
 return 0;
}