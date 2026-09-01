#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que receba uma letra, e verifique se ela é vogal ou consoante, 
se ela for vogal, verifique se ela é 'a' ou 'o' caso seja mostre 'aoba' 
caso seja 'i' ou 'u' mostre "lá ele". Caso contrário mostre "67" */

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf ("Digite uma letra: ");
	scanf ("%c", &letra);

	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
		if (letra == 'a' || letra == 'o'){
			printf ("aoba");
		} 
		if (letra == 'i' || letra == 'u'){
			printf ("la ele");
		}
	} else {
		printf ("67");
	}
	
	printf ("\nAbecedario da xuxa\n");
	
	switch (letra){
		case 'a':
			printf ("A de amor");	
			break;
		case 'b':
			printf ("B de baixinho");
			break;
		case 'c':
			printf ("C de coracao");
			break;
		case 'd':
			printf ("D de docinho");
			break;
		case 'e':
			printf ("E de escola");
			break;
		case 'f':
			printf ("F de feijao");
			break;
	}
	
	return 0;
}
