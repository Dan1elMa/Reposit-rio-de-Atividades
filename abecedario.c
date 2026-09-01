#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char letra;
	printf("Insira uma letra: ");
	scanf("%c",&letra);
	 if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
	 	if(letra == 'a' || letra == 'o'){
	 		printf("Aoba ");
		 }
		 if(letra == 'i' || letra == 'u' || letra == 'e'){
		 	printf("La ele ");
		 }
	 }else{
	 	printf("69 ");
	 }
	 
	switch (letra){
		case'a':
			printf("a de amor");
			break;
		case'b':
			printf("b de baixinho");
			break;
		case'c':
			printf("c de coracao");
			break;
		case'd':
			printf("d de docinho");
			break;
		case'e':
			printf("e de escola");
			break;
		case'f':
			printf("f de feijao");
			break;
		case'g':
			printf("g de gente");
			break;
		case'h':
			printf("h de humano");
			break;
		case'i':
			printf("i de igualdade");
			break;
		case'j':
			printf("j, juventude");
			break;
		case'k':
			printf("nao tem k");
			break;
		case'l':
			printf("l, liberdade");
			break;
		case'm':
			printf("m, molecagem");
			break;
		case'n':
			printf("n, natureza");
			break;
		case'o':
			printf("o, obrigado");
			break;
		case'p':
			printf("p, protecao");
			break;
		case'q':
			printf("q de quero quero");
			break;
		case'r':
			printf("r de riacho");
			break;
		case's':
			printf("s, saudade");
			break;
		case't':
			printf("t de terra");
			break;
		case'u':
			printf("u de universo");
			break;
		case'v':
			printf("v de vitoria");
			break;
		case'w':
			printf("nao tem w");
			break;
		case'x':
			printf("x e o que? e xuxa");
			break;
		case'y':
			printf("nao tem y");
			break;
		case'z':
			printf("z e zum, zum, zum, zum, zum");
			break;																								
	} 
	
	return 0;
}
