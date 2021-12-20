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
