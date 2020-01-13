/* 32.c 
Programma faktoriālu aprēķiniem
Faktoriālus rēķina veselu skaitļu rindām
Skaitļu faktoriāls ļoti strauji aug */

#include <stdio.h>
int main (){

	int num, i; // num - skaitlis
	int reizinajums = 1; // faktoriāls no 0! = 1

	printf("Ievadam veselu skaitli: ");
	scanf("%d", &num);

	for (i=1; i<=num; i++){
		reizinajums = reizinajums * i;
	}

	// Izvadē ir kļūda -- izlabots!
	printf("Skaitļa %d faktoriāls ir: %d \n", num, reizinajums);

}
