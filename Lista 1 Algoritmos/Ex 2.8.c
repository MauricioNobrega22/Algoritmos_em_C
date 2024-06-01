#include <stdio.h>
int main (){
    float n1, n2;
    printf("Digite as duas notas:\n");
    scanf("%f %f", &n1, &n2);
    
    if((n1>=0) && (n1<=10) && (n2>=0) && (n2<=10)){    
        printf("A media das notas %.2f e %.2f = %.2f", n1, n2, (n1+n2)/2);
    }
    else {
        printf("Nota invalida!");
    }
	return 0;
}
