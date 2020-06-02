#include <stdio.h>
/* Dado o valor de E, calcular S=1 + 1/2 + 1/4 +1/6 + ... até que um termo da série seja menor do que
E. O valor de E deverá ser digitado pelo usuário. */
int main(){
	float E,S,a,b,c,d,e;
	printf("Digite um número: ");
	scanf("%f",&E);
	b=2;
	S=1;
	if(E<1){
		a=1/b;
		if(E>a)
			printf("Soma: %.2f\n",S);
		else{ 
			while(E<=a){
				S=S+a;
				b=b+2;
				a=1/b;
			}printf("Soma: %f\n",S);
		}
	}else if(E==1)
		printf("Soma: %.2f\n",S);
	else
		printf("Resultado impossível\n");	
}
