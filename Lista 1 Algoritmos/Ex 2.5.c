#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, conta;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &a);
	
	conta = a % 2;
	
	if(conta == 0){
		printf("O n�mero � par");
	}
	else{
		printf("O n�mero � impar");
	}
	
	return 0;
}
