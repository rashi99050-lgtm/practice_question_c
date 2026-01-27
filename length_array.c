#include <stdio.h>
int main(){
    int count = 0;
    int num[5] = {1,2,3,4,5};
    int length = sizeof(num)/sizeof(num[0]);
    printf("%d",length);
    return 0;
}