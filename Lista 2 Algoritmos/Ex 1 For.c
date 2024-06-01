#include<stdio.h>
int main(){
	int a=0, n=0;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(a=0;a<=n;a++){
		if(a%2==0){
			printf("%d ", a);
		}
}	
	return 0;
}
