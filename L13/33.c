/* 33.c 
Programma faktoriālu aprēķiniem
Faktoriālus rēķina veselu skaitļu rindām
Skaitļu faktoriāls ļoti strauji aug */

#include <stdio.h>
#include <limits.h>

int main (){

/*
	int num, i; // num - skaitlis
	int reizinajums = 1; // faktoriāls no 0! = 1

	printf("Ievadam veselu skaitli: ");
	scanf("%d", &num);

	for (i=1; i<=num; i++){
		reizinajums = reizinajums * i;
	}

	// Izvadē ir kļūda -- izlabots!
	printf("Skaitļa %d faktoriāls ir: %d \n", num, reizinajums);

	// Maksimālā vērtība datu tipam integer ir : 2147483647
	printf("Maksimālā integer datu tipa vērtība: %d\n", INT_MAX);
	// Augstākais skaitlis kuram var noteikt faktoriālu (izmantojot int datu tipu) ir 13 !
*/

	// Lielākais datu tips C valodā ir long double
	// long double ļauj noteikt faktoriālus ar vērtību līdz 1.1*10^4932 !
	int num, i; // num - skaitlis
	long double reizinajums = 1; // faktoriāls no 0! = 1

	printf("Ievadam veselu skaitli: ");
	scanf("%d", &num);

	for (i=1; i<=num; i++){
		reizinajums = reizinajums * i;
	}


	// Izvadē ir kļūda -- izlabots!
	printf("Skaitļa %d faktoriāls ir: %Lf \n", num, reizinajums);
}
