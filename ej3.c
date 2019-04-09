#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
do {
   printf("Ingrese un num\n");
   scanf("%d",&i);

   if(i>=-500 && i<0){

        printf("NEGATIVO\n");

   } else if(i>0) {

       printf("POSITIVO\n");
   }


} while (i < 1000 && i > -500);

    return 0;
}
