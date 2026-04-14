#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);        // input sentence

    for(i = 0; str[i] != '\0'; i++) {

        // check if character is NOT a vowel
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
           str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U') {
            str[i] = str[j];
            j++;
        }
    }

    str[j] = '\0';   // end the new string

    printf("String without vowels: %s", str);

    return 0;
}
