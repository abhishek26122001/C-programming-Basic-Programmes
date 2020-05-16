#include<stdio.h>

int main()
{
	int col,rows,i,j;
	int matrix[10][20];
	printf("Enter no. of Rows");
	scanf("%d",&rows);
	printf("Enter no. of Coloumns");
	scanf("%d",&col);
	
for(i=0;i<rows;i++)
{
	for(j=0;j<col;j++)
	{
		printf("Enter data in [%d][%d]:",i,j);
		scanf("%d,%d",&matrix[i][j]);
	}
	}	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
