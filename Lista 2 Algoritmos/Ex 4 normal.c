#include<stdio.h>
int main(){
	int i=1, n, soma;
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	while (i<n){
		soma = 5*i*i+2*i+8;
		i++;
		printf("%d ", soma);
	}
	
	
	
	
	return 0;
}
