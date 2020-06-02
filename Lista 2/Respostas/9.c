#include<stdio.h>

int main(){
	int x,y;
	printf("Digite coordenada do eixo x: ");
	scanf("%i",&x);
	printf("Digite coordenada do eixo y: ");
	scanf("%i",&y);
	if(x==0 && y==0)
	printf("Ponto na origem\n");
	else if(y==0)
	printf("Ponto sobre o eixo x\n");
	else if(x==0)
	printf("Ponto sobre o eixo y\n");
	else if(x>0 && y>0)
	printf("Ponto no 1º quadrante\n");
	else if(y>0)
	printf("Ponto no 2º quadrante\n");
	else if(x>0)
	printf("Ponto no 4º quadrante\n");	
	else
	printf("Ponto no 3º quadrante\n");
}
