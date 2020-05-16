#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[10];
	float marks;
	int regno;
	
}stu={50,"Abhishek",86.6,1190287};

main()
{
 printf("\nstudents roll:%d",stu.roll);
 printf("\nstudents name:%s",stu.name);
 printf("\nstudents marks:%f",stu.marks);
 printf("\nstudents regestration:%d",stu.regno);
 
getch();
}
