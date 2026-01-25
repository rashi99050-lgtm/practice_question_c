#include <stdio.h>
int main(){
    int a = 4;
    int b = 6;
    int c = 8;
    if(a>=b && a>=c){
        printf("a is largest");
    }
    else if(b>=c){
        printf("b is largest");

    }
    else {
        printf("c is largest");
    }
    return 0;
}