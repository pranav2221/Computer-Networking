#include <stdio.h>
int main()
{
	int inarr[8], fiarr[24], fixarr[8] = {0, 1, 1, 1, 1, 1, 1, 0}, i, j;
	printf("Enter the input array:");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &inarr[i]);
	}
	printf("Input array is:");
	for (i = 0; i < 8; i++)
	{
		printf("%d", inarr[i]);
	}
	j = 0;
	for (i = 0; i < 8; i++)
	{
		fiarr[j] = fixarr[i];
		j++;
	}
	j = 8;
	for (i = 0; i < 8; i++)
	{
		fiarr[j] = inarr[i];
		j++;
	}
	j=16;
	for (i=0;i<8;i++)
	{
		fiarr[j]=fixarr[i];
		j++;
	}
	printf("final array is");
	for(i=0;i<24;i++)
	{
		printf("%d",fiarr[i]);
	}
}