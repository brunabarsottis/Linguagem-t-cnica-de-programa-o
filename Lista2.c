#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

// Exercicio 1
	int idade, ano, nascimento;
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	printf("Insira o ano atual: ");
	scanf("%d", &ano);
	nascimento = ano-idade;
	printf("O ano de nascimento e: %d", nascimento);
	
// Exercicio 2 
	float k, m;
	printf("\nInsira a velocidade em km/h: ");
	scanf("%f", &k);
	m = k/3.6;
	printf("A velocidade %0.2f km/h, convertida para m/s e: %0.2f", k, m);

// Exercicio 3
	float real, dolar, cotacao;
	printf("\nInsira o valor em Real: ");
	scanf("%f", &real);
	printf("Insira o valor atual do Dolar: ");
	scanf("%f", &dolar);
	cotacao = real / dolar;
	printf("O valor %0.2f em real, convertido em dolar e: %0.2f", real, cotacao);
	
// Exercicio 4
	float celsius,fahrenheit;
	printf("\nInsira a temperatura em graus Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = celsius*(9.0/5.0)+32;
	printf("A temperatura convertida em Fahrenheit e: %.2f", fahrenheit);

// Exercicio 5
	float g,r, pi;
	printf("\nInsira o angulo em graus: ");
	scanf("%f", &g);
	pi = 3.141592;
	r = g * (pi/180);
	printf("Em radianos e: %.2f", r);
	
// Exercicio 6 
	int n, antecessor, sucessor;
	printf("\nEntre com o valor de N: ");
	scanf("%d", &n);
	sucessor = n+1;
	antecessor = n-1;
	printf("O numero %d tem como seu antecessor %d e seu sucessor %d", n, antecessor, sucessor);
	
// Exercicio 7
	float g1, g2, g3, total;
	printf("\nCada ganhador do premio de R$780.000,00 recebera:");
	total = 780.000,00;
	g1 = total * 0.46;
	g2 = total * 0.32;
	g3 = total * 0.22;
	printf("\nGanhador 1: %.2f", g1);
	printf("\nGanhador 2: %.2f", g2);
	printf("\nGanhador 3: %.2f", g3);
	
// Exercicio 8
	int duracao, horas, minutos, segundos, resto;	
	printf("\nInsira o tempo de duracao em segundos: ");
	scanf("%d", &duracao);
	horas = duracao/3600;
	resto = duracao%3600;
	minutos = resto/60;
	segundos = resto%60;
	printf("O tempo e de %d:%d:%d", horas, minutos, segundos);

// Exercicio 9
	float hr, vm, l, distancia;
	printf("\nTempo de viagem em horas: ");
	scanf("%f", &hr);
	printf("Velocidade media em km/h: ");
	scanf("%f", &vm);
	distancia = hr*vm;
	l = distancia/12.0;
	printf("A distancia percorrida e de: %.3fkm e a quantidade de litros necessarios e: %.3fL", distancia, l);
		
// Exercicio 10
	int a, b, c, maiortemp, maior;
	printf("\nInsira tres valores para identificar o maior: ");
	scanf("%d %d %d", &a, &b, &c);
	maiortemp = ((a+b+abs(a-b))/2);
	maior = ((maiortemp+c+abs(maiortemp-c))/2);
	printf("O maior entre |%d|%d|%d| = %d", a, b, c, maior);
		
	return 0;
}
