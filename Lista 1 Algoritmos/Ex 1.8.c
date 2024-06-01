#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salB, grat;
	
	printf("Digite o salário-base: ");
	scanf("%f", &salB);
	
	grat = salB * 1.05;
	
	printf("O salário a receber é: %f", grat);
	
	return 0;
}
