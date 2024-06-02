#include <stdio.h>
int main(){
	float soma=0.0; 
	float media;
	float vetor[20];
	int i;
	
	for(i=0; i<20; i++){
		scanf("%f", &vetor[i]);
    }
	
	for(i=0; i<20; i++){
        soma += vetor[i];
    }
    
    for(i=0; i<20; i++){
    	media = soma / 20;
	}
	
	printf("A media dos valores do vetor eh: %.2f", media);

	
	return 0;
}
