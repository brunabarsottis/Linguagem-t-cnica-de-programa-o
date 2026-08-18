#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

	
// Exercicio 2 
	float k, m;
	printf("Insira a velocidade em km/h: ");
	scanf("%f", &k);
	m = k/3.6;
	printf("A velocidade %0.2f km/h, convertida para m/s e: %0.2f", k, m);

	
// Exercicio 3
	float real, dolar, cotacao;
	printf("Insira o valor em Real: ");
	scanf("%f", &real);
	printf("Insira o valor atual do Dolar: ");
	scanf("%f", &dolar);
	cotacao = real / dolar;
	printf("O valor %0.2f em real, convertido em dolar e: %0.2f", real, cotacao);

// Exercicio 6 
	int n, antecessor, sucessor;
	printf("\nEntre com o valor de N: ");
	scanf("%d", &n);
	sucessor = n+1;
	antecessor = n-1;
	printf("O numero %d tem como seu antecessor %d e seu sucessor %d", n, antecessor, sucessor);
	

// Exercicio 8
	int a, b, c, maiortemp, maior;
	printf("Insira tres valores para identificar o maior: ");
	scanf("%d %d %d", &a, &b, &c);
	maiortemp = ((a+b+abs(a-b))/2);
	maior = ((maiortemp+c+abs(maiortemp-c))/2);
	printf("O maior entre |%d|%d|%d| = %d", a, b, c, maior);
	
	return 0;
}
