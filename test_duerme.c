// Este fichero se le da al alumno
#include <stdio.h>
#include "duerme.h"

#define MAX		10

int main() {
	int i;

	for(i = 0; i < MAX;i++) {
		printf("HOLA!\n");
		duerme_un_rato();
		// duerme_un_nano_rato();
	}
}

