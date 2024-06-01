#include <stdio.h>
int main(){
	int vetor[10], i, par=0;
	
	for(i=0; i<10; i++){
		vetor[i] = i*i;
	}
	
	for(i=0; i<10; i++){
		if(vetor[i] % 2 == 0){
			par++;
		} 
	}
	
	printf("Numeros pares no vetor: %d", par);
	
	return 0;
}
