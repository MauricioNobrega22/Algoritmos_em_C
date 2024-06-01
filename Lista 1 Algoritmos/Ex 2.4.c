#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double num, raiz, negativo, quadrado;
	
	printf("Digite um número: ");
	scanf("%lf", &num);
	
	if(num>0){
		quadrado = num * num;
		printf("O número digitado ao quadrado é: %.2lf\n", quadrado);
		raiz = sqrt(num);
		printf("A raiz quadrada é %.2lf", raiz);
	}
	else{
		printf("O número digitado é negativo");
	}
	
	return 0;
}
