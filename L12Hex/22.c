/* 2 2.c
Programmas autors: Sandis Mālnieks 193NIC058
Programma veidota 2019. gada 23. novembrī
Versija : 1.0
Programma cikliskam robežas e aprēķinam */

#include <stdio.h>
#include <math.h>

int main()
{
	int k; // Cikla mainīgais
	double lim; // Robežas mainīgā definēšana

	for (k=1; k<=50; k++)
	{
		lim = pow((1+1./k),k); // robežas aprēķināšana
		printf ("k=%d lim =%f \n", k, lim);
	}
}
