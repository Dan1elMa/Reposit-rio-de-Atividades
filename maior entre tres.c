#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a,b,c,maior_temp, maior;
	printf("Insira o valor de A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a<b){
		maior_temp = b;
	} else {
		maior_temp = a;
	}
	printf("%d e o maior_temp", maior_temp);
	if(maior_temp<c){
		maior = c;
	} else {
		maior = maior_temp;
	}
	printf("\n%d e o maior", maior);
	
	
	return 0;
}
