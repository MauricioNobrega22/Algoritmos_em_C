#include <stdio.h>

int main() {
    int numA, numB, numC, menor;
    
    printf("Digite tr�s n�meros separados por espa�o: ");
    scanf("%d%d%d", &numA, &numB, &numC);
    
    // Inicializar 'menor' com o valor de numA
    menor = numA;
    
    // Usar um la�o while para comparar 'menor' com numB
    while (numB < menor) {
        menor = numB;
    }
    
    // Usar um la�o while para comparar 'menor' com numC
    while (numC < menor) {
        menor = numC;
    }
    
    printf("O menor n�mero �: %d\n", menor);
    
    return 0;
}

