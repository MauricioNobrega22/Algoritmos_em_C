#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double num, raiz, negativo;
	
	printf("Digite um número real: ");
	scanf("%lf", &num);
	
	if(num>0){
		raiz = sqrt(num);
		printf("A raiz quadrada do número é %.2lf", raiz);
	}
	else{
		negativo = pow(num,2);
		printf("O número ao quadrado é %.2lf", negativo);
	}
	
	return 0;
}
