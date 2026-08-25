#include <stdio.h>
#include <stdlib.h>

// FAÇA UM PROGRAMA QUE LEIA DOIS VALORES, CASO ELES SEJAM POSITIVOS VERIFIQUE SE SÃO MULTILPOS DE 2 E ENTRE SI CASO NEGATIVO VERIFIQUE QUAL É O MAIOR DOS DOIS

int main(int argc, char *argv[]) {
	
	int a, b, r;
	printf("Entre com os valores do problema: ");
	scanf("%d %d", &a, &b);
	if (a>0 && b>0){
		if(a%2 == 0 && b%2 == 0){
			printf("Sao multiplos de 2");
		}
		if (a>b){
			if (a%b == 0){
				printf("\nsao multiplos");
		} else {
			if (b%a ==0){
				printf("\nsao multiplos");
				}
			}
		} else {
					
	}
}

	
	return 0;
}
