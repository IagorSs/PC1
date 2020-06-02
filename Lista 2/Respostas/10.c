#include<stdio.h>

int main(){
	int ano;
	printf("Digite um ano\n");
	scanf("%i",&ano);
	if(ano%400==0||ano%4==0&&ano%100!=0)
	printf("Ano bissexto\n");
	else
	printf("Ano não-bissexto\n");
}
