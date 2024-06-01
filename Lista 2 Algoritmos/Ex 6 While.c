#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	int a = 0;
	int numero, maior;
	
	printf("Quantidade de numeros da lista: ");
	scanf("%d", &n);
	
	printf("Digite o %dº número: ", a + 1);
    scanf("%d", &maior);
    
    while (a < n - 1) {
        a++;
        printf("Digite o %dº número: ", a + 1);
        scanf("%d", &numero);
        
    if (numero > maior) {
            maior = numero;
        }
    }
	
	printf("O maior número inserido é: %d\n", maior);	
	
	return 0;
}
