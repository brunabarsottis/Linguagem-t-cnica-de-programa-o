#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int base, altura;
	float area;
	
	printf("Insira o valor da base do triangulo\n");
	scanf("%d", &base);
	printf("Insira o valor da altura do triangulo\n");
	scanf("%d", &altura);
	
	area = (base*altura)/2;
	
	printf("A area do Triangulo Retangulo e %0.2f", area);
	
	return 0;
}
