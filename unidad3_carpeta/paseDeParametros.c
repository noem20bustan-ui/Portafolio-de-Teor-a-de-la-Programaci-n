#include <stdio.h>

void intercambiarNumeros(int *x,int *y);

int main(){
    int a=3;
    int b=5;

    intercambiarNumeros(&a,&b);/* este simbolo & es decir en memoria que se usa para hacer el paso de datos por referencia
    potque usa el espacio de la memoria*/

    printf("El valor de a es: %i\n", a);
    printf("El valor de b es: %i\n", b);


    return 0;
}
void intercambiarNumeros(int *x,int *y){/*para hacer el paso da datos por referencia tenermos que usar el * en todos los parametros declarados
    tanto al imprimir como al hacer las operaciones*/
    
   int z;

    z=*x;//este es un auxiliar, estamos haciendo intercambio de datos por valor , donde no se modifica a y b
    *x=*y;//el asterisco se usa solo en la variables que implica el paso por referencia
    *y=z;

    printf("El valor de x es: %i\n", *x);
    printf("El valor de y es: %i\n", *y);

    
}
