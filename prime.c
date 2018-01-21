#include <stdio.h>
int main()
{
   int i, num, prime= 0;
     scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         prime++;
      }
   }
   if(prime==2)
   {
      printf("yes");
   }
   else
   {
      printf("No");
   }
}
