#include <stdio.h>

int main() {
    int n, fatorial;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erro: N�o � poss�vel calcular o fatorial de um n�mero negativo\n");
    } 
    else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d e: %d\n", n, fatorial);
    }

    return 0;
}
