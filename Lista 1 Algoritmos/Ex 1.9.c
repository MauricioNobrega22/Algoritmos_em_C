#include <stdio.h>

int main(){
	float valorTotal, totalComDesconto, valorParcela, comissaovVista, comissaovParcelada;
	
	printf("Digite o valor total da venda: R$");
	scanf("%f", &valorTotal);
	
	totalComDesconto = valorTotal - (valorTotal * 0.1);
	
	valorParcela = valorTotal / 3;
	
	comissaovVista = totalComDesconto * 0.05;
	
	comissaovParcelada = valorTotal * 0.05;
	
	printf("O total a pagar com desconto de 10%%: R$ %.2f\n", totalComDesconto);
	printf("Valor de cada parcela (parcelamento de 3%% sem juros): R$ %.2f\n", valorParcela);
	printf("Comissão do vendedor (venda a vista): R$ %.2f\n", comissaovVista);
	printf("Comissão do vendedos (venda parcelada): R$ %.2f\n", comissaovParcelada);
	
	return 0;
}
