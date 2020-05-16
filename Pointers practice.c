#include<stdio.h>
main()
{
	int a=100;
	int*p;
	p=&a;
	//printf("Value of A %d",a);
	printf("Value of A %d",*p);
	
	return 0;
}
