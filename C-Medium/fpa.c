/*Trikidou Eleonora
*/

#include <stdio.h>
#include <stdlib.h>

float vat(float amount,int category)
{
   if(category==2)
      return amount*1.06;
   else if(category==3)
      return amount*1.13;
   else if(category==4)
      return amount*1.19;
   return amount;
}

int main()
{

    int prod_category, total_prod=0, pieces;
    float price, pre_vat_price=0, final_price=0;

    while(total_prod<10)
    {
       scanf("%d %f %d",&pieces,&price,&prod_category);
       pre_vat_price+=pieces*price;
       final_price+=vat(pieces*price,prod_category);
       total_prod+=pieces;

    }
    printf("%f %f\n",final_price,final_price-pre_vat_price);
    return 0;
}
