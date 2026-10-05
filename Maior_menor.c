// Faça um programa que leia 10 valores inteiros e mostre na tela o maior entre os 5 primeiros e o menor entre os 5 restantes
#include <stdio.h>
#include <stdlib.h>

int compara (int a, int b){ 
	if (a < b)return b;
	else return a;
}
int main(int argc, char *argv[]) {
	int valores[10];
	int maior, menor, i;
	
	printf("Vamos ler os valores: ");
// for(inicialização, condição, incremento)
	for(i=0; i<10; i++){
		scanf("%d", &valores[i]);
	}
	printf("\n");
	for(i=9; i>=0; i--){
		printf("|%d|", valores[i]);
	}
	return 0;
}
