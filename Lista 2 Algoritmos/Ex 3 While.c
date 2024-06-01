#include <stdio.h>
int main(){
	int num = 1;
	int sum = 0;
	
	
	while(num <= 100){
		if(num % 2 == 0);
			sum += num;
		num++;
	}
	
	printf("A soma dos numeros pares de 1 ate 100 eh: %d\n", sum);
	
	
	return 0;
}
