#include <stdio.h>
#include <stdlib.h>

// FAÇA UM PROGRAMA QUE LEIA DOIS VALORES, CASO ELES SEJAM POSITIVOS VERIFIQUE SE SÃO MULTILPOS DE 2 E ENTRE SI CASO NEGATIVO VERIFIQUE QUAL É O MAIOR DOS DOIS

int main(int argc, char *argv[]) {
	
	int a, b, r;
	printf("Entre com os valores do problema: ");
	scanf("%d %d", &a, &b);
	if (a > 0 && b > 0) {
        if (a % 2 == 0 && b % 2 == 0) {
            printf("\nAmbos sao multiplos de 2");
        } else if (a % 2 == 0) {
            printf("\nApenas %d eh multiplo de 2", a);
        } else if (b % 2 == 0) {
            printf("\nApenas %d eh multiplo de 2", b);
        } else {
            printf("\nNenhum eh multiplo de 2");
        }

        if (a % b == 0 || b % a == 0) {
            printf("\n%d e %d sao multiplos entre si", a, b);
        } else {
            printf("\n%d e %d nao sao multiplos entre si", a, b);
        }
    } else {
        if (a > b) {
            printf("\nO maior valor eh: %d", a);
        } else if (b > a) {
            printf("\nO maior valor eh: %d", b);
        } else {
            printf("\nOs valores sao iguais %d", a);
        }
    }

    return 0;
}
		 
	
