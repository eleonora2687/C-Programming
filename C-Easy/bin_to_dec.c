//Trikidou Eleonora
/*A simple program to to convert a binary to decimal
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec=0, bin,  init_bin, rem, base=1;
    printf("Give a binary number: ");
    scanf("%d",&bin);
    init_bin=bin;

    while(bin!=0)
    {
       dec+=(bin%2)*base;
       base*=2;
       bin/=10;

    }
    printf("The binary of the decimal number %d is the %d\n",init_bin,dec);
    return 0;
}
