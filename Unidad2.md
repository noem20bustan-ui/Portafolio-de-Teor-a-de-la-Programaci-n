# 🧩 Unidad 2 — Estructuras Condicionales y Repetitivas 

---

<details>
<summary><h2>📘 1. Estructuras Condicionales</h2></summary>

# CONDICIONALES — ESTRUCTURAS DE DECISIÓN EN PROGRAMACIÓN (ORDENADO)

## 1. Introducción a las estructuras condicionales

Las estructuras condicionales son herramientas fundamentales en los lenguajes de programación. Permiten que un programa “tome decisiones”: es decir, ejecutar unas líneas de código u otras dependiendo de si se cumple una condición determinada. Esto permite que el flujo del programa no sea siempre lineal, sino que varíe según datos, estados o criterios diferentes. 
En general, las condiciones se escriben como expresiones lógicas (por ejemplo: “x > 0”, “edad == 18”, “letra == 'a'”, etc.), y su evaluación produce un resultado booleano: verdadero (true) o falso (false). Codedamn +1

A continuación, analizamos los tipos principales de condicionales: simple, doble, múltiple y anidamiento.
## 2. Estructura Condicional Simple (Si ... Entonces)

### Definición y cuándo se usa

La condicional simple —en muchos lenguajes representada por if solo— se usa cuando queremos que una acción (o un bloque de código) se ejecute solo si una condición se cumple (es verdadera). Si la condición no se cumple, simplemente no sucede nada especial y el programa continúa su ejecución después de la estructura. Codedamn +1

Este tipo de estructura es útil cuando solo te interesa “hacer algo” en caso de una condición favorable, y no necesitas una alternativa en caso de que la condición sea falsa.

### Estructura en C

![Sintaxis If](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/1if.png)

## 3. Estructura Condicional Simple (Si ... Entonces)

### Definición y cuándo se usa

La condicional simple —en muchos lenguajes representada por if solo— se usa cuando queremos que una acción (o un bloque de código) se ejecute solo si una condición se cumple (es verdadera). Si la condición no se cumple, simplemente no sucede nada especial y el programa continúa su ejecución después de la estructura. Codedamn +1

Este tipo de estructura es útil cuando solo te interesa “hacer algo” en caso de una condición favorable, y no necesitas una alternativa en caso de que la condición sea falsa.

### Estructura general en C
![Sintaxis If-else](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/if-else.png)

Si solo hay una sentencia simple, las llaves { } pueden omitirse (aunque es una buena práctica usarlas). Hep Uniovi +1.

## 4. Estructura Condicional Doble (Si ... Entonces, Sino ...)

### Definición y cuándo se usa

(if-else-if). Cuando se necesita que el programa elija entre dos caminos alternativos —uno si la condición se cumple y otro si no— usamos una condicional doble. Es decir, definimos qué debe pasar cuando la condición es verdadera y qué debe pasar cuando es falsa. Esto permite manejar dos escenarios distintos. 

Es apropiada cuando siempre debe tomarse una decisión: ya sea la condición se cumple o no, uno de los dos bloques debe ejecutarse.

### Estructura general en C

![Sintaxis If-elseif](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/if-elseif.png)

## 5. Estructura Condicional Múltiple (En caso de ... / Selección múltiple)

### Definición y cuándo se usa

Cuando necesitamos evaluar varias condiciones alternativas (más de dos) para tomar decisiones, una cadena de if … else if … else es una posibilidad.
El break es importante para evitar que al encontrar un caso verdadero se sigan ejecutando los casos siguientes. 

Sin embargo, cuando las decisiones dependen del valor de una misma variable (por ejemplo, un menú de opciones, un valor numérico o un carácter, etc.), resulta más claro y manejable usar una estructura de selección múltiple con switch-case. 

La estructura switch permite comparar una expresión con múltiples valores constantes, y ejecutar el bloque correspondiente cuando haya coincidencia. Si no hay coincidencia, puede haber una cláusula default como “caso por defecto”. 

### Estructura general en C

Con if ... else if ... else:  

![Sintaxis If-elseif](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/if-elseif.png)

Con switch-case:  

![Sintaxis switch](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/switch.png)

El break es importante para evitar que al encontrar un caso verdadero se sigan ejecutando los casos siguientes. EII UVA +2 OCW Universidad de Cantabria +2

---

## 6. Anidamiento de estructuras condicionales

### Definición y cuándo se usa

El anidamiento consiste en colocar una estructura condicional dentro de otra. Esto permite tomar decisiones más complejas: primero evalúas una condición, y —si se cumple— dentro de ese bloque puedes evaluar otra condición, y así sucesivamente.

Es útil cuando las decisiones dependen de múltiples criterios, en jerarquías de evaluación. 

Por ejemplo: decidir algo si una persona es mayor de edad, y luego dentro de ese caso decidir algo distinto si también es mayor de cierta edad; o en un menú, si una opción es elegida, luego verificar otro valor para realizar una acción específica, etc.

### Estructura general en C

![Sintaxis anidamiento-condi](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/anidamiento-condi.png)


</details>

---

<details>
<summary><h2>🔁 2. Estructuras Repetitivas</h2></summary>

## Contadores y Acumuladores — herramientas fundamentales en programación

Los contadores y acumuladores son mecanismos esenciales en los programas que requieren llevar un registro numérico de eventos, iteraciones, sumas progresivas o resultados parciales. Forman parte de las estructuras de control más comunes y permiten que un algoritmo procese datos paso a paso, actualizando valores a medida que avanza la ejecución. 

Ambos se representan mediante variables numéricas, pero cumplen funciones distintas:

Un contador incrementa o decrementa su valor de forma controlada, generalmente en una cantidad fija (por ejemplo, +1).

Un acumulador suma, resta u opera con valores que varían, almacenando un resultado progresivo.

Son indispensables al trabajar con ciclos, arreglos, listas, cálculos repetitivos, promedios, estadística, procesamiento de datos y más.


## 1. Estructura Mientras (While)

### Definición y cuándo se usa
La estructura mientras (en muchos lenguajes representada como while) ejecuta un bloque de código mientras una condición sea verdadera. Cuando deja de cumplirse, el programa continúa con la ejecución posterior. 

Se utiliza cuando no sabemos exactamente cuántas veces se repetirá un proceso, es decir, cuando el número de iteraciones depende de una condición que cambia durante la ejecución.

 
Es fundamental asegurarse de que la condición cambie dentro del ciclo; de lo contrario, el programa puede caer en un bucle infinito.

### Estructura general en C

![Sintaxis while](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/while.png)

### Ejemplo en C

![Sintaxis ejemplo-while](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/ejemplo-while.png)

---

## 2. Estructura Hacer…Mientras (do-while)

### Definición y cuándo se usa
La estructura hacer…mientras (en muchos lenguajes do…while) ejecuta primero el bloque de código y después evalúa la condición. Esto garantiza que el ciclo se ejecute al menos una vez, incluso si la condición es inicialmente falsa. 

Es apropiada cuando necesitas que el usuario ingrese un dato mínimo una vez, validar una opción, o procesar un bloque que no debe omitirse.

### Estructura general en C

![Sintaxis do](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/do.png)

### Ejemplo en C
![Sintaxis ejemplo-do](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/ejemplo-do.png)

## 3. Estructura Para (For)

### Definición y cuándo se usa
La estructura para (en muchos lenguajes for) se usa cuando el número de repeticiones es determinado. Su sintaxis incluye inicialización, condición y actualización, lo que la hace compacta y fácil de comprender. 
Es ideal para recorrer rangos numéricos, vectores, listas, archivos o ejecutar tareas un número fijo de veces.

### Estructura general en C

![Sintaxis for](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/for.png)

### Ejemplo en C

![Sintaxis ejemplo-for](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/ejemplo-for.png)

---

## 4. Anidamiento de estructuras repetitivas

### Definición y cuándo se usa
El anidamiento consiste en colocar un ciclo dentro de otro, igual que se hace con condicionales, pero aplicado a estructuras repetitivas. Esto permite manejar procesos de múltiples dimensiones: tablas, recorridos matriciales, combinaciones, doble iteración, etc. 

Se usa cuando se requiere recorrer estructuras complejas o repetir ciclos completos dentro de otros.

### Estructura general en C

![Sintaxis anidamiento-bucles](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/anidamiento-bucles.png)

También se pueden anidar while, for, do…while entre sí.


---

## 5. Implementación de estructuras repetitivas en lenguajes de programación

Aunque la sintaxis cambia según el lenguaje, la lógica fundamental es la misma: repetir operaciones según condiciones o rangos.

### En Java
Java usa:

- while  
- do … while  
- for  
- y el bucle especial for-each para recorrer colecciones.

### En Python
Python utiliza:

- while  
- for (que funciona como iterador sobre secuencias)  
- no tiene do…while, pero puede simularse.

</details>

---

<details>
<summary><h2>🧠 3. Ejercicio combinando: estructura condicional y repetitiva</h2></summary>

# Determinar si un número es perfecto

Realice un programa que determine si un número entero **n** es o no perfecto.  
Un número perfecto es un entero que es igual a la **suma de sus divisores positivos menores que él mismo**.

**Ejemplo:**  
6 = 1 + 2 + 3  
Por lo tanto, **6 es un número perfecto**.
# Diagrama de flujo  
![Sintaxis del diagrama de flujo](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/Diagrama-py.png)
# Código en Python
![Sintaxis del código](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/Codigo-py.png)
# Verificacion
![Verificacion del problema](https://raw.githubusercontent.com/noem20bustan-ui/Portafolio-de-Teor-a-de-la-Programaci-n/main/img/Prueba-py.png)

Este tipo de problemas ayuda a comprender cómo interactúan ambas estructuras dentro de un programa y cómo fluye la información a través de las decisiones y los ciclos.

</details>

---

<details>
<summary><h2>📚 4. Tareas entregadas</h2></summary>

| Nº | Actividad | Descripción | Enlace |
|----|------------|-------------|--------|
| 1️⃣ | 🧩 **Aplicaion de estructuras condicionales en la resolucion de problemas** | APE 1 | [Ver Tarea 1](https://drive.google.com/file/d/19j6dx-yoKMpiOZDX0IXRca-Qc_huWHOa/view?usp=sharing) |
| 2️⃣ | 💻 **Aplicaion de estructuras repetitivas en la resolucion de problemas** | APE 2 | [Ver Tarea 2](https://drive.google.com/file/d/1mcQ7-DmnYwzUNdr0uI5I10ricC61cxYp/view?usp=sharing) |
| 3️⃣ | 🧠 **Diferencias entrer los tipos de estructuras condicionales** | AA 1 | [Ver Tarea 3](https://drive.google.com/file/d/1WDfdJpODP4Tu-k-C6_lokMjZWC2A51TD/view?usp=sharing) |
| 4️⃣ | ⚙️ **Cuadro comparativo entre las estructuras repetitivas** | AA 2 | [Ver Tarea 4](https://drive.google.com/file/d/1il0yI7PBZLpCC1tVznO3PZ1woeGEPO9L/view?usp=sharing) |

</details>

---


# ⚠️ Principales dificultades detectadas

Durante esta unidad, la principal dificultad se centró en la comprensión del funcionamiento de los **contadores y acumuladores**.  
Entender su lógica fue un desafío, porque su comportamiento y la acción que ejecutaban dependen directamente de la **ubicación estratégica** que se les asigna dentro de la estructura de control repetitiva (el bucle).

---

# 💭 Reflexión Mejorada: Aprendizaje y Áreas de Oportunidad

Durante esta unidad, aprendí que las **estructuras repetitivas (bucles)** son un componente fundamental en el desarrollo de código.  
Es crucial dominar cómo y cuándo utilizar un **bucle, un contador y un acumulador**, ya que usar correctamente estos elementos determina la ejecución eficiente del programa.

También comprendí que las **estructuras condicionales** son esenciales, pues actúan como herramientas que permiten al programa tomar decisiones o ejecutar acciones distintas dependiendo de si una determinada situación se cumple o no.

Una de mis mayores fortalezas durante este periodo fue la facilidad para **identificar los datos de entrada y salida**, así como la habilidad progresiva para determinar qué tipo de bucle o condicional usar en cada situación específica.

Sin embargo, aún debo mejorar mi **tiempo de desarrollo de los programas**.  
Además, necesito incrementar la rapidez y la certeza al momento de identificar el uso adecuado de un **contador frente a un acumulador** en un problema dado.

---

> 📘 *Portafolio Académico — Matemáticas Discretas — Universidad Nacional de Loja*
