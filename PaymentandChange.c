#include <stdio.h>
void main(){
	float a,b,sum;
	printf("Product cost : " );
	scanf("%f",&a);
	printf("Customer payment : " );
	scanf("%f",&b);
	sum = (b-a);
	printf("Customer change : %.2f ",sum);
}
