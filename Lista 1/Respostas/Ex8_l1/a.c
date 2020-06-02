#include<stdio.h>

int main(){
	float A, B, C, D;
	scanf("%f", &A);
	scanf("%f", &B);
	printf("A=%f B=%f\n", A, B);
	C=A;
	D=B;
	A=D;
	B=C;
	printf("A=%f B=%f\n", A, B);
}
