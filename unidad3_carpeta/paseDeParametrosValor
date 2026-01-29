#include <stdio.h>

void intercambiarNumeros(int x, int y);

int main() {
    int a = 3;
    int b = 5;

    intercambiarNumeros(a, b); // Paso por valor: se envían copias de a y b

    printf("El valor de a es: %i\n", a);
    printf("El valor de b es: %i\n", b);

    return 0;
}

void intercambiarNumeros(int x, int y) {
    int z;

    z = x;
    x = y;
    y = z;

    printf("El valor de x es: %i\n", x);
    printf("El valor de y es: %i\n", y);
}
