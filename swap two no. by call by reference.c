#include<stdio.h>

int main()
{
	int x=6,y=8;
	swap(&x,&y); 
	printf("%d,%d",x,y);
	
}
 swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
		}		
	

