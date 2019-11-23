/* 2 1.c
Programmas autors: Sandis Mālnieks 193NIC058
Programma veidota 2019. gada 23. novembrī
Versija : 1.0
Programma parāda iespējamo datu tipa pārplūdi */

#include <stdio.h>
#include <limits.h>

int main ()
{
	int a = 50000; // 50,000
	int b = 1000000; // 1,000,000
	int c = a * b; // Sagaidāmais rezultāts ir 50000000000
	printf ("Int datu tipa izmērs ir: %d baiti \n", sizeof(int) );
	printf ("Aprēķinam a un b reizinājumu:\n" );
	printf ("a = %d, b = %d \n", a, b);
	printf ("c = a * b = %d * %d = %d \n", a,b,c ); // Rezultāts uz ekrāna ir -1539607552, tāpēc ka int b pārsniedz 4 baitus (vērtība >65535)
}
