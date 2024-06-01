#include <stdio.h>

int main() {
    int a, soma = 0, digito;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    
    if (a < 0) {
        a = -a;
    }

    while (a > 0) {
  
        digito = a % 10;
    
        soma += digito;
    
        a /= 10;
    }

    printf("A soma dos digitos e: %d\n", soma);

    return 0;
}
