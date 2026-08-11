#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	
	float raio, area;
	
	printf("Insira o valor do Raio:\n");
	scanf("%f", &raio);
	area = pi*(raio*raio);
	printf("A area do circulo de raio R %f = %f", raio, area);
		
	return 0;
}
