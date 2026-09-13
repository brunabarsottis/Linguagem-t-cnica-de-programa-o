#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

// Exercício 1
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, dgv1, dgv2;

	printf ("Digite o CPF: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &dgv1,&dgv2);
	printf("O CPF inserido: %d%d%d.%d%d%d.%d%d%d-%d%d", d1, d2, d3, d4, d5, d6, d7, d8, d9, dgv1, dgv2);
	
	int md1, md2, md3, md4, md5, md6, md7, md8, md9, resto1, resto2, soma, mdv;
	md1 = d1*10; md2 = d2*9; md3 = d3*8; md4 = d4*7; md5 = d5*6; md6 = d6*5; md7 = d7*4; md8 = d8*3; md9 = d9*2;
	soma = md1+md2+md3+md4+md5+md6+md7+md8+md9;
	soma *= 10;
	resto1 = soma%11;
	printf ("\n%d", resto1);
	md1 = d1*11; md2 = d2*10; md3 = d3*9; md4 = d4*8; md5 = d5*7; md6 = d6*6; md7 = d7*5; md8 = d8*4; md9 = d9*3; 
	mdv = dgv1 * 2;
	soma = md1+md2+md3+md4+md5+md6+md7+md8+md9+mdv;
	soma *= 10;
	resto2 = soma%11;
	printf ("\n%d", resto2);
	if (dgv1 == resto1 && dgv2 == resto2) printf ("\nCPF valido."); else printf ("\nCPF invalido.");
// Exercicio 2	
	char opcao;
    float temp, resultado;

    printf("Digite 'C' para converter de Celsius para Fahrenheit\n");
    printf("Digite 'F' para converter de Fahrenheit para Celsius\n");
    printf("Escolha a grandeza de entrada: ");
    scanf(" %c", &opcao);

    if (opcao == 'C' || opcao == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp);
        resultado = (temp * 9.0 / 5.0) + 32.0;
        printf("Resultado: %.2f Fahrenheit\n", resultado);
    } else if (opcao == 'F' || opcao == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp);
        resultado = (temp - 32.0) * (5.0 / 9.0);
        printf("Resultado: %.2f Celsius\n", resultado);
    } else {
        printf("Opcao invalida!\n");
    }
// Exercicio 3
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situacao: Aprovado");
    } else if (media >= 4.0) {
        printf("Situacao: Exame");
    } else {
        printf("Situacao: Reprovado");
    }

	return 0;
}
