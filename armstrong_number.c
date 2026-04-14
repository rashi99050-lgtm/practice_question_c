#include <stdio.h>

int main()
{
    int num, original, ld, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // store original number

    while(num != 0)
    {
        ld = num % 10;          // take last digit
        sum = sum + (ld*ld*ld); // cube of digit
        num = num / 10;         // remove digit
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
