#include <stdio.h>


int main()
{
    int ;
//

printf();
return 0;
}
////////////////// Saul///////////
#include <stdio.h>

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