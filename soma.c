/*Veja como você está. Escreva uma função que some dois inteiros e retorne o valor da
soma.*/

#include <stdio.h>

int soma(int a, int b){
	return (a+b);
	
}

int main(){
	int x, y;
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	
	printf("\nsoma de %d + %d = %d\n", x, y, soma(x, y));
		
	return 0;
}

