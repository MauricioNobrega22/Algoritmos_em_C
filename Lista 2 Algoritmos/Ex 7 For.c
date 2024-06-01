#include<stdio.h>
int main(){
	int a=1, i=0, soma = 0;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("A soma de 1 ate %d eh: \n", a);
	for(i=1;i<=a;i++){
		soma = soma + i;
		printf("%d ", soma);
		
		
	}
	return 0;
}
