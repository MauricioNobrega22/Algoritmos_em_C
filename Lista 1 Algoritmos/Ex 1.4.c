#include <stdio.h>
#include <math.h>

int main(){
	float a, elev;
	
	printf("Digite um número real: ");
	scanf("%f", &a);
	
	elev = pow(a,2);
	
	printf("O resultado deste número ao quadrado é: %f", elev);
	
	return 0;
}
