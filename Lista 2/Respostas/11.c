#include<stdio.h>

int main(){
	float a,b,d;
	char c;
	printf("Digite o primeiro número\n");
	scanf("%f",&a);
	printf("Digite o segundo número\n");
	scanf("%f",&b);
	printf("Escolha uma operação a ser realizada\n+)Soma\n-)Subtração\n*)Multiplicação\n/)Divisão\n");
	scanf(" %c",&c);
	if(c=='+'){
		d = a+b;
		printf("Resultado: %.2f\n",d);
	}else if(c=='-'){
		d = a-b;
		printf("Resultado: %.2f\n",d);
	}else if(c=='*'){
		d=a*b;
		printf("Resultado: %.2f\n",d);
	}else if(c=='/'){
		d=a/b;
		printf("Resultado: %.2f\n",d);
	}else
	printf("Operador inválido!\n");
}
