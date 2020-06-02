#include<stdio.h>
/* O número 2520 é divisível (resto zero) por todos números inteiros de 1 a 10. Faça um programa, em
linguagem C, que encontre o menor número inteiro positivo divisível por todos os inteiros de 1 a 20.
Resposta: 232792560 */
int main(){
	unsigned int a=1,b=1,c=0;
	while(c==0){
		b=1;
		while(b<=20&&a%b==0){
			if(b==20&&a%19==0){
				c=1;
				b=b+1;
			}else
				b=b+1;
		}a=a+1;
	}
	a=a-1;
	printf("Menor número inteiro positivo divisível por todos os inteiros de 1 a 20\n%i\n",a);
}
