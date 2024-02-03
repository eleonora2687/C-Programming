//Trikidou Eleonora
/*Goldbach's conjecture
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    int num, num1, num2, i;
    bool num1_isPrime=true, num2_isPrime=true;

    printf("Give an even number: \n");
    scanf("%d",&num);
    num1=3;
    num2=num-num1;

    if(num==4)
      printf("%d+%d=%d\n",2,2,4);
    else if(num%2!=0)
      printf("The number you've entered isn't even\n");
    else
    {
       while(num1<=num/2 && num2>=num/2)
       {
           for(i=2;i<=sqrt(num1);i++)
           {
              if(num1%i==0)
              {
                 num1_isPrime=false;
                 break;
              }
           }
           if(num1_isPrime==false)
           {
              num1++;
              num2--;
              num1_isPrime=true;
              continue;
           }
           else
           {
              for(i=2;i<=sqrt(num2);i++)
              {
                 if(num2%i==0)
                 {
                    num2_isPrime=false;
                    break;
                 }
              }
              if(num2_isPrime==false)
              {
                 num1++;
                 num2--;
                 num2_isPrime=true;
                 continue;
              }

           }

              printf("%d+%d=%d\n",num1,num2,num);
              break;

       }
    }
    return 0;

}
