#include<stdio.h>

int main()
{
	int a[10],i,j,n,temp;
	printf("Enter the Number of Array Elements:\n");
	scanf("%d",&n);
	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	j=n-1;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
printf("The Reversed order of Array Elements:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
