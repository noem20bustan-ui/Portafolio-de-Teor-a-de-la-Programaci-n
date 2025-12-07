# 🧩 Unidad 2 — Estructuras Condicionales y Repetitivas 

---

<details>
<summary><h2>📘 1. Estructuras Condicionales</h2></summary>

 Condicionales — estructuras de decisión en programación Las estructuras condicionales son herramientas fundamentales en los lenguajes de programación. Permiten que un programa “tome decisiones”: es decir, ejecutar unas líneas de código u otras dependiendo de si se cumple una condición determinada. Esto permite que el flujo del programa no sea siempre lineal, sino que varíe según datos, estados o criterios diferentes. Noob to Master +2 Abdul Wahab Junaid +2 En general, las condiciones se escriben como expresiones lógicas (por ejemplo: “x > 0”, “edad == 18”, “letra == 'a'”, etc.), y su evaluación produce un resultado booleano: verdadero (true) o falso (false). Codedamn +1 A continuación, analizamos los tipos principales de condicionales: simple, doble, múltiple y anidamiento. Estructura Condicional Simple (Si ... Entonces) Definición y cuándo se usa La condicional simple —en muchos lenguajes representada por if solo— se usa cuando queremos que una acción (o un bloque de código) se ejecute solo si una condición se cumple (es verdadera). Si la condición no se cumple, simplemente no sucede nada especial y el programa continúa su ejecución después de la estructura. Codedamn +1 Este tipo de estructura es útil cuando solo te interesa “hacer algo” en caso de una condición favorable, y no necesitas una alternativa en caso de que la condición sea falsa. Estructura general en C if (condición) { // bloque de código que se ejecuta si condición es verdadera } // si condición es falsa → se ignora este bloque y continúa ejecución Si solo hay una sentencia simple, las llaves { } pueden omitirse (aunque es una buena práctica usarlas). Hep Uniovi +1 Ejemplo en C #include <stdio.h> int main() { int numero = 10; if (numero > 0) { printf("El número es positivo.\n"); } return 0; } En este ejemplo, como numero > 0 es verdadero (10 > 0), el programa imprime “El número es positivo.”. Si numero fuera ≤ 0, no imprimiría nada. Codedamn +1 Estructura Condicional Doble (Si ... Entonces, Sino ...) Definición y cuándo se usa Cuando se necesita que el programa elija entre dos caminos alternativos —uno si la condición se cumple y otro si no— usamos una condicional doble. Es decir, definimos qué debe pasar cuando la condición es verdadera y qué debe pasar cuando es falsa. Esto permite manejar dos escenarios distintos. Portal Académico +2 DevsEnv +2 Es apropiada cuando siempre debe tomarse una decisión: ya sea la condición se cumple o no, uno de los dos bloques debe ejecutarse. Estructura general en C if (condición) { // bloque de código si condición es verdadera } else { // bloque de código si condición es falsa } Ejemplo en C #include <stdio.h> int main() { int numero = -5; if (numero > 0) { printf("El número es positivo.\n"); } else { printf("El número no es positivo.\n"); } return 0; } Aquí, si numero es 10 → “El número es positivo.”; si numero es –5 → “El número no es positivo.” Codedamn +2 CodeToFun +2 Estructura Condicional Múltiple (En caso de ... / Selección múltiple) Definición y cuándo se usa Cuando necesitamos evaluar varias condiciones alternativas (más de dos) para tomar decisiones, una cadena de if … else if … else es una posibilidad. Sin embargo, cuando las decisiones dependen del valor de una misma variable (por ejemplo, un menú de opciones, un valor numérico o un carácter, etc.), resulta más claro y manejable usar una estructura de selección múltiple con switch-case. EII UVA +2 Noob to Master +2 La estructura switch permite comparar una expresión con múltiples valores constantes, y ejecutar el bloque correspondiente cuando haya coincidencia. Si no hay coincidencia, puede haber una cláusula default como “caso por defecto”. EII UVA +2 OCW Universidad de Cantabria +2 Estructura general en C Con if ... else if ... else: if (cond1) { // caso 1 } else if (cond2) { // caso 2 } else if (cond3) { // caso 3 } else { // caso por defecto si ninguna condición anterior fue verdadera } Con switch-case: switch (expresion) { case valor_1: // código si expresion == valor_1 break; case valor_2: // código si expresion == valor_2 break; // más casos ... default: // código si ninguna coincidencia break; } El break es importante para evitar que al encontrar un caso verdadero se sigan ejecutando los casos siguientes. EII UVA +2 OCW Universidad de Cantabria +2 Ejemplo en C usando switch-case #include <stdio.h> int main() { int opcion = 3; switch (opcion) { case 1: printf("Opción 1 seleccionada\n"); break; case 2: printf("Opción 2 seleccionada\n"); break; case 3: printf("Opción 3 seleccionada\n"); break; default: printf("Opción no válida\n"); break; } return 0; } Si opcion = 3, imprimirá “Opción 3 seleccionada”. Si opcion tiene otro valor distinto de 1, 2 o 3, entonces caerá en default y mostrará “Opción no válida”. EII UVA +2 X-Engineer +2 Anidamiento de estructuras condicionales Definición y cuándo se usa El anidamiento consiste en colocar una estructura condicional dentro de otra. Esto permite tomar decisiones más complejas: primero evalúas una condición, y —si se cumple— dentro de ese bloque puedes evaluar otra condición, y así sucesivamente. Es útil cuando las decisiones dependen de múltiples criterios, en jerarquías de evaluación. Prologicode +2 KoderHQ +2 Por ejemplo: decidir algo si una persona es mayor de edad, y luego dentro de ese caso decidir algo distinto si también es mayor de cierta edad; o en un menú, si una opción es elegida, luego verificar otro valor para realizar una acción específica, etc. Estructura general en C if (condición1) { // código si condición1 es verdadera if (condición2) { // código si condición2 también es verdadera } else { // código si condición2 es falsa } } else { // código si condición1 es falsa } También se pueden anidar varios niveles, pero se recomienda mantener la lógica clara para evitar complejidad innecesaria. KoderHQ +2 The Upcoming Programmer +2 Ejemplo en C #include <stdio.h> int main() { int edad = 70; if (edad >= 18) { printf("Eres adulto.\n"); if (edad >= 65) { printf("Eres adulto mayor.\n"); } else { printf("No eres adulto mayor.\n"); } } else { printf("No eres adulto.\n"); } return 0; } Si edad = 70, el programa imprimirá: Eres adulto. Eres adulto mayor. Si edad = 30 → “Eres adulto.” / “No eres adulto mayor.” Si edad = 15 → “No eres adulto.” The Upcoming Programmer +1 Comparación general: uso de condicionales en Java y Python Aunque la sintaxis cambia de un lenguaje a otro, la idea de condicionales es similar: decidir qué camino seguir según ciertas condiciones lógicas. A continuación, una visión general: En Java Se usan if, if … else, if … else if … else para condicionales simples, dobles y múltiples. También existe switch para selección múltiple sobre valores discretos (enteros, char, enums, cadenas —dependiendo versión de Java). Ejemplo simple en Java: int numero = 5; if (numero > 0) { System.out.println("El número es positivo"); } else if (numero == 0) { System.out.println("El número es cero"); } else { System.out.println("El número es negativo"); } En Python Se usan if, if … else, if … elif … else para manejar decisiones. No existe switch nativo (al menos hasta versiones recientes), así que para selección múltiple con muchas opciones se usa if … elif. Ejemplo simple en Python: numero = -3 if numero > 0: print("El número es positivo") elif numero == 0: print("El número es cero") else: print("El número es negativo"). 
</details>

---

<details>
<summary><h2>🔁 2. Estructuras Repetitivas</h2></summary>

Las **estructuras repetitivas**, también llamadas *bucles*, permiten ejecutar un conjunto de instrucciones múltiples veces mientras cierta condición sea verdadera.

En esta unidad se profundizó en:

### ✔️ *Mientras… hacer*
Repite las instrucciones mientras la condición sea verdadera.

### ✔️ *Repetir… hasta que*
Ejecuta siempre al menos una vez, y se detiene cuando la condición se cumple.

### ✔️ *Para… desde… hasta*
Ideal para repeticiones controladas por contador.

Se estudiaron también los elementos esenciales para controlar correctamente los ciclos:

- **Contadores**
- **Acumuladores**
- **Valores iniciales y finales**
- **Incrementos y decrementos**

Su correcta ubicación dentro del ciclo determina el comportamiento final del algoritmo.

</details>

---

<details>
<summary><h2>🧠 3. Ejercicio combinando: estructura condicional y repetitiva</h2></summary>

A continuación se estudió un ejercicio que combinaba:

- Una **estructura condicional**, utilizada para decidir entre varias acciones;
- Una **estructura repetitiva**, usada para ejecutar pasos de forma cíclica.

Este tipo de problemas ayuda a comprender cómo interactúan ambas estructuras dentro de un programa y cómo fluye la información a través de las decisiones y los ciclos.

</details>

---

<details>
<summary><h2>📚 4. Tareas entregadas</h2></summary>

| Nº | Actividad | Descripción | Enlace |
|----|------------|-------------|--------|
| 1️⃣ | 🧩 **Herramientas de algoritmos** | Pseudocódigo y diagramas de flujo | [Ver Tarea 1](https://drive.google.com/file/d/1r_Qpz6qW0wUK3Sd-qUcKzpLrpNokYlvD/view?usp=sharing) |
| 2️⃣ | 💻 **Instalación de lenguajes** | C, Python o Java | [Ver Tarea 2](https://drive.google.com/file/d/1Jc6zVyShcyrnG4cg1bK00uLtHNyj8kfi/view?usp=sharing) |
| 3️⃣ | 🧠 **Primer acercamiento** | Construcción de algoritmos secuenciales | [Ver Tarea 3](https://drive.google.com/file/d/1SLboYDiEZJBnluvBBm8XdPh35Owha0Zo/view?usp=sharing) |
| 4️⃣ | ⚙️ **Del diseño al programa** | Del algoritmo a la construcción del código | [Ver Tarea 4](https://drive.google.com/file/d/111MfQ9oO4RabY0mmf6SDrkK2UgdKd1D-/view?usp=sharing) |

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
