#include<stdio.h>
struct veh
{
	char name[20];
	int wheel;
	char color[20];
};
int main()
{
	struct veh v1={"Audi",4,"Red"
	};
	struct veh v2={"Mustang",4,"Black"
	};
	printf("\nName of car:%s,\nNo. of wheels:%d,\nColor of car:%s",v1.name,v1.wheel,v1.color);
	printf("\nName of car:%s,\nNo. of wheels:%d,\nColor of car:%s",v2.name,v2.wheel,v2.color);
	
	getch();
}
