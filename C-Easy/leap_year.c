//Trikidou Eleonora
/*A simple program to check whether an year is leap or not
*/

#include <stdio.h>
#include <stdlib.h>


int main() {

    int year;
    printf("Give an year: ");
    scanf("%d",&year);

    if(year%4==0 && (year%100!=0 || year%400==0))
      printf("The given year is leap\n");
    else
      printf("The given year is not leap\n");
    return 0;
}
