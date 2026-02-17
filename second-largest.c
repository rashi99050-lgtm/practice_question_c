#include <stdio.h>
int main(){
     int arr[6] = {1,3,4,5,6,7};
     int max;
     int largest = arr[0];
     int second_largest = 0;
     for(int i = 0;i<=5;i++){
        if(arr[i]>largest){
            largest = arr[i];
             
        }
     }
        
    return 0;
}