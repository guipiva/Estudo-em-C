#include <stdio.h>

int main(){
	int n1;
	
	printf("Digite um valor: ", n1);
	scanf("%d", &n1);
	
	int a = n1 - 1;
	int s = n1 + 1;
	
	printf("O antecessor de %d e %d e o seu sucessor e %d: ", n1,a,s);
	
}
