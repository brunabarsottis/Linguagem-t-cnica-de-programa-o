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
		case 'g':
			printf("G de gente");
			break;
		case 'h':
			printf("H de humano");
			break;
		case 'i':
			printf("I de igualdade");
			break;
		case 'j':
			printf("J de juventude");
			break:
		case 'l':
        	printf("L de liberdade");
        	break;
    	case 'm':
        	printf("M de molecagem");
        	break;
    	case 'n':
        	printf("N de natureza");
        	break;
    	case 'o':
        	printf("O de obrigado");
        	break;
   		case 'p':
        	printf("P de proteção");
        	break;
    	case 'q':
        	printf("Q de quero-quero");
        	break;
    	case 'r':
        	printf("R de riacho");
        	break;
    	case 's':
        	printf("S de saudade");
        	break;
    	case 't':
        	printf("T de terra");
        	break;
    	case 'u':
        	printf("U de universo");
        	break;
    	case 'v':
        	printf("V de vitória");
        	break;
    	case 'x':
	        printf("X de Xuxa");
        	break;
    	case 'z':
        	printf("Z de zum-zum");
        	break;
		}
	
	return 0;
}
