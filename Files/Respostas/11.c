/* 11) Uma empresa permite que seus funcionários façam chamadas internacionais a partir de seus
ramais, mas mantém um registro dessas ligações no arquivo “ci.txt”. Cada linha do arquivo
contém a matrícula de um funcionário (inteiro), o número de chamadas internacionais
realizadas e a duração em minutos de cada uma das ligações. Exemplo:Escreva um programa em C que leia o arquivo “ci.txt” e gere o arquivo “totais.txt”. O
arquivo “totais.txt” deverá conter, para cada funcionário que efetuou chamadas
internacionais, uma linha com seu número de matrícula e a duração total de suas chamadas.
A última linha do arquivo deve conter a duração total das chamadas internacionais.
Exemplo: */

#include <stdio.h>
#include <stdlib.h>

typedef struct FUNCIONARIO{
	int matric;
	int chamadas;
	float *minutos;
}func;

void main(){
	func f[4];
	FILE *A,*B;
	int i,aux;
	float total[4], full=0;
	A=fopen("ci.bin","rb");
	B=fopen("totais.bin","wb");
	for(i=0;i<4;i++){
		fscanf(A,"%i",&f[i].matric);
		fscanf(A,"%i",&f[i].chamadas);
		f[i].minutos=malloc(f[i].chamadas*sizeof(float));
		for(aux=0;aux<f[i].chamadas;aux++)
			fscanf(A,"%f",&f[i].minutos[aux]);
	}for(i=0;i<4;i++)
		if(f[i].chamadas>0){
			fprintf(B,"%i ",f[i].matric);
			for(aux=0,total[i]=0;aux<f[i].chamadas;aux++)
				total[i]=total[i]+f[i].minutos[aux];
			fprintf(B,"%.1f\n",total[i]);
		}
	for(i=0;i<4;i++)
		full=full+total[i];
	fprintf(B,"%.1f",full);
	for(i=0;i<4;i++)
		for(aux=9;aux<f[i].chamadas;aux++)
			free(f[i].minutos);
	fclose(A);
	fclose(B);
}
