#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Digite dois n�meros: ");
	scanf("%d %d", &a, &b);
	
	if(a>b){
		printf("O maior n�mero � %d",a);
	}
	else if(b>a){
		printf("O maior n�mero � %d",b);
	}
	else
		printf("Os n�meros s�o iguais");
	
	return 0;
}
