#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double num, raiz;
	
	printf("Digite um n�mero: ");
	scanf("%lf", &num);
	
	if(num>0){
		raiz = sqrt(num);
		printf("A raiz quadrada do n�mero � %.2lf", raiz);
	}
	else{
		printf("O n�mero %.2lf � inv�lido", num);
	}
	
	return 0;
}
