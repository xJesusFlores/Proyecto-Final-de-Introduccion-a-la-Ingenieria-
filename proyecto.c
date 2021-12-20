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

//////////////////// FUNCION SAUL HIDALGO ARCOS /////////////////


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

//Funcionisai.cpp

	int dia, mes, year;
	scanf_s("%i", &dia);
	scanf_s("%i", &mes);
	scanf_s("%i", &year);

	//dia = 28;
	//mes = 2;
	//year = 2021;
	dia = dia + 1;
	bool bi;
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				bi = 1;
			}
			else {
				bi = 0;
			}
		}
		else {
			bi = 1;
		}
	}
	else {
		bi = 0;
	}


	if (dia > 30) {
		if (mes != 12) {
			mes = mes + 1;
			dia = 1;
			printf("%2i %2i %4i", dia, mes, year);
		}
		else {
			mes = 1;
			dia = 1;
			year = year + 1;
			printf("%2i %2i %4i", dia, mes, year);
		}
	}
	else {
		if (mes == 2 && dia > 28) {
			if (dia == 29) {
				if (bi == 1) {
					printf("%2i %2i %4i", dia, mes, year);
				}
				else {
					mes = mes + 1;
					dia = 1;
					printf("%2i %2i %4i", dia, mes, year);
				}
			}
			else {
				mes = mes + 1;
				dia = 1;
				printf("%2i %2i %4i", dia, mes, year);
			}
		}
		else {
			printf("%2i %2i %4i", dia, mes, year);
		}
return 0;
}
