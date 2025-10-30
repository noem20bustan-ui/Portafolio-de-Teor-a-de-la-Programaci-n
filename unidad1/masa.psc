Algoritmo masa
	Definir masaDelAire, presion, volumen,temperatura como Real;
	Escribir "Ingrese el valor de la presion: ";
	Leer presion;
	Escribir "Ingrese el valor del volumen: ";
	Leer volumen;
	Escribir "Ingrese el valor de la temperatura: ";
	Leer temperatura;
	masaDelAire = ( presion * volumen ) / ( 0.37 * ( temperatura + 460 ));
	Escribir "La masa del aire es: ", masaDelAire;
	
FinAlgoritmo



