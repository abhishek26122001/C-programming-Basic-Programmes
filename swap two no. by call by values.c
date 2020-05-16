#include<stdio.h>
int main()
{
	int x=7,y=9;
	swap(x,y);	
}
swap(int x,int y)
 {
	int temp=x;
	x=y;
	y=temp;
	printf("%d,%d",x,y);
}
