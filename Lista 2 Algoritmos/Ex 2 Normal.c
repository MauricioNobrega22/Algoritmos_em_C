#include<stdio.h>
int main(){
	int i=0, j=0, n=0, somaPrimo = 0;
	printf("N�meros primos de 2 at� n: ");
	scanf("%d", &n);
	for (i=2; i<=n; i++){
		for (j=2;j<i; j++){
			if(i%j ==0){
				break;
			}
					}
					if (i==j){
						somaPrimo = somaPrimo +i;
						printf("%d ", i);
					}
	}
	
	printf("\n\nSoma dos n primos de 2 at� %d = %d", n, somaPrimo);
	return 0;
}
