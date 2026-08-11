#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	
	float r,area;
	printf("Coloque o raio do circulo \n");
	scanf("%f", &r);
	area=pi*(r*r);
	printf("A area do circulo de raio %f = %f \n", r,area);
	
	float areat,B,b,h;
	printf("Qual o B do trapezio? \n");
	scanf("%f", &B);
	printf("Qual o b do trapezio? \n");
	scanf("%f", &b);
	printf("Qual o h do trapezio? \n");
	scanf("%f", &h);
	areat=((B+b)*h)/2;
	printf("A area do trapezio sera = %f", areat);
	
	return 0;
}
