#include <stdio.h>
int minimum_element();
int main(){
   int result;
   result = minimum_element();
   printf("minimum result is %d:",result);
   return 0;
}

int minimum_element(){
    int num[] ={1,2,3,4,5,6};
    int min = num[0];

    for( int i=1;i<6;i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}



