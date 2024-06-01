#include <stdio.h>
int main(){
	int vetor[10], i;
	
	printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }


    printf("\nOs numeros digitados sao:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
	
	
	return 0;
}
