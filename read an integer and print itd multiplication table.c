#include <stdio.h>
int main()
{
	int num; 	
	int i;	
	
	
	printf("Enter an integer number: ");
	scanf("%d",&num);
	
	
	i=1;
	
	
	while(i<=10){
		printf("%d\n",(num*i));
		i++; 
	}
	
	return 0;
}
