//Trikidou Eleonora

#include <stdio.h>
#include <stdlib.h>

char* first_space(char *ch);

int main()
{

    char *p;
    p="������ 1 2 �����3 ��� 5���� 8_7";
    first_space(p);
    return 0;
}

char* first_space(char *ch)
{

   while(*ch!='\0')
   {
      if(*ch==' ') return *ch;
      ch++;
   }
}
