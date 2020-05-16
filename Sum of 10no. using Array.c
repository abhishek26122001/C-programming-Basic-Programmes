#include<stdio.h>

int main()
{
	int a[10];
	int sum=0 , i;
	printf("\nEnter 10 Numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum Is:\n%d",sum);
	return 0;
}

