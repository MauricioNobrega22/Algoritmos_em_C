#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double num, raiz, negativo, quadrado;
	
	printf("Digite um n�mero: ");
	scanf("%lf", &num);
	
	if(num>0){
		quadrado = num * num;
		printf("O n�mero digitado ao quadrado �: %.2lf\n", quadrado);
		raiz = sqrt(num);
		printf("A raiz quadrada � %.2lf", raiz);
	}
	else{
		printf("O n�mero digitado � negativo");
	}
	
	return 0;
}
