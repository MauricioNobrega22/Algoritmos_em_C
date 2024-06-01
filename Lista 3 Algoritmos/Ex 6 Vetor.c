#include <stdio.h>
int main(){
	int A[10], B[10], i;
	
	for(i=0; i<10; i++){
		A[i] = i*i;
	}
	
	for(i=0; i<10; i++){
		B[i] = A[i];
	}
	
	printf("Valor do vetor B: ");
	
	for(i=0; i<10; i++){
		printf("%d ", B[i]);
	}
	
	
	
	return 0;
}
