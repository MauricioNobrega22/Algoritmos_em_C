#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float ladoA, ladoB, ladoC;
	
	printf("Digite o valor do primeiro lado do triângulo: ");
	scanf("%f", &ladoA);
	
	printf("Digite o valor do segundo lado do triângulo: ");
	scanf("%f", &ladoB);
	
	printf("Digite o valor do terceiro lado do triângulo: ");
	scanf("%f", &ladoC);
	
	if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoC + ladoB > ladoA) {
		printf("Isto é um triângulo.\n");
	
		if (ladoA == ladoB && ladoA == ladoC){
			printf("Os lados formam um triângulo equilatero.");
		}
		else if (ladoA == ladoB || ladoA == ladoC || ladoC == ladoB){
			printf("Os lado formam um triângulo isosceles.");
		}
		else{
			printf("Os lados formam um triângulo escaleno.");
		}
	} else{
		printf("Isto não é um triângulo");
	}
	
	
	
	return 0;
}
