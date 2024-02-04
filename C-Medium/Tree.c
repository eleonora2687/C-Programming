//Trikidou Eleonora
/*Christmas tree - User specifies the height
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{

    int height, i, j, k;
    scanf("%d",&height);

    if(height>=4 && height<=20)
    {
       for(i=1;i<=height-1;i++)
    {
       for(j=height-1-i;j>=1;j--)
          putchar(' ');

       for(k=1;k<=2*i-1;k++)
          printf("*");

       putchar('\n');
    }

    i=1;

       for(j=height-1-i;j>=1;j--)
          putchar(' ');

    printf("*");
    putchar('\n');

    }

    return 0;
}
