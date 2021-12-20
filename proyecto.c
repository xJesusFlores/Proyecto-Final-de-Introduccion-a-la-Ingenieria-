#include <stdio.h>

int main()
//Funcion suma (Moises)
{
int num1, num2, resultado;
printf("Ingrese el primer valor\n");
scanf_s("%d", &num1);
printf("Ingrese el segundo valor\n");
scanf_s("%d",&num2);
resultado = num1 + num2;
printf("El resultado de la suma es: %d\n",resultado);
return 0;

}

{
//funcion de que suma los numeros que hay desde cero hasta la cantidad deseada (Rey)

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
//////////////////// FUNCION SAUL HIDALGO ARCOS /////////////////

#include <stdio.h>

#define NUMDATOS	5
#define VERDADERO	1
#define FALSO		0


int buscador(int item, int arr[], int numElementos)
{
	int lEncontrado = FALSO;
	int i;
	int posicion = -1;
	
	// busqueda secuencial
	i = 0;
	while (i < numElementos && !lEncontrado)
	{
		printf("Comparando %i %i\n", item, arr[i]);
		if (item == arr[i])
		{
			lEncontrado = VERDADERO;
			posicion = i;
		}
		i++;
	}

	return posicion;
//
