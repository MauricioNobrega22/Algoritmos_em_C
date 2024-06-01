#include <stdio.h>
int main(){
	int tamanho = 15, i, maior=0, menor=0;
	int vetor[tamanho];
	
	printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
        if(i==0)
        	menor=maior=vetor[i];
        
        if(vetor[i]>maior)
        	maior = vetor[i];
        
        if(vetor[i]<menor)
        	menor = vetor[i];
    }


    printf("\nOs numeros digitados sao:\n");
    for(i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
	
	printf("\nO maior = %d - Menor = %d", maior, menor);
	
	return 0;
}
