#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	struct student stu;
	struct student*p;
	printf("\nEnter  roll:");
	scanf("%d",p->roll);
	printf("\nEnter  name:");
	scanf("%s",p->name);
	printf("\nEnter marks:");
	scanf("%f",p->marks);
	
	printf("\n********Output********");
	printf("\nRoll num of student:%d",(*p).roll);
	printf("\nName of student:%s",(*p).name);
	printf("\nMarks of student:%f",(*p).marks);
	
	getch();
}
