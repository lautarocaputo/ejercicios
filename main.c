#include <stdio.h>
#include <stdlib.h>

int main()
{
int i = 0;

do {
   i += 1;
   printf("%d ",i);
   if(i%2 == 0){
        printf("par\n");

   } else{
    printf("impar\n");
   }


} while (i < 100);

    return 0;
}
