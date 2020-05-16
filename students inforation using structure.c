#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[5];
int main()
{
	int i;
	{
		for(i=0;i<2;i++)
		{
			gets(s[i].name);
			scanf("%d",&s[i].roll);
			scanf("%f",&s[i].marks);
		}
	}
	for(i=0;i<2
	;i++)
	{
		printf("%s",s[i].name);
		puts(s[i].name);
		printf("%d",s[i].roll);
		printf("%f",s[i].marks);
		
	}
    return 0;
}
