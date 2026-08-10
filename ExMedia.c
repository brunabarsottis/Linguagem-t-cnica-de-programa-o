#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int v1,v2,v3;
	float media;
	
	v1 = 15;
	v2 = 25;
	v3 = 20;
	media = (v1+v2+v3)/3;
	
	printf("A media dos tres valores e: %0.f", media);
	
	return 0;
}
