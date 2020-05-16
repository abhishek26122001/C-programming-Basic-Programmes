#include<stdio.h>
int main()
{
	int sub[5], i,total=0;
	printf("\nEnter the 5 no.");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&sub[i]);
		total=total+sub[i];
	}
	printf("\n5 Elements are:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",sub[i]);
	}
	printf("\nTotal sub are:%d",total),
	getch();
}
