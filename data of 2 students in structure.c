#include<stdio.h>
#include<conio.h>
struct student
{
 int roll;
 float marks;
 char name[20];	
};
int main()
{
	struct student s1={25,86.2,"Robin"};
	struct student s2={26,84.3,"Ram"
	};
	 
	 printf("\nRoll no:%d,\nMarks in  subject:%f ,\nName:%s",s1.roll,s1.marks,s1.name);
	 printf("\nRoll no:%d,\nMarks in  subject:%f  ,\nName:%s",s2.roll,s2.marks,s2.name);
	 
	 getch();
}
