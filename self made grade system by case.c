#include<stdio.h>


int main()
{
	int marks;
	
	printf("Enter Your Marks b/w 0 to 100\n");
	scanf("%d", &marks);
	
	switch(marks/10){
		
	 case 10:
	 case 9:
	 	
		printf("Your Grade : A\n");
		
		break;
		
	 case 8:
	 case 7:
	 	
	 	printf("Your Grade : B\n");
	 	
	 	break;
	 case 6:
	 	
	 	printf("Your Grade : C\n");
	 	
	 	break;
	 case 5:
	 case 4:
	 	
	 	printf("Your Grade : D\n ");
	 	
	 	break;
	 	
	default:
		
	printf("You  Failed \n");
}
 return 0;
}
