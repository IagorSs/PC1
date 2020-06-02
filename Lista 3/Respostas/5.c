#include<stdio.h>
/* Faça um programa que solicite ao usuário dois números inteiros diferentes “n1” e “n2” e calcule a soma de todos os números ímpares dentro do intervalo definidor por [n1,...,n2]. Considere que n1 é sempre menor do que n2. */
int main(){
	int a,b,c,d;
	printf("Primeiro número: ");
	scanf("%i",&a);
	printf("Segundo número: ");
	scanf("%i",&b);
	if(a%2==0){
		if(b%2!=0){
			a=a+1;
			c=a;
			while(a<b){
				a=a+2;
				c=c+a;
			}
			printf("Soma dos números inteiro ímpares dentro do intervalo %i\n",c);
		}
		else{
			a=a+1;
			d=b-1;
			c=a;
			if(a==d)
				printf("Soma dos números inteiro ímpares dentro do intervalo %i\n",a);
			else{	
				while(a<d){
					a=a+2;
					c=c+a;
				}
				printf("Soma dos números inteiro ímpares dentro do intervalo %i\n",c);
			}
		}
	}else{
		if(b%2!=0){
			c=a;
			while(a<b){
				a=a+2;
				c=c+a;
			}
			printf("Soma dos números inteiro ímpares dentro do intervalo %i\n",c);
		}else{
			c=a;
			d=b-1;
			if(a==d)
				printf("Soma dos números inteiro ímpares dentro do intervalo %i\n",a);
			else{	
				while(a<d){
					a=a+2;
					c=c+a;
				}
				printf("Soma dos números inteiro ímpares dentro do intervalo %i\n",c);
			}
		}
	}

}
