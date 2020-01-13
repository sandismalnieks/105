/* 34.c
Masīva izveidošana, aizpildīšana un nolasīšana
*/
#include <stdio.h>

int main (){

	int mas[101]; // izveido masīvu ar 10 elementiem
	int i;
	int b;

	for (i=0; i<101; i++){ // masīva elementu inicializācija
		mas [i] = i*i; // tekošais elements tiek noteikts kā x*x
	}

	for (i=0; i<101; i++){ // parādit masīva saturu
		printf("%d %d\n", i, mas [i]);
	}

}
