#include <stdio.h>

int main(){
    int n1, n2, resultado;

    printf("Digite um valor: ", n1);
    scanf("%d", &n1);

    printf("Digite outro valor: ", n2);
    scanf("%d", &n2);
	
	resultado = n1 + n2;
	
    printf("o Resultado da soma de %d e %d e: %d", n1,n2,resultado);

}
