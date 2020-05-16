#include<stdio.h>
int main()
{
	int a=1,n;
	printf("enter any no.");
	scanf("%d",&n);
	do
	{
	printf("\n%d",n*a);
	a++;
	}while(a<=10);
}
