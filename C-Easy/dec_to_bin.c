//Trikidou Eleonora
/*A simple program to to convert a decimal to binary
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec, init_dec, bin =0, rem, base=1;
    printf("Give a positive integer: ");
    scanf("%d",&dec);
    init_dec=dec;

    while(dec!=0)
    {
       rem=dec%2;
       bin+=base*rem;
       dec/=2;
       base*=10;

    }
    printf("The binary of the decimal number %d is the %d\n",init_dec,bin);
    return 0;
}
