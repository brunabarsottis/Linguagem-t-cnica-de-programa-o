#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	
	float raio, area, h, B, b, areat;
	
	printf("Insira o valor do Raio:\n");
	scanf("%f", &raio);
	area = pi*(raio*raio);
	printf("A area do circulo de raio R %f = %f", raio, area);
		
	printf("Calcule a area do trapezio\n");
	printf("Insira o valor da altura H:\n");
	scanf("%f", &h);
	printf("Insira o valor da primeira base B:");
	scanf("%f", &B);
	printf("Insira o valor da segunda base b:");
	scanf("%f", &b);
	areat = ((B+b)*h)/2;
	printf("A area do trapezio e = %f", areat);	
		
	return 0;
}
