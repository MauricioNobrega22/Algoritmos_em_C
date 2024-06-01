#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float real, dolar, conta;
	
	printf("Digite um valor em real: R$");
	scanf("%f", &real);
	printf("Digite a cotação do dólar hoje: USD");
	scanf("%f", &dolar);
	
	conta = real / dolar;
	
	printf("O valor em dolares é de: %f", conta);
	
	return 0;
}
