#include<stdio.h>

#define SIZE 10

typedef struct {
	int v[SIZE], l;
} t_conjunto;

int main() {
	t_conjunto c = {{1,2,3,4,5}, 5};
	int i, pos, elem;
	
	for ( i = 0 ; i < c.l ; i++) {
		printf("%d ", c.v[i]);
	}
	printf("\n");
	printf("What position do you want to delte? ");
	scanf("%d", &pos);
	
	for (i = pos ; i < c.l - 1 ; i++) {
		c.v[i] = c.v[i+1];
	}
	c.l--;
	
	for ( i = 0 ; i < c.l ; i++) {
		printf("%d  ", c.v[i]);
	}
	printf("\n");
	
	printf("Where do you want to add an element?");
	scanf("%d%d", &pos, &elem);
	for ( i = c.l ; i > pos ; i-- ) {
		c.v[i] = c.v[i-1];
	}
	c.v[i] = elem;
	c.l++;	
	
	for (i = 0 ; i < c.l ; i++) {
		printf("%d ", c.v[i]);
		}
	printf("\n");
} 
