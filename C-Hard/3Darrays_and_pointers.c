//Trikidou Eleonora

/*the following program adds the elements of a 3D array which are in those positions for which i+j is even.
the elements of the array are accessed with the help of pointers
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][5][2]= {5, 8, 9, 4, 2, 1, 7, 5, 6, 2, 4, 3, 0, 3, 5, 5, 8, 9, 4, 2, 1, 7, 5, 6, 2, 4, 3, 0, 3, 5}, i, j, k, s=0;

    for(i=0; i<3; i++)
      for(j=0 ;j<5; j++)
         for(k=0; k<2;k++)
         if (!((i+j+k)%2)) s=s+ *(**a + (i*5*k)+(i*5)+j);

    for(i=0; i<10; i++)
      printf("%d\n",s);

    return 0;
}
