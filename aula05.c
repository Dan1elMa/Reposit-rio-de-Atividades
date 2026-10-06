#include <stdio.h>
#include <stdlib.h>

int comparaMaior(int a, int b){
	if(a<b)return b;
	else return a;
}
int comparaMenor(int a, int b){
	if(a<b)return a;
	else return b;
}
int main(int argc, char *argv[]){
	int valores[10];
	int maior, menor;
	int i, maior_temp;
	
	printf("Vamos ler os valores: \n");
	for(i=0; i<10; i++){
		scanf("%d", &valores[i]);
	}
	maior = valores[0];
	for(i=0; i<4; i+=2){
		int maior_temp = comparaMaior(valores[i], valores[i+1]);
		maior = comparaMaior(maior_temp, maior);
	}
	menor = valores[5];
	for(i=5; i<10; i+=2){
		int maior_temp = comparaMenor(valores[i], valores[i+1]);
		menor = comparaMenor(maior_temp, menor);
	}
	
	
	printf("\n");
	printf("Maior |%d|", maior);
	
	printf("\n");
	printf("Menor |%d|", menor);
	
	return 0;
}
