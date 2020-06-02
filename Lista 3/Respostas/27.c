#include<stdio.h>
/* Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os
seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio número. Por
exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6. Sua tarefa é escrever um programa
que imprima se um determinado número é perfeito ou não.
Exemplos:
6 → perfeito
5 → nao é perfeito
28 → é perfeito */
void main(){
	int a,d=1,s=0;
	printf("Escreva um número\n");scanf("%i",&a);
	while(d!=(a-1)){
		if(a%d==0)
			s=s+d;
		d++;
	}if(s==a)
		printf("Número perfeito!\n");
	else
		printf("Número não é perfeito!\n");
}
