#include <stdio.h>
#include <math.h>

int main(){
	float a, elev;
	
	printf("Digite um n�mero real: ");
	scanf("%f", &a);
	
	elev = pow(a,2);
	
	printf("O resultado deste n�mero ao quadrado �: %f", elev);
	
	return 0;
}
