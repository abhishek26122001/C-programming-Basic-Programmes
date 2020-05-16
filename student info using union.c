#include<stdio.h>

union student
{
	int roll;
	char name[10];

};
int main()
{
	union student stu;
	printf("\nEnter the roll no.:");
	scanf("%d",&stu.roll);
	printf("\nEnter name of student :");
	scanf("%s",&stu.name);
	printf(" Student details");
	printf("\nRoll no. : %d",stu.roll);
	printf("\nName of student : %s",stu.name);
	
	getch();
}
