#include <stdio.h>
#define NUM_CARTAS 	40

typedef struct {

	int numero;
	int tipo;
	
} t_carta;

void generar_baraja(t_carta baraja[]) {

    char tipo[] = {'C', 'O', 'B', 'E'};  // Los 4 tipos: Copas, Oros, Bastos, Espadas
    int aux = 0;
    int i, j;
   
    	for (i = 0; i < 4; i++) {          // recorre los cuatro tipos de cartas
        	for (j = 1; j <= 7; j++) {     // para cada tipo los numeros de kas cartas
        	
        	baraja[aux].numero = j;
        	baraja[aux].tipo = tipo[i];
        	aux++;
        }
    }
}

void imrpimir_baraja(t_carta baraja[])
	int



int main () {

t_carta baraja[NUM_CARTAS]; //defonir las 40 cartas

generar_baraja(baraja);
}
        
