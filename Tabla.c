#include<stdio.h>

#define OROS		  0
#define COPAS		  1
#define ESPADAS  	2
#define BASTOS		3
#define CAR_O	   'O'
#define CAR_C	   'C'
#define CAR_E	   'E'
#define CAR_B  	 'B'

int main() {
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
	






