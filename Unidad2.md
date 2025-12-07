# 📘 Unidad 2  
## **Estructuras Condicionales y Repetitivas**

---

## ✅ Contenidos de la Unidad

| Tema |
|------|
| **Estructuras condicionales** |
| **Estructuras repetitivas** |
| **Ejercicio combinando: estructura condicional y repetitiva** |

---

## 🧠 Principales dificultades detectadas

| Durante esta unidad, la principal dificultad se centró en la comprensión del funcionamiento de los contadores y acumuladores. Entender su lógica fue un desafío, dado que su comportamiento y la acción que ejecutaban dependían directamente de la ubicación estratégica que se les asignara dentro de la estructura de control repetitiva (el bucle). |
|---|

---

## 📝 Ejercicio combinando: estructura condicional y repetitiva

Aquí se presenta un ejercicio integrador donde se aplican **condicionales**, **bucles**, **contadores** y **acumuladores** de forma conjunta.

```pseudo
Algoritmo EjercicioMixto
    Definir num, suma, contador Como Entero
    suma <- 0
    contador <- 0

    Repetir
        Escribir "Ingrese un número (0 para terminar): "
        Leer num

        Si num > 0 Entonces
            suma <- suma + num
            contador <- contador + 1
        FinSi

    Hasta Que num = 0

    Si contador > 0 Entonces
        Escribir "Promedio: ", suma / contador
    SiNo
        Escribir "No se ingresaron números positivos."
    FinSi

FinAlgoritmo

