

#include <stdio.h>

int main()
{
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

	}

	return 0;

}


