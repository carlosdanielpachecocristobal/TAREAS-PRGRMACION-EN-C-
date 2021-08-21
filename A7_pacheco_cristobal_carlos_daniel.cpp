#include <stdio.h>
#include <math.h>

int main(void){
	
	float a, b, div, pot;
	
	printf("Dame el valor del primer numero: \n");
	scanf("%f", &a);
	printf("Dame el valor del segundo numero: \n");
	scanf("%f", &b);
	div=a/b;
	printf("La division de ambos numeros es: %f\n", div);
	pot=pow(a,b);
	printf("Los numero elevados resultan en: %f", pot);
	return 0;
}
