#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

// Exercicio 1
void exercicio1() {
    printf("EXERCICIO 1\n");
    int numero[100], original[100], i, j, aux;
    for(i = 0; i < 100; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero[i]);
        original[i] = numero[i];
    }	
    printf("\nNUMEROS NA ORDEM INVERSA DE LEITURA\n");
    for(i = 99; i >= 0; i--){
        printf("Numero: %d\n", original[i]);
    }
    for(i = 0; i < 100 - 1; i++){
        for(j = 0; j < 100 - i - 1; j++){
            if(numero[j] < numero[j+1]){
                aux = numero[j];
                numero[j] = numero[j+1];
                numero[j+1] = aux;
            }
        }
    }
    printf("\nNUMEROS ORDENADOS (MAIOR PARA O MENOR)\n");
    for(i = 0; i < 100; i++){
        printf("Numero: %d\n", numero[i]);
    }
}

// Exercicio 2
void exercicio2() {
    printf("\nEXERCICIO 2\n");
    int i, expoentes[1];
    int tamanho = 1;
    double numeros[1], A[1];

    printf("Digite um valor: ");
    for (i = 0; i < tamanho; i++){
        scanf("%lf", &numeros[i]);
    }	
    for(i = 0; i < tamanho; i++){
        A[i] = numeros[i];
        expoentes[i] = 0;
        if (A[i] >= 10.0){
            for(; A[i] >= 10.0; expoentes[i]++){
                A[i] = A[i] / 10.0;
            }
        }
        else if (A[i] > 0.0 && A[i] < 1.0) {
            for (; A[i] < 1.0; expoentes[i]--) {
                A[i] = A[i] * 10.0;
            }
        }
    }
    for (i = 0; i < tamanho; i++) {
        printf("Cientifica: %.2f x 10^%d\n", A[i], expoentes[i]);
    }
}

// Exercicio 3
void exercicio3() {
    printf("\nEXERCICIO 3\n");
    int n, i;
    int binario[64]; 
    int indice = 0;
    for (n = -1; n <= 0 || n > 64; ) {
        printf("Digite um numero inteiro positivo (n <= 64): ");
        scanf("%d", &n);
        
        if (n <= 0 || n > 64) {
            printf("Valor invalido! O numero deve ser maior que 0 e menor ou igual a 64.\n\n");
        }
    }
    int temp = n;
    for (i = 0; n > 0; i++) {
        binario[i] = n % 2;
        n = n / 2;          
        indice++;           
    }
    printf("\nO numero %d em binario eh: ", temp);
    for (i = indice - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
    printf("\n");
}

// Exercicio 4
void exercicio4() {
    printf("\nEXERCICIO 4\n");
    int vet[10];
    int i, maior_valor;
    for(i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    maior_valor = vet[0];
    for(i = 1; i < 10; i++){
        maior_valor = maior(maior_valor, vet[i]);
    }
    printf("\n%d eh o maior\n", maior_valor);
}

// Exercicio 5
void exercicio5() {
    printf("\nEXERCICIO 5\n");
    int numeros[100];
    int i, j;
    int divisores;
    printf("Digite 100 numeros inteiros:\n");
    for (i = 0; i < 100; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 100; i++) {
        printf("Numero %d (%d): ", i + 1, numeros[i]);
        if (numeros[i] % 2 == 0) {
            printf("Par");
        } else {
            printf("Impar");
        }
        divisores = 0;
        if (numeros[i] > 1) {
            for (j = 1; j <= numeros[i]; j++) {
                if (numeros[i] % j == 0) {
                    divisores++;
                }
            }
        }
        if (divisores == 2) {
            printf(" e Primo.\n");
        } else {
            printf(" e Nao primo.\n");
        }
    }
}

// Exercicio 6
void exercicio6() {
    printf("\nEXERCICIO 6\n");
    double x1[10], y1[10], x2[10], y2[10];
    double distancia[10];
    int i;
    printf("DIGITE AS COORDENADAS DOS 10 PARES DE PONTOS\n");
    for (i = 0; i < 10; i++) {
        printf("\nPar de pontos %d:\n", i + 1);
        printf("Digite x1: ");
        scanf("%lf", &x1[i]);
        printf("Digite y1: ");
        scanf("%lf", &y1[i]);
        printf("Digite x2: ");
        scanf("%lf", &x2[i]);
        printf("Digite y2: ");
        scanf("%lf", &y2[i]);
    }
    for (i = 0; i < 10; i++) {
        distancia[i] = sqrt(pow(x2[i] - x1[i], 2) + pow(y2[i] - y1[i], 2));
    }
    for (i = 0; i < 10; i++) {
        printf("Par %d = P1(%.2f, %.2f) e P2(%.2f, %.2f), Distancia: %.2f\n", 
               i + 1, x1[i], y1[i], x2[i], y2[i], distancia[i]);
    }
}

// Exercicio 7
void exercicio7() {
    printf("\nEXERCICIO 7\n");
    int vetor[100];
    int i;
    int encontrou = 0;
    printf("--- DIGITE 100 NUMEROS INTEIROS ---\n");
    for (i = 0; i < 100; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 99; i++) {
        if (vetor[i + 1] == vetor[i] + 1) {
            printf("Sequencia consecutiva encontrada nas posicoes [%d] e [%d]: %d e %d\n", 
                   i, i + 1, vetor[i], vetor[i + 1]);
            encontrou = 1;
        }
    }
    if (encontrou == 0) {
        printf("Nao foram encontrados numeros em ordem consecutiva no vetor.\n");
    }
}

int main(int argc, char *argv[]) {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    
    return 0;
}
