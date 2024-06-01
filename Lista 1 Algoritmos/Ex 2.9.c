#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
int main() {
	float Salario, Prestacao;
	
	printf("Digite o seu salario:");
	scanf("%f", &Salario);
	
	printf("Digite o valor da prestacao desejada:");
	scanf("%f", &Prestacao);
	
	if ( Prestacao > Salario * 0.20){
		printf("Emprestimo nao concedido");
	}
	else{
		printf("Emprestimo Feito");
	}
	
    return 0;
}
