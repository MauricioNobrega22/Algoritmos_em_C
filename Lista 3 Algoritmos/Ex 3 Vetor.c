#include <stdio.h>
int main(){
	int soma = 0; 
	int i;
	float media;
	int vetor[20];
	
	for(i=0; i<20; i++){
        vetor[i] = i * i;
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
