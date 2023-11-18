#include <stdio.h>
#include <math.h>
int main()
{
    int arr[4], i, afterop[4];
    printf("Enter the array:");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] <= 127)
    {
        printf("IT IS CLASS A\n");
        int subnetclassA[] = {255, 0, 0, 0};
        for (i = 0; i < 4; i++)
        {
            afterop[i] = arr[i] & subnetclassA[i];
        }
        int nadd;
        int n = 8;
        nadd = (pow(2, (32 - n)));
        printf("The number of adresses is:%d\n", nadd);
    }
    else if (arr[0] >= 128 && arr[0] <= 191)
    {
        printf("IT IS CLASS B\n");
        int subnetclassB[] = {255, 255, 0, 0};
        for (i = 0; i < 4; i++)
        {
            afterop[i] = arr[i] & subnetclassB[i];
        }
        int nadd;
        int n = 16;
        nadd = (pow(2, (32 - n)));
        printf("The number of adresses is:%d\n", nadd);
    }
    else if (arr[0] >= 192 && arr[0] <= 224)
    {
        printf("IT IS CLASS C\n");
        int subnetclassC[] = {255, 255, 255, 0};
        for (i = 0; i < 4; i++)
        {
            afterop[i] = arr[i] & subnetclassC[i];
        }
        int nadd;
        int n = 24;
        nadd = (pow(2, (32 - n)));
        printf("The number of adresses is:%d\n", nadd);
    }
    else
    {
        printf("Wrong ip adress");
    }
    printf("Subnetmask is:%d.%d.%d.%d", afterop[0], afterop[1], afterop[2], afterop[3]);
}