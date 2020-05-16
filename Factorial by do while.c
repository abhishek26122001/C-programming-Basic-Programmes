#include<stdio.h>
int main()
{
	int i=1,n,a=1;
	printf("enter your no.");
	scanf("%d",&n);
	do
	{
	 a=a*i;
	 i++;
		
	}while(i<=n);
	printf("factorial=%d",a);
}
