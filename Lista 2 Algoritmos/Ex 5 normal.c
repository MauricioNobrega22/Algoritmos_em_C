#include <stdio.h>

int main() {
    int numA, numB, numC, menor;
    
    printf("Digite três números separados por espaço: ");
    scanf("%d%d%d", &numA, &numB, &numC);
    
    // Inicializar 'menor' com o valor de numA
    menor = numA;
    
    // Usar um laço while para comparar 'menor' com numB
    while (numB < menor) {
        menor = numB;
    }
    
    // Usar um laço while para comparar 'menor' com numC
    while (numC < menor) {
        menor = numC;
    }
    
    printf("O menor número é: %d\n", menor);
    
    return 0;
}

