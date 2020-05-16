
#include<stdio.h>

int main()
{
	int a[100],i,n,position;
	
	printf("Enter the element in array\n");
	scanf("%d",&n);
	
	printf("Enter elements\n",n);
	
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	
	printf("Enter the loation where you wish  to delete\n");
	scanf("%d",&position);
	
	if(position >=n+1)
	printf("Impossible to delete.\n");
	else
	{
		for(i=position-1;i<n-1,i++;)
		a[i]=a[i+1];
		
		printf("Resultant Array\n");
		
		for(i=0;i<n-1;i++)
		printf("%d\n",a[i]);
		
	}
	return 0;
}
