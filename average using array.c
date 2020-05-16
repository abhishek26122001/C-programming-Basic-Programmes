#include<stdio.h>

int main()
{
	int a[5];
	int i, sum=0, average;
	printf("Enter 5 Values:");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<5;i++)
	{
		sum=sum+a[i];
	}
 average=sum/5;
 printf("Sum=\n%d", sum);
 printf("Average=\n%d", average);
 return 0;
}
