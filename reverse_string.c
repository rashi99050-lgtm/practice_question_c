#include <stdio.h>
int main(){
    char str[] = "rashi";
    int i;

    for(i=0;str[i]!='\0';i++);
        for( i=i-1;i>=0;i--){
            printf("%c",str[i]);
        
    }
    return 0;
}