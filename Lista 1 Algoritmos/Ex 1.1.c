#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	printf("Digite um número inteiro: ");
	scanf("%d", &a);
	printf("Número inteiro: %d", a);
	
	
	
	return 0;
}
