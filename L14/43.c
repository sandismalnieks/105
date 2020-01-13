/* Programma 43.c
Masīva kārtošana 
Sandis Mālnieks 193RIC058 NEMB0
*/

#include <stdio.h>


int main(){

	int i, j, k; // ciklu mainīgie
	int Temp; // īslaicīgais mainīgais
	char mas3[]= "MASIVS"; // kārtojamo skaitļu masīvs
	printf("[%s]\nChar\tHEX\n", mas3);

	for (i=0; i<(sizeof(mas3)/sizeof(mas3[0])); i++){ // cikliska masīva kārtošana ar burbuli
		for (j=0; j<(sizeof(mas3)/sizeof(mas3[0])-1); j++){ // nākošais cikls ir par vienu mazāks
			if (mas3[j] > mas3[j+1]){
				Temp = mas3[j];
				mas3[j] = mas3[j+1];
				mas3[j+1] = Temp;
			}
		}
	}
// sakārtotā masīva izvade uz ekrāna
	for(k=1; k<(sizeof(mas3)/sizeof(mas3[0])); k++){
		printf("\%c   =   0x%02X\n", mas3[k], mas3[k]);
	}
}
