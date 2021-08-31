#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x=0;
	float y=0;
	float z=0;
	float r=0;
	
	
	printf(" Digite a base maior do trapezio: ");
	scanf("%f", &x);
	
	printf(" Digite a base menor do trapezio: ");
	scanf("%f", &y);
	
	printf(" Digite a altura do trapezio: ");
	scanf("%f", &z);
	
	r= ((x + y) * z) / 2;
	
	printf(" area: %f m2\n", r);
	system("pause");
	
	
	return 0;
}
