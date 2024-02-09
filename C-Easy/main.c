//Trikidou Eleonora

/*Write a program that asks for 10 numbers and registers them in a one-dimensional array.
 The program should make the necessary checks that the given numbers are in ascending order, i.e. each given number must be equal to or greater than
 the previous one, otherwise it will be not accepted
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10], i=1, num;

    scanf("%d",&array[0]);

    while(i<10)
    {
       scanf("%d",&num);
       if(num>=array[i-1])
         {
            array[i]=num;
            i++;
         }
      else
         printf("The number you've entered is not equal to or greater than the previous one."
            "Give a number greater than or equal to %d:\n",array[i-1]);
    }


    for(i=0;i<10;i++)
    {

       {
          printf("%d ",array[i]);
       }
    }
    putchar('\n');

    return 0;
}
