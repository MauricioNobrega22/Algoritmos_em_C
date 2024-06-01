#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n1,n2;
	
	printf("Digite o primeiro valor:");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor:");
	scanf("%d", &n2);
	
if (n1 > n2) {
	printf("O primeiro numero eh maior");
} 
else if (n2 > n1) {
	printf("O segundo numero eh maior");
}

else  {
	printf("Numeros iguais!");
}
	
	return 0;
}
	

