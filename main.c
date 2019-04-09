#include <stdio.h>
#include <stdlib.h>

int main()
{
int i = 0;

do {
   printf("Ingresar un numero\n");
   scanf("%d",&i);
   printf("%d ",i);
   if(i%2 == 0){
        printf("par\n");

   } else{
    printf("impar\n");
   }


} while (i < 100);

    return 0;
}
