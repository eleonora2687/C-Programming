//Trikidou Eleonora

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch[]={'C','i','s','b','e','s','t'};
    int i,j,k;
    for(i=0;i<6;i++)
    {
       for(j=6;j>i;j--)
       {
          printf(" ");
       }
       printf("%c",ch[i]);
       for(j=0;j<2*i-1;j++)
         printf(" ");
       if(i>0) printf("%c",ch[i]);
       putchar('\n');
    }
    for(i=6;i>=0;i--)
      printf("%c",ch[i]);

    for(i=1;i<7;i++)
      printf("%c",ch[i]);


    return 0;
}
