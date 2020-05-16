#include<stdio.h>
int main()
{
	int a,b, sum, sub, mul, dv, mod;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	sum=a+b;

	sub=a-b;
	mul=a*b;
	dv=a/b;
	mod=a%b;
		printf("your sum , sub , mul , dv , mod %d %d %d %d %d ",sum,sub,mul,dv,mod);
	return 0;
	
}
