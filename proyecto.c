#include <stdio.h>

int main()
//Funcion suma
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

