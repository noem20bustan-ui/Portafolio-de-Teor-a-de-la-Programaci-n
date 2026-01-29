# 🧠 Unidad 3  
## Programación Modular, Funciones y Pase de Parámetros

---

## 📘 Programación modular

### ¿Qué es la programación modular?
La programación modular es un enfoque de desarrollo de software que consiste en dividir un programa grande en partes más pequeñas y manejables llamadas **módulos**. Cada módulo resuelve un problema específico y puede desarrollarse, probarse y mantenerse de manera independiente. Este enfoque facilita la comprensión del programa y reduce la complejidad del desarrollo [1].

---

### Características de la programación modular
- **Descomposición del problema:** el programa se divide en módulos que representan tareas concretas [1].
- **Independencia:** cada módulo funciona de forma casi autónoma.
- **Reutilización:** los módulos pueden reutilizarse en otros programas.
- **Encapsulamiento:** los detalles internos del módulo no son visibles para otros módulos.
- **Mantenimiento sencillo:** los cambios en un módulo afectan mínimamente al resto del sistema [2].

---

## 🔧 Funciones en la programación modular

Las funciones son bloques de código que realizan una tarea específica dentro de un programa. En la programación modular, las funciones permiten estructurar el código y separar responsabilidades [2].

---

### Características de las funciones
- Tienen un nombre que las identifica.
- Pueden recibir datos de entrada llamados **parámetros**.
- Pueden devolver un valor como resultado [2].
- Se ejecutan solo cuando son llamadas [2].

---

### ¿Para qué sirven las funciones?
Las funciones sirven para organizar el código, evitar repeticiones, facilitar la lectura del programa y permitir la reutilización de soluciones ya implementadas [3].

---

## 🔄 Tipos de funciones según el pase de parámetros

---

### 📥 Pase de parámetros por valor
El pase de parámetros por valor consiste en enviar a la función una **copia del dato original**. Esto significa que la variable utilizada como argumento no se modifica fuera de la función, aun cuando el parámetro sea alterado internamente [4].

En este tipo de pase, la función trabaja con una variable local que contiene el mismo valor que la variable original, pero ocupa una posición distinta en memoria. Al finalizar la ejecución de la función, los cambios realizados se pierden [4].

#### Características del pase por valor
- Se envía una copia del dato original.
- No se modifica la variable original [2].
- Ofrece mayor seguridad sobre los datos.
- Es común en operaciones de cálculo y consulta [1].

#### Uso del pase por valor
El pase por valor se utiliza cuando no se desea alterar la información original, como en cálculos matemáticos, validaciones o procesos donde los datos solo deben ser leídos [2].

---
### 🧪 Ejemplo: Pase de parámetros por valor

👉 [Ver ejemplo en código C](paseDeParametrosValor.c)

En este ejemplo se observa que los valores originales de las variables **no se modifican**, ya que la función trabaja únicamente con copias de los datos enviados como parámetros.


---

### 📤 Pase de parámetros por referencia
El pase de parámetros por referencia consiste en enviar a la función la **dirección de memoria** de la variable original. En este caso, la función trabaja directamente sobre la variable original, por lo que cualquier cambio realizado se refleja fuera de la función [1].

Este mecanismo permite modificar datos sin necesidad de devolver un valor explícito, lo cual es común en procedimientos y en funciones que manejan estructuras de datos complejas [2].

#### Características del pase por referencia
- Se envía la dirección de memoria del dato.
- Permite modificar la variable original.
- Reduce el uso de memoria al no copiar datos.
- Requiere mayor cuidado en su uso [2].

#### Uso del pase por referencia
El pase por referencia se emplea cuando es necesario actualizar valores, intercambiar datos o trabajar con grandes volúmenes de información de manera eficiente [2].

---

## ⚖️ Comparación entre pase por valor y por referencia
- El pase por valor protege la información original.
- El pase por referencia permite modificar directamente los datos.
- El pase por valor es más seguro, mientras que el pase por referencia es más eficiente en ciertos casos [3].

---

## 🔣 Símbolos utilizados en el pase de parámetros

En los lenguajes de programación y en el pseudocódigo, el tipo de pase de parámetros suele indicarse mediante símbolos o palabras clave [4].

---

### Símbolos para el pase por valor
- El parámetro se escribe directamente por su nombre.
- No se utiliza ningún símbolo especial.
- Ejemplo conceptual: `funcion(valor)` [1].

Este tipo de pase es el más común y, en muchos lenguajes, es el comportamiento por defecto.

---

### Símbolos para el pase por referencia
- Se utilizan símbolos que indican referencia o dirección de memoria.
- En pseudocódigo académico se emplea el prefijo `&` para indicar referencia [1].
- En algunos lenguajes se utiliza la palabra clave `ref`, `var` u `out`.
- Ejemplo conceptual: `funcion(&variable)`.

Estos símbolos indican que la función trabajará directamente con la variable original [3].

---

## 📦 Arreglos y Arrays

### Concepto general de arreglo / array
Un arreglo, también llamado **array**, es una estructura de datos que permite almacenar un conjunto de elementos del mismo tipo bajo un mismo nombre. Estos elementos se guardan en posiciones contiguas de memoria y se accede a cada uno de ellos mediante un índice numérico. El tamaño del arreglo se define al momento de su declaración y, una vez establecido, no puede modificarse durante la ejecución del programa [1].

Los arreglos facilitan el manejo de grandes cantidades de información relacionada, ya que permiten trabajar con listas de datos de forma ordenada y eficiente [1].

---

### Características de los arreglos
- Almacenan datos del mismo tipo (enteros, reales, caracteres, etc.) [1].
- Ocupan posiciones consecutivas de memoria.
- Cada elemento se identifica mediante un índice [2].
- El tamaño del arreglo es fijo.
- Permiten acceso directo y rápido a cualquier elemento.

---

### ¿Para qué sirven los arreglos?
Los arreglos se utilizan para:
- Almacenar listas de datos relacionados.
- Organizar información de forma estructurada.
- Simplificar el uso de ciclos para recorrer datos.
- Reducir la cantidad de variables necesarias en un programa.

Son ampliamente usados para manejar calificaciones, temperaturas, señales, vectores matemáticos y datos experimentales [3].

---

## ➡️ Arreglos unidimensionales

### Definición
Un arreglo unidimensional es una estructura de una sola dimensión, similar a una lista o vector. Cada elemento se accede mediante un único índice [3].

---

### Características
- Poseen una sola dimensión [1].
- Se accede a sus elementos con un solo índice [2].
- El primer elemento se encuentra en la posición cero.
- Se almacenan de forma continua en memoria.

---

### Aplicaciones
- Registro de notas de estudiantes [2].
- Almacenamiento de temperaturas diarias [2].
- Manejo de vectores matemáticos.

---

## ⬜ Arreglos bidimensionales

### Definición
Un arreglo bidimensional es una estructura de datos organizada en filas y columnas, equivalente al concepto matemático de una matriz [3].

---

### Características
- Poseen dos dimensiones: filas y columnas.
- Cada elemento se identifica mediante dos índices [2].
- Todos los datos son del mismo tipo.
- Internamente se almacenan de manera continua en memoria [2].

---

### Aplicaciones
- Representación de tablas de datos [3].
- Manejo de calificaciones por estudiante y materia [3].
- Modelado de información en forma matricial.

---

## 🧊 Arreglos tridimensionales

### Definición
Los arreglos tridimensionales son una extensión de los arreglos bidimensionales, incorporando una tercera dimensión. Permiten organizar datos en estructuras más complejas [1].

---

### Características
- Poseen tres dimensiones [2].
- Se accede a sus elementos mediante tres índices.
- Son útiles para representar información jerárquica o espacial [2].

---

### Aplicaciones
- Representación de objetos en el espacio [1].
- Modelado de estructuras físicas o científicas.
- Organización de datos por capas, niveles o instantes de tiempo.

