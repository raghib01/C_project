#include <stdio.h>

void main()
{
    int oct;
    printf("Input a Decimal number: ");
    scanf("%d", &oct);
    int rem, i = 0;
    int array[10000];

    while (oct)
    {
        rem = oct % 8;
        oct = oct / 8;
        array[i] = rem;
        i++;
    }
    printf("Octal number is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", array[j]);
    }
    printf("\n");
}