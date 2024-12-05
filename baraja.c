#include <stdio.h>
#define NUM_CARTAS 	40

typedef struct {

	int numero;
	int tipo;
	
} t_carta;

void generar_baraja(t_carta baraja[]) {
    int num, pal;
	char car_pal;
	
	printf("\n");
	printf("[ORO] [COP] [ESP] [BAS] \n"); 
	for ( num = 12 ; num >= 1 ; num -- ) {
		if ( num == 9 ) {
			num = 7;
		}
		for ( pal = OROS ; pal <= BASTOS ; pal ++ ) {
			switch (pal) {
				case OROS:
					car_pal = CAR_O;
					break;
				case COPAS:
					car_pal = CAR_C;
					break;
				case ESPADAS:
					car_pal = CAR_E;
					break;
				case BASTOS:
					car_pal = CAR_B;
					break;
			}
			printf("[%c%2d] ", car_pal, num);
		}	
		printf("\n");
	}
	printf("\n");
}
	


int main () {

t_carta baraja[NUM_CARTAS]; //defonir las 40 cartas
	
generar_baraja(baraja);
}
        
