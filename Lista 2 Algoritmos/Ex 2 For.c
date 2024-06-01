#include<stdio.h>
int main(){
	int a=0, n=0, soma=0;
	for(a=0;a<=100;a++){
		if(a%2==0){
			soma = a + soma;
			printf("%d ", a);
		}
		
}	
 printf("\nA soma dos numeros pares: %d ", soma);
	return 0;
}
