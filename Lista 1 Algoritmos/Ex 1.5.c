#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double A, B, C, D, media;
	
	printf("Digite as quatro notas: \n");
	scanf("%lf%lf%lf%lf", &A,&B,&C,&D);
	
	media = (A + B + C + D)/4;
	
	printf("O resultado da m�dia aritm�tica desses n�meros �: %lf", media);
	
	return 0;
}
