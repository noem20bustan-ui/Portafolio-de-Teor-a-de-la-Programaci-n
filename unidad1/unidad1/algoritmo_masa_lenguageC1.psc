float main(){
    float masaDelAire, presion, volumen, temperatura;
    printf("Ingrese el valor de la masa:\n ");
    scanf("%g",&masaDelAire);
    printf("Ingrese el valor de la presion:\n ");
    scanf("%g",&presion);
    printf("Ingrese el valor del volumen:\n ");
    scanf("%g",&volumen);
    printf("Ingrese el valor de la temperatura:\n ");
    scanf("%g",&temperatura);
    masaDelAire=(presion * volumen) / (0.37 * (temperatura + 460));
    printf("La masa del aire es:%g\n",masaDelAire);
    return 0;
}
Añadido algoritmo de cálculo de masa del aire (Unidad 1)
