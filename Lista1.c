#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

// Exercicio 1

	int v1, v2;
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &v1);
	printf("Insira outro numero inteiro: ");
	scanf("%d", &v2);
	
	printf("A ordem inversa dos numeros lidos: %d e %d", v2, v1);
	
	
// Exercicio 2
	
	double n;
	int expoente = 0;
	
	printf("\nInsira um valor de N: ");
	scanf("%lf", &n);
	
	while (n >= 10.0){
		n /= 10.0;
		expoente++;
	}
	while (n < 1.0 && n > 0.0) {
		n *= 10.0;
		expoente--;
	}
	
	printf("Em notacao cientifica: %.2lf x 10^%d", n, expoente);

// Exercicio 3 
	
	int n, resultado, bit64, bit32, bit16, bit8, bit4, bit2 ;
	
	printf("\nEntre com o valor de N: ");
	scanf ("%d", &n);
	
	bit64 = n%2;
	resultado= n/2;
	bit32 = resultado%2;
	resultado = resultado/2;
	bit16 = resultado%2;
	resultado = resultado/2;
	bit8 = resultado%2;
	resultado = resultado/2;
	bit4 = resultado%2;
	resultado = resultado/2;
	bit2 = resultado%2;
	resultado = resultado/2;
	
	printf("\nO numero %d em binario = %d%d%d%d%d%d%d", n, resultado%2, bit2, bit4, bit8, bit16, bit32, bit64);

// Exercicio 4

	float salario, vendas, comissao;
	
	printf("Salario: ");
	scanf("%f", &salario);
	printf("Total de vendas: ");
	scanf("%f", &vendas);
	
	comissao = salario + (vendas*0.15);
	printf("Total a receber com comissao: %.2f", comissao);

// Exercicio 5	

	float v1, v2, v3, v4, soma, media, produtorio;
	
	printf("Insira o primeiro numero: ");
	scanf("%f", &v1);
	printf("Insira o segundo numero: ");
	scanf("%f", &v2);
	printf("Insira o terceiro numero: ");
	scanf("%f", &v3);
	printf("Insira o quarto numero: ");
	scanf("%f", &v4);
	
	soma = v1+v2+v3+v4;
	media = (v1+v2+v3+v4)/4;
	produtorio = v1*v2*v3*v4;
	
	printf("\nA soma dos numeros e: %.2f, A media dos numeros e: %.2f e o Produtorio dos numeros e: %.2f", soma, media, produtorio);

// Exercicio 6
	
	int idade, dias, meses, anos, resto;
	
	printf("Insira a idade em dias: ");
	scanf("%d", &idade);
	
	anos = idade / 365;
	resto = idade % 365;
	meses = resto / 30;
	dias = resto % 30;
	
	printf("%d anos\n", anos);
	printf("%d meses\n", meses);
	printf("%d dias", dias);

// Exercicio 7

	float raio, volume, pi;
	
	printf("Insira o Raio da esfera: ");
	scanf("%f", &raio);
	
	pi = 3.14159;
	volume = (4.0/3)*pi*pow(raio, 3);
	
	printf("O volume da esfera de raio %.2f e: %.2f", raio, volume);
	
// Exercicio 8 

	int x1,x2,y1,y2;
	float dist, cat1, cat2;
	
	printf("\nEntre com os valores para p1(x1,y1)");
	scanf("%d", &x1);
	scanf("%d", &y1);
	printf("Entre com os valores para p2(x2,y2)");
	scanf("%d", &x2);
	scanf("%d", &y2);
	
	cat1 = pow((x2-x1), 2);
	cat2 = pow((y2-y1), 2);
	
	dist = sqrt(cat1+cat2);
	
	printf("Distancia: %f", dist);
	
	return 0;
}
