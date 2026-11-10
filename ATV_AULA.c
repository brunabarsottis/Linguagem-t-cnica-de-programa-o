#include <stdio.h>
#include <stdlib.h>

/*FAÇA UM ALGORITMO PARA ARMAZENAR A NOTA BIMESTRAL DE UM TOTAL DE 10 ALUNOS.
AO FINAL SOLICITE QUAL ALUNO O USUÁRIO DESEJA QUE A NOTA SEJA APRESENTADA. */

int main(int argc, char *argv[]) {
	int notas[10];
	int i, aluno;
	for(i=0; i<10; i++) {
		printf("Nota bimestral do aluno %d: ", i+1);
		scanf("%d", &notas[i]);
	}
	printf("Numero do aluno que deseja ver a nota: ");
	scanf("%d", &aluno);
	if (aluno >= 1 && aluno <= 100){
		printf("Nota bimestral do aluno %d eh: %d", aluno, notas[aluno-1]);
	} else {
		printf("Numero de aluno invalido.");
	}
	return 0;
}
