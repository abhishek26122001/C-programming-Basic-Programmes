#include<stdio.h>
#include<conio.h>
struct car
{
	char name[10];
	int wheels;
	char color[10];
}c={"AUDI",4,"RED"};
int main()
{
printf("\n%s \n%d \n%s",c.name,c.wheels,c.color);

 getch();
}



