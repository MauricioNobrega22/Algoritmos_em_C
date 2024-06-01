#include <stdio.h>
int main (){
	int n1, n2;
	printf("Digite dois numeros para mostrarmos o maior e a diferenca entre eles:\n");
	scanf("%d %d", &n1, &n2);
	if (n1>n2){
		printf("O numero maior eh o %d e a diferenca entre eles e %d", n1, n1-n2);
	}
	else if (n1==n2){
		printf("Os dois numeros sao iguais");
	}
	else {
		printf("O numero maior eh o %d e a diferenca entre eles e %d", n2, n2-n1);
	}	
	return 0;
}
