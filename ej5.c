#include <stdio.h>
#include <stdlib.h>

int main()
{
char letra;
char vocales[]={'a','e','i','o','u'};

do
{
    printf("Ingrese una letra\n");
    scanf("%s",&letra);

        if(letra == vocales[0] || letra == vocales[1] || letra == vocales[2] || letra == vocales[3] || letra == vocales[4])
        {
            printf("la letra %c es vocal\n\n",letra);
        }

        else if(letra != '-'){
            printf("la letra %c es consonante\n\n",letra);
                            }
} while (letra != '-' );

return 0;

}


