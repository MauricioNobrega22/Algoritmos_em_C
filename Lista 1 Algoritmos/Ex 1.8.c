#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salB, grat;
	
	printf("Digite o sal�rio-base: ");
	scanf("%f", &salB);
	
	grat = salB * 1.05;
	
	printf("O sal�rio a receber �: %f", grat);
	
	return 0;
}
