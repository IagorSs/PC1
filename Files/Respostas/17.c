/* 17) Implemente um programa que carregue para a memória a matriz distâncias gravada no
arquivo (implementada no exercício anterior). Implemente uma função que recebe como
parâmetro um vetor de número inteiros contendo as cidades nas quais um viajante passou e
um número inteiro indicando a quantidade de cidades. A função deve calcular e retornar a
distância total percorrida. Por exemplo, se um viajante passou pelas cidades: 1 → 2 → 3 → 2
→ 5 → 1 → 4, a distância total percorrida foi de 80 Km (15 + 10 + 10 + 28 + 12 + 5) . */

#include <stdio.h>
#include <stdlib.h>

int distancia(int *v,int qtde){
	FILE *r;
	r=fopen("16.bin","rb");
	int i,j,l[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			fread(&l[i][j],sizeof(int),1,r);
			//printf("%i ",l[i][j]);//visualização da matriz da função
		}//printf("\n");
	}fclose(r);
	
}

void main(){
	int i,j,m[5][5];
	FILE *a,*b;
	a=fopen("16.txt","rb");
	b=fopen("16.bin","wb");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			fscanf(a,"%i",&m[i][j]);
			fwrite(&m[i][j],sizeof(int),1,b);
			//printf("%i ",m[i][j]); //visualização da matriz no programa
		}//printf("\n");
	}fclose(a);
	fclose(b);
	
	printf("Distância percorrida: %i\n",distancia(v,qtde);
}

	// a partir daqui é pra visualização do arquivo bin
	/*b=fopen("16.bin","rb");
	int aux;
	fread(&aux,sizeof(int),1,b);
	i=0;
	while(i<25){
		printf("%i ",aux);
		fread(&aux,sizeof(int),1,b);
		i++;
		if(i%5==0)
			printf("\n");
		
	}
	fclose(b);*/
