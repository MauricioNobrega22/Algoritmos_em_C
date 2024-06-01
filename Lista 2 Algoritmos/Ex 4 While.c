#include <stdio.h>

int main(){
	int num;
	int adivinha = 42;
	
	printf("Tente adivinhar um numero de 1 a 100\n");
	
	do{
		printf("\nAdivinhe o numero:\n");
		scanf("%d", &num);
		
		if(num < adivinha){
			printf("\nTente um numero maior\n");
		}
		else if(num > adivinha){
			printf("\nTente um numero menor\n");
		}
		else{
			printf("\nParabens voce conseguiu adivinhar o numero! %d\n", num);
		}
	}
	while(adivinha != num);
	
	return 0;
}
