#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a,b,r;
	printf("Entre com os valores do problema: ");
	scanf("%d %d", &a, &b);
	
	if(a>0 && b>0){
		if(a%2 == 0){
			if(b%2 == 0){
				printf("Sao multiplos de dois");
			}
		}
		if(a>b){
		if(a%b == 0){
			if(b%a == 0){
				printf("Sao multiplos de dois");
			}}
		}
	} else {
		if(b%a == 0){
			printf("Sao multiplos");
		}
	}
	
	return 0;
}
