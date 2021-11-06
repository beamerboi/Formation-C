#include <stdio.h>

int main( )
{
   char grade = 'B';

   if (grade == 'A')
   {
   	printf("Excellent!");
   }
   else if (grade == 'B')
   {
   	printf("Well done");
   }
   else if (grade == 'D')
   {
   	printf("You passed");
   }
   else if (grade == 'F')
   {
   	printf("Better try again");
   }
   else
   {
   	printf("You Failed!");
   }
   }
   return 0;
}