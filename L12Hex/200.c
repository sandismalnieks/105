/* 200.c
Programmas autors: Sandis Mālnieks 193NIC058
Programma veidota 2019. gada 23. novembrī
Versija : 1.0
Programma veic ciklisku x dalīšanu ar y
*/

#include <stdio.h>
#include <math.h>


int main()
{
	int x;
	printf("Ievadi skaitli:\t"); // Ievada veselu skaitli x
	scanf("%d", &x);
	printf("Ievadītais skaitlis ir: %d\n", x);

	for (x; x<=10; x++)
	{
		for (int y=1; y<=10; y++)
		{
			double z = ((float)x / (float)y); // Aprēķina dalījumu
			printf("X vērtība ir: %d, Y vērtība ir: %d\n",x,y);
			printf("Dalījums ir: %.2f\n", z);	
		}
	}


}
