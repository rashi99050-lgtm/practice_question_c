#include <stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {3,4,5,6,7};

    for(int i=0;i<5;i++){
         int found = 0;
        for(int j=0;j<5;j++){
            if(a[i]==b[j]){
               found = 1;
               break;
            }
             }
            if(found == 0){
               printf("%d\n",a[i]);
           
        }
    }
    for(int i=0;i<5;i++){
         int found = 0;
        for(int j=0;j<5;j++){
            if(b[i]==a[j]){
               found = 1;
               break;
            }
             }
            if(found == 0){
               printf("%d\n",b[i]);
           
        }
    }
    return 0;
}