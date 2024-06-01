#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, conta;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &a);
	
	conta = a % 2;
	
	if(conta == 0){
		printf("O número é par");
	}
	else{
		printf("O número é impar");
	}
	
	return 0;
}
