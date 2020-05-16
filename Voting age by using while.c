#include<stdio.h>
int main()

{
	int age;
	while (age<18)
	{
	
printf("Enter any Age to check casting of vote:");
scanf("%d",&age);
if (age>=18)
printf("Person can Vote");
else
printf("Person can not Vote");
break;
}

}
