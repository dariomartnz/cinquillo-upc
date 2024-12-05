// Este fichero se le da al alumno
#include <stdio.h>
#include "azar.h"

#define MAX		10

int main() {
	int i,n, nums;

	inicializar_azar();

	printf("Cuantos numeros al azar quieres?");
	scanf("%d", &nums);
	for(i = 0; i < nums; i++) {
		n = numero_al_azar(MAX);
		printf("%d: %d\n", i, n);
	}
}

