#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,1,3,4,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for( int i=0;i<n;i++){
        int isduplicate = 0;   // assume that number is duplicate

        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                isduplicate = 1;            //if i=j then break the loop
                break;
            }
        }
        if(isduplicate == 0){          // if number is not found
            printf("%d",arr[i]);
        }
    }
    return 0;
}