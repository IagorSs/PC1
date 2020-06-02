#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Os números naturais menores do que 10 e múltiplos de 3 ou 5 são: 3, 5, 6 e 9. A soma destes
múltiplos é 23. Faça um programa que encontre a soma de todos os múltiplos de 3 ou 5 menores do
que 1000.
Resposta: 233168 */

int main(){
	int a,b,c,d,s;
	for(a=1,s=0;a<1000;a=a+1){
		if(a%3==0||a%5==0)
			s=s+a;
	}
	printf("Soma de todos os múltiplos de 3 ou 5 menores do que 1000: %i\n",s);
}
