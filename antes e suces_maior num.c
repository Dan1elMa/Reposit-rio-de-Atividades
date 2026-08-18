#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int n, antecessor, sucessor;
	printf("Insira o valor de N: ");
	scanf("%d", &n);
	sucessor = n+1;
	antecessor = n-1;
	printf("O valor %d, com antecessor %d e sucessor %d", n, antecessor, sucessor);
	
	int a,b,c,maiorTemp,maior;
	printf("Insira tres valores para identificar o maior: ");
	scanf("%d %d %d", &a, &b, &c);
	
	maiorTemp = ((a+b+abs(a-b))/2);
	maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
	printf("O maior entre |%d||%d||%d| = %d", a,b,c,maior);
		
	return 0;
}
