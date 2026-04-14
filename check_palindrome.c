#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("enter a string :");
    scanf("%s",str);

    int i ,len,flag =0;
    len = strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            flag =1;
            break;
        }
    }
    if(flag==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}