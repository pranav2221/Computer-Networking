#include<stdio.h>
int main()
{
    int d[7],c[11],i,pos,x;
    printf("Enter the data");
    for(i=0;i<11;i++)
    {
        scanf("%d",&c[i]);
    }
    c[0]=c[0]^c[2]^c[4]^c[6]^c[8]^c[10];
    c[1]=c[1]^c[2]^c[5]^c[6]^c[9]^c[10];
    c[3]=c[3]^c[4]^c[5]^c[6];
    c[7]=c[7]^c[8]^c[9]^c[10];
    x=(c[7]*8)+(c[3]*4)+(c[1]*2)+(c[0]);
    if(x==0)
    {
        printf("\nNo Error");
    }
    else
    {
        printf("\nError is found at index %d",x-1);
    }
}