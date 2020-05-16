#include<stdio.h>

int main()
{
	int col,rows,i,j;
	int matrix1[10][10],matrix2[10][10],sum[10][10];
	printf("Enter the no. of Rows:");
	scanf("%d",&rows);
	printf("Enter the no. of col:");
	scanf("%d",&col);
	
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the no. of 1st matrix[%d][%d]:",i,j);
			scanf("%d",&matrix1[i][j]);
		}
		
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the no. of 2nd matrix[%d][%d]:",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("The sum of entered matrix\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
