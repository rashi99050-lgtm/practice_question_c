#include <stdio.h>
#include <string.h>
// function prototype
int vowel_count(char str[]);
int main(){
    char str[120] = "My name is rashi";
    // function call
    printf("vowels are %d", vowel_count(str));
    return 0;
}
int vowel_count(char str[]){
   int count = 0;
    for( int i=0;str[i] != '\0';i++){
    if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
       count ++;
    }
    }
    return count ;
}
