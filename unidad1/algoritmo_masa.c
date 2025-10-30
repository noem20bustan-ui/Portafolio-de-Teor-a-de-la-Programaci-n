#include <stdio.h>

float main() {
        float masaDelAire, presion, volumen, temperatura;
    printf("Ingrese el valor de la presion:\n ");
    scanf("%g",&presion);
    printf("Ingrese el valor del volumen:\n ");
    scanf("%g",&volumen);
    printf("Ingrese el valor de la temperatura:\n ");
    scanf("%g",&temperatura);
    masaDelAire=(presion * volumen) / (0.37 * (temperatura + 460));
    printf("La masa del aire es:%.4g\n",masaDelAire);
    return 0;
}
Añadido programa en C para calcular la masa del aire (Unidad 1)
