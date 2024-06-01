#include<stdio.h>
int main(){
	int a = 1, b = 0, soma = 0, media = 0;
	printf("Digite 10 numeros para sabermos a media:\n");
	
	for (a=1;a<=10;a++){
		printf("Digite o %d valor: ", a);
		scanf("%d", &b);
		soma = soma + b;	
	}
	media = soma / 10;
	printf("A media desses valores eh %d", media);
	
	return 0;
}
