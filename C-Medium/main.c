//Trikidou Eleonora

//sum the elements of a given area only if i+j is even

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[3][5]={5,8,9,4,2,1,7,5,6,2,4,3,0,3,5},i,j,s=0;

    for(i=0;i<3;i++)
      for(j=0;j<5;j++)
         if((i+j)%2==0) s = s+ *(*a+ ((i*5)+j));
    printf("%d\n",s);
    return 0;
}
