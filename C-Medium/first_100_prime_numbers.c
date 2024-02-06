/*Trikidou Eleonora
*/
//First one hundred prime numbers

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num)
{
   int i;
   bool isPrime=true;

   for(i=2;i<=sqrt(num);i++)
   {
      if(!(num%i))
      {
         isPrime=false;
         break;
      }
   }
   if(isPrime)
      return true;
   return false;
}

int main()
{
    int num=2, count=0;

    while(1)
    {
       if(isPrime(num))
       {
          printf("%d\n",num);
          count++;
       }

       if(count==100)
         break;

       num++;
    }

    return 0;
}
