#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int numero[100],i,j,aux;
	for(i=0; i<100; i++){
		printf("Digite o numero %d: ",i+1);
		scanf ("%d", &numero[i]);
	}
	for(i=0; i<100-1; i++){
		for(j=0; j<100-i-1; j++){
			if(numero[j]<numero[j+1]){
				aux = numero[j];
				numero[j] = numero[j+1];
				numero[j+1] = aux;
			}
		}
	}
	for(i=0; i<100; i++){
		printf("\nNumero %d: %d", i+1, numero[i]);
	}
	
	return 0;
}
