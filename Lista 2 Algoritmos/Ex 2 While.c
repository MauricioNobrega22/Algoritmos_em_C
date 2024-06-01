#include <stdio.h>
int main(){
	int a, parametro;
	
	parametro = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	while(parametro <= a){
		printf("%d ", parametro);
		parametro++;
	}
	
	
	
	return 0;
}
