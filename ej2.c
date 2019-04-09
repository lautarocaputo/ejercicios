#include <stdio.h>
#include <stdlib.h>

int main()
{
int multiplos,i;
do {
   printf("Ingresar un numero \n");
   scanf("%d",&i);

   for(int j=2; j<12; j++){

        multiplos=i*j;
        printf("%d\n",multiplos);
   }


} while (i < 30);

    return 0;
}
