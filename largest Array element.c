#include<stdio.h>

int main()
{
	int a[100],size,i,largest,loc=1;
	printf("\nEnter The Number of Array Elements:");
	scanf("%d",&size);
	printf("\nEnter %d elements of the Array");
	
	for(i=0;i<size;i++)

	scanf("%d",&a[i]);
	
	largest=a[0];
	
	for(i=1;i<size;i++)
	{
		if(a[i]>largest)
		{

		   largest=a[i];
		   loc=i+1;
	}
	
	}
	printf("\nLargest Elemnt Present is:",loc,largest);
	
	return 0;
}
