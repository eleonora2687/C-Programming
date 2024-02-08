//Trikidou Eleonora

#include <stdio.h>
#include <stdlib.h>

void numbers(char *ch);
int main()
{

    char *p;
    p="αρνάκι 1 2 άσπρο3 και 5παχύ 8_7";
    numbers(p);
    return 0;
}

void numbers(char *ch)
{
   while(*ch!='\0')
   {
      if(*ch=='0' ||*ch=='1' ||*ch=='2' ||*ch=='3' ||*ch=='4' ||*ch=='5' ||*ch=='6' ||*ch=='7' ||*ch=='8' ||*ch=='9') putchar(*ch);
      ch++;
   }
}
