#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double num, raiz, negativo;
	
	printf("Digite um n�mero real: ");
	scanf("%lf", &num);
	
	if(num>0){
		raiz = sqrt(num);
		printf("A raiz quadrada do n�mero � %.2lf", raiz);
	}
	else{
		negativo = pow(num,2);
		printf("O n�mero ao quadrado � %.2lf", negativo);
	}
	
	return 0;
}
