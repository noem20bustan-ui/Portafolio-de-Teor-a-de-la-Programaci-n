#include <stdio.h>

float main() {
    float masaDelAire, presion, volumen, temperatura;

    printf("Ingrese el valor de la masa:\n ");
    scanf("%f", &masaDelAire);

    printf("Ingrese el valor de la presion:\n ");
    scanf("%f", &presion);

    printf("Ingrese el valor del volumen:\n ");
    scanf("%f", &volumen);

    printf("Ingrese el valor de la temperatura:\n ");
    scanf("%f", &temperatura);

    masaDelAire = (presion * volumen) / (0.37 * (temperatura + 460));

    printf("La masa del aire es: %f\n", masaDelAire);

    return 0;
}
Añadido programa en C para calcular la masa del aire (Unidad 1)
