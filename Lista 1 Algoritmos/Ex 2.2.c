#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double num, raiz;
	
	printf("Digite um número: ");
	scanf("%lf", &num);
	
	if(num>0){
		raiz = sqrt(num);
		printf("A raiz quadrada do número é %.2lf", raiz);
	}
	else{
		printf("O número %.2lf é inválido", num);
	}
	
	return 0;
}
