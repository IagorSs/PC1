#include<stdio.h>

/* Faça um programa que solicita ao usuário dois números inteiros diferentes “n1” e “n2” e chama uma
função que calcula e retorna a soma de todos os números ímpares dentro do intervalo definidor por
[n1,...,n2]. Antes de chamar a função, o programa principal deve testar se n1 é menor do que n2. */

int soma_impar_intervalo(int a,int b){
	int s=0;
	while (a<=b){	
		if(a%2!=0)
			s=s+a;
		a++;
	}return s;
}

void main(){
	int n1,n2;
	printf("Digite o menor número: ");scanf("%i",&n1);
	printf("Digite o maior número: ");scanf("%i",&n2);
	if(n1>=n2)
		printf("Intervalo inválido!\n");
	else
		printf("%i\n",soma_impar_intervalo(n1,n2));
}
