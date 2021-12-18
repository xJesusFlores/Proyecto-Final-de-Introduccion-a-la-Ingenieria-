#include <iostream>

int main()
{
	int limite;
	int suma;
	int contador;

	printf("Limite: ");
	scanf_s("%i", &limite);

	contador = 0;
	suma = 0;
	while( ++contador <= limite )
	{		
		suma = suma + contador;	
	}

	printf("La suma de los primeros %i numeros es %i", contador-1, suma);



}
