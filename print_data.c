#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    // open file in read mode
    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File does not exist");
        return 0;
    }

    // read file character by character
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);   // close file

    return 0;
}
