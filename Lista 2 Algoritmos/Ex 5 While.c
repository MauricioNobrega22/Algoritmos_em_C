#include <stdio.h>

int main(){
	int contador = 0;
	float media, num, sum = 0;
	
	printf("Digite 5 notas para que seja possivel encontrar a media delas: \n");
	
	while(contador < 5){
		printf("Numero %d: ", contador + 1);
        scanf("%f", &num);
        sum += num;
        contador++;
    }
    
    media = sum / 5;
    printf("A media dos numeros fornecidos eh: %.2f", media);
	
	return 0;
}
