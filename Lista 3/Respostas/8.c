#include<stdio.h>
/*
7) Faça um programa que leia um número inteiro positivo e determine se este é primo ou não. Por
definição, um número é primo quando é divisível somente por si próprio e por 1.
8) Otimize o programa anterior com base nas seguintes considerações:
• Números pares (com exceção do 2) não podem ser primos, visto que são divisíveis por 2. Se um
número não for divisível por 2, não será divisível por nenhum outro número par. Portanto, com
excecão do número 2, somente é necessário testar números ímpares.
• É mais fácil que um número seja divisível por um número pequeno do que por um número maior.
Portanto, se iniciarmos a procura do divisor de baixo para cima, ao invés de cima para baixo teremos
chance de encontrar o número muito antes.
• Nenhum número pode ser divisível por outro número maior que a metade dele. Portanto, não
precisamos testar a divisibilidade dos números na faixa entre a metade e o próprio número.
*/
int main(){
	int a,b;
	char c;
	c='s';
	while(c=='s'){
		printf("Digite um número: ");
		scanf("%i",&a);
		b=1;
		if(a%2!=0||a==2){
			while(b<=(a/2)||a==1){
				b=b+1;
				if(a%b==0&&a!=2){
					printf("O Número não é primo\n");
					b=a;
				}else if(b>=a/2||a==1){
					printf("O número é primo\n");
					a=a+1;
					b=a;
				}
			}
		}else if(a>0&&a%2==0)
			printf("O número não é primo\n");
		else //a<0
			printf("Número inválido!\n");
		printf("Deseja executar novamente?(s)sim\n");
		scanf(" %c",&c);
	}
}
