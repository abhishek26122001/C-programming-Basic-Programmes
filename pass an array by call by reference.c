#include <stdio.h>
void disp( char ch)
{
   printf("%c ", ch);
}
int main()
{
   char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
   for ( x=0; x<10; x++)
   {

       disp (arr[x]);
   }

   return 0;
}

