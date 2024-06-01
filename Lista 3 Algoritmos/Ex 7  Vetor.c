#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, con = 0, n, vet[30];

    srand(time(NULL));
	
	printf("Vet:\n");	// Visualiza��o Vet
	
    for (i = 0; i < 30; i++) {
        vet[i] = rand() % 16;
        printf("[%d] ", vet[i]);
    }

    int freq[16] = {0}; // Inicializa um vetor para contar a frequ�ncia de cada n�mero de 0 a 15

    for (i = 0; i < 30; i++) {
        freq[vet[i]]++; // Incrementa a contagem para o n�mero atual do vetor
    }

    for (i = 0; i < 16; i++) {
        if (freq[i] > con) {
            con = freq[i];
            n = i;
        }
    }
	
	printf("\n\nFreq: \n");
							// Visualiza��o Freq
	for (i = 0; i < 16; i++){
		printf("[%d] ", freq[i]);
	}
	

    printf("\n\nO numero que mais apareceu foi: %d e apareceu %d vezes.\n", n, con);

    return 0;
}

