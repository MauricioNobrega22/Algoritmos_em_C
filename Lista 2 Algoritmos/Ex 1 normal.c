#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float ladoA, ladoB, ladoC;
	
	printf("Digite o valor do primeiro lado do tri�ngulo: ");
	scanf("%f", &ladoA);
	
	printf("Digite o valor do segundo lado do tri�ngulo: ");
	scanf("%f", &ladoB);
	
	printf("Digite o valor do terceiro lado do tri�ngulo: ");
	scanf("%f", &ladoC);
	
	if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoC + ladoB > ladoA) {
		printf("Isto � um tri�ngulo.\n");
	
		if (ladoA == ladoB && ladoA == ladoC){
			printf("Os lados formam um tri�ngulo equilatero.");
		}
		else if (ladoA == ladoB || ladoA == ladoC || ladoC == ladoB){
			printf("Os lado formam um tri�ngulo isosceles.");
		}
		else{
			printf("Os lados formam um tri�ngulo escaleno.");
		}
	} else{
		printf("Isto n�o � um tri�ngulo");
	}
	
	
	
	return 0;
}
