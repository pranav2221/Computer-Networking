#include <stdio.h>
#include <string.h>
void main()
{
    int i = 0, j = 0, count = 0;
    char input[100], output[100];
    printf("Enter the bit:");
    scanf("%s", input);
    while (input[i] != '\0')
    {
        if (input[i] == '1')
        {
            count++;
        }
        else
        {
            count = 0;
        }
        output[j++] = input[i++];
        if (count == 5)
        {
            output[j++] = '0';
            count = 0;
        }
    }
    output[j++] = '\0';
    printf("Your bit frame is %s\n", output);
}