#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,cantnum,mult3=0,mult5=0,sumapar=0,bandera=0;

    printf("Ingrese la cantidad de numeros que desea: ");
    scanf("%d",&cantnum);

    for(i=0;i<cantnum;i++)
    {
        printf("Ingrese los numeros deseados: ");
        scanf("%d",&n);
        fflush(stdin);
        if(n%3==0)
        {
            mult3=mult3+n;
        }
        if(n%5==0)
        {
            mult5++;
        }
        if(bandera==1)
        {
            sumapar=sumapar+n;
            bandera=0;
        }
        else
        {
            bandera=1;
        }
    }
    printf("La sumatoria de los valores multiplos de 3 es: %d\n",mult3);
    printf("La cantidad de valores multiplos de 5 es: %d\n",mult5);
    printf("La suma de los numeros que entraron en orden par es: %d",sumapar);
    return 0;
}
