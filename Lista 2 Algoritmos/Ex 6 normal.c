#include <stdio.h>

int main() {
    int numA, numB, numC, maior;
    
    scanf("%d%d%d", &numA, &numB, &numC);
    
    maior = numA;
    
    while (numB > maior) {
        maior = numB;
    }
    
    while (numC > maior) {
        maior = numC;
    }
    
    printf("O maior número é: %d\n", maior);
    
    return 0;
}

