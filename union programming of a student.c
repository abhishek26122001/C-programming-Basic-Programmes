#include<stdio.h>
union student
{
	char name[20];
	int rollno;
	int marks;
}s;
int main()
{
	printf("Enter the name:\n");
	scanf("%s",s.name);
	printf("%s",s.name);
	
	printf("Enter the roll no.:\n");
	scanf("\n%d",&s.rollno);
	printf("%d",s.rollno);
	
	printf("Enter the marks :\n");
	scanf("%d",&s.marks);
	printf("%d",s.marks);


return 0;
	
}
