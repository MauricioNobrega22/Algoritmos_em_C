#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Digite dois números: ");
	scanf("%d %d", &a, &b);
	
	if(a>b){
		printf("O maior número é %d",a);
	}
	else if(b>a){
		printf("O maior número é %d",b);
	}
	else
		printf("Os números são iguais");
	
	return 0;
}
