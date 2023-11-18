#include <stdio.h>
#include <math.h>
int decimal(int count, int bin[])
{
    int sum = 0;
    int j = 0, i;
    for (i = count - 1; i >= 0; i--)
    {
        sum += (bin[i] * (pow(2, j)));
        j++;
    }
    return sum;
}
int main()
{
    int i, j, sum = 0, count = 8;
    int bin[8];
    printf("Enter the binary number:");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &bin[i]);
    }
    printf("\nThe binary number is:");
    for (i = 0; i < 8; i++)
    {
        printf("%d", bin[i]);
    }
    sum = decimal(count, bin);
    printf("\nThe decimal number is:%d", sum);
}