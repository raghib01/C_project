#include <stdio.h>

void main()
{
    int dec;
    printf("Input a Decimal number: ");
    scanf("%d", &dec);
    int rem, i = 0;
    int array[100000];

    while (dec)
    {
        rem = dec % 2;
        dec = dec / 2;
        array[i] = rem;
        i++;
    }
    printf("Binary number is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", array[j]);
    }
    printf("\n");
}