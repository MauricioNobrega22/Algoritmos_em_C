#include <stdio.h>
int main(){
	int vetor[8], i;
	
	printf("Digite 8 numeros inteiros:\n");
    for(i = 0; i < 8; i++){
        scanf("%d", &vetor[i]);
	}
	
	for(i=7; i>=0; i--){
		printf("%d ", vetor[i]);
	}
	
	return 0;
}
