/* 20.c Programma ar datu izvadi (data out)
Programmas autors: Sandis Mālnieks 193NIC058
Programma veidota 2019. gada 23. novembrī
Versija: 1.0
Programma mani iztaujā un veic aprēķinus lietojot user-functions */

#include <stdio.h>

void f61() /* Void datu tips nozīmē, ka funkcija neko neatgriež (kā procedure in Pascal) */
{
	printf("Sveiks, kā Tevi sauc?\t");
}

void f62()
{
	printf("Kāds ir Tavs vecums?\t");
}

void f63()
{
printf("Cik liels Tu esi augumā (augums metros)?:\t");
}

int main()
{
	char vards[20]; // Simbolu virkne - masīvs. (20 simboli)
	int vecums; // Vesels skaitlis integer
	float augums; // decimālskaitlis float

	f61(); // Tiek izsaukta funkcija f61
	scanf("%s", vards); // Skanē simbolu virkni (string)
	f62(); // Tiek izsaukta funkcija f62
	scanf("%d", &vecums); // Esi vērīgs ar ampersanda zīmi!
	f63(); // Tiek izsaukta funkcija f63
	scanf("%f", &augums); // Decimālatdalītājs ir punkta simbols: "."
	printf("Mans vārds ir: %s\n", vards);
	printf("Esmu %d gadus jauns, %d. gada produkts \n", vecums, 2019 - vecums);
	printf("Garumā esmu padevies: %.f cm \n", augums *100);
}
