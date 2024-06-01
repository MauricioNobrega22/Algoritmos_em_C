#include<stdio.h>
int main(){
	int a=0, x = 43, y=0;
	
	for (a=0;a<50;a++){
		printf("Adivinhe o numero de 0 a 50: ");
		scanf("%d", &y);
		if (y==x){
			printf("Parabens, voce acertou!!!");
			break;
			} 
		else {
			printf("Voce errou! \n ");
			}
	}
return 0;
}
