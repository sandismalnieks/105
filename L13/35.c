/* 35.c 
Masīva izveidošana, aizpildīšana un nolasīšana
 */

#include <stdio.h>
#include <math.h>

int main() {

 	float mas[101]; // izveido masīvu ar 101 elementu
 	int i;

 	for(i=0; i<101; i++){ // masīve elementu inicializācija
 		mas[i] = sqrt(i); // tekošais elements kā kvadrātsakne no i
 	}

 	// Parādīt masīva saturu
 	for (i=0; i<101; i++){
 		printf ("%d %f\n", i, mas[i]);}
}
