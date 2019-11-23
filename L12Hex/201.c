/* 201.c
Programmas autors: Sandis Mālnieks 193NIC058
Programma veidota 2019. gada 23. novembrī
Versija : 1.0
Programma pārveido grādus radiānos pēc lietotāja ievades
*/

#include <stdio.h>
#include <math.h>

int main()
{

	float degrees;
	printf("Ievadi grādus:\t");
	scanf("%f", &degrees);  // Ievada grādus, decimālskaitlis

	float radians = degrees * M_PI / 180.0; // Aprēķina radiānus
		
	printf("%.2f grādi ir %.2f radiāni.\n", degrees, radians);

}
