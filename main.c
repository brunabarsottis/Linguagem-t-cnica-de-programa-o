#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Exercicio 4
int maior (int a, int b){
	return (a+b+(abs((a-b)))/2);
}
int main(int argc, char *argv[]) {
	int vet[10];
	int i, maior_valor;
	
	for(i=0; i<10; i++){
		scanf("%d", &vet[i]);
	}
	maior_valor=vet[i];
	
	for(i=0; i<10; i++){
		maior_valor = maior(maior_valor, vet[i]);
	}
	printf("\n%d eh o maior", maior_valor);
	return 0;
}
