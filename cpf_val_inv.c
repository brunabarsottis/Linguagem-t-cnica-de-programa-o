#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, dgv1, dgv2;
	
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
	
	return 0;
}
