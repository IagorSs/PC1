#include<stdio.h>
/* Altere o programa anterior de tal maneira que quando o usuário digitar um intervalo inválido
(n1>n2), o programa irá solicitar novos valores para n1 e n2 */
int main(){
	int a,b,c,d;
	printf("Primeiro número: ");
	scanf("%i",&a);
	printf("Segundo número: ");
	scanf("%i",&b);
	while(a>b){
		printf("Intervalo inválido, digite novamente\n");
		printf("Primeiro número: ");
		scanf("%i",&a);
		printf("Segundo número: ");
		scanf("%i",&b);
	}
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
		else if (a==b)
			printf("Soma dos números inteiro ímpares dentro do intervalo 0\n");
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
