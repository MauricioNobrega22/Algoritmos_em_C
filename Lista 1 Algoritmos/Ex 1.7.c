#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, ante, suce;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	
	ante = num - 1;
	suce = num + 1;
	
	printf("O antecessor de %d �: %d\n", num, ante);
    printf("O sucessor de %d �: %d\n", num, suce);
	
	return 0;
}
