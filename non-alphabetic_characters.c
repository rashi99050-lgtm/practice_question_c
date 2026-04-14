#include <stdio.h>

int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        // check if alphabet
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[j] = str[i];   // keep letter
            j++;
        }
    }

    str[j] = '\0';   // end string

    printf("String after removing non-alphabet characters: %s", str);

    return 0;
}
