#include <stdio.h>
#include <stdlib.h>

int main()
{
int vec[15];
int sum,aux;
float prom;
    for(int i=0;i<15;i++){
        printf("Ingrese un numero\n");
        scanf("%d",&vec[i]);
    sum+=vec[i];
    prom=sum/15;
        }

    for(int i = 0; i < 15; i++)
        {
    for(int j = 0; j < 15; j++)
                {
        if (vec[j]>vec[j+1]) {
            aux=vec[j];
            vec[j] = vec[j+1];
            vec[j+1] = aux;
                    }
                }
        }


int opcion;

    printf("Ingrese 1 para ver el mayor\n");
    printf("Ingrese 2 para ver el menor\n");
    printf("Ingrese 3 para ver el promedio\n");
    printf("Ingrese 4 para ver el vector\n");
    printf("Ingrese 5 para ver el vector al reves\n");



    do
    {
        printf("Ingrese una opcion\n");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                printf("El mayor es %d \n",vec[14]);
                break;
                case 2:
                printf("El menor es %d \n",vec[0]);
                break;
                case 3:
                printf("El promedio de los numeros es %f \n",prom);
                break;
                case 4:
                    printf("\n");
                    for(int x=0;x<15;x++){
                    printf("%d \n",vec[x]);
                    }
                break;
                case 5:
                     printf("\n");
                    for(int q=14;q>=0;q--){
                    printf("%d \n",vec[q]);
                    }
                break;
            default:
                printf("Opcion incorrecta\n");
                break;
        }
    } while (opcion >= 1  && opcion <= 5);


    return 0;
}


