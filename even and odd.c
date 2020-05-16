#include<stdio.h>
int main()
{
  int num;
  
  printf("Enter any no. to check even or odd: ");
  scanf("%d",&num);
  
   if((num/2)*2 ==num)
   printf("Number is even\n");
   
   else
   
   printf("Number is odd\n");
   
   return 0;
}
