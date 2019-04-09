#include <stdio.h>
#include <stdlib.h>

int main()
{
float vec[20];
float sum,prom,aux;
    for(int i=0;i<20;i++){
        printf("Ingrese un numero\n");
        scanf("%f",&vec[i]);
    sum+=vec[i];
    prom=sum/20;
        }

    for(int i = 0; i < 20; i++)
        {
    for(int j = 0; j < 20; j++)
                {
        if (vec[j]>vec[j+1]) {
            aux=vec[j];
            vec[j] = vec[j+1];
            vec[j+1] = aux;
                    }
                }
        }


int opcion;

    printf("Ingrese 0 para ver el promedio\n");
    printf("Ingrese 1 para ver el mayor\n");
    printf("Ingrese 2 para ver el menor\n");
    printf("Ingrese 3 para ver los numeros\n");


    do
    {
        printf("Ingrese una opcion\n");
        scanf("%d", &opcion);

        switch(opcion){
            case 0:
                printf("El promedio de los numeros es %f \n",prom);
                break;
            case 1:
                printf("El mayor es %f \n",vec[20]);
                break;
                case 2:
                printf("El menor es %f \n",vec[0]);
                break;
                case 3:
                    printf("\n");
                    for(int x=0;x<20;x++){
                    printf("%f \n",vec[x]);
                    }
                break;
            default:
                printf("Opcion incorrecta\n");
                break;
        }
    } while (opcion >= 0 && opcion <= 3);


    return 0;
}

