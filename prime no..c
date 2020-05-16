#include<stdio.h>
int main()
{
	int n, c=2;
	printf("Enter a number");
	scanf("%d",&n);
	while(c<n-1)
	{
		if(n%c==0)
		{
			printf("Your number is not prime");
			break;
		}
		if(c==n)
		printf("your number is prime");
		
		
	}
	return 0;
}
