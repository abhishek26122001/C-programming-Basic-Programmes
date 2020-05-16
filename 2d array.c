#include<stdio.h>
int main()
{
	int sub[2][3],i,j,total=0;
	print("\nEnter 6 elements:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		 scanf("\t%d",&sub[i][j]);
	}   }
	printf("\nValues are:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
	      printf("\t%d",sub[i][j]);
		  total=total+sub[i][j];	
		}
		printf("\t%d",total);
		total=0;
		printf("\n");
	}
	getch();
}
