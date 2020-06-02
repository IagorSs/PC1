/* 10) Escreva um programa para ler o conteúdo de um arquivo contendo as notas obtidas pelos
alunos de uma turma. O programa deve exibir na tela o valor da nota mínima, valor da nota
máxima e o total de alunos aprovados e reprovados (considere que o aluno é aprovado se a
nota for maior ou igual a 60.0). O formato do arquivo pode ser texto ou binário e seu
conteúdo é o seguinte:
75
84
91
40
57
43 */

#include <stdio.h>
#include <stdlib.h>

int maior(int v[]){
	int i,ng;
	for(i=0;i<6;i++)
		if(i==0||ng<v[i])
			ng=v[i];
	return ng;
}

int menor(int v[]){
	int i,ng;
	for(i=0;i<6;i++)
		if(i==0||ng>v[i])
			ng=v[i];
	return ng;
}

void main(){
	FILE *a;
	int v[6],i,cont=0;
	a=fopen("entrada.txt","rb");
	for(i=0;i<6;i++)
		fscanf(a,"%i",&v[i]);
	for(i=0;i<6;i++)
		if(v[i]>=60)
			cont++;
	printf("Maior nota: %i\n",maior(v));
	printf("Menor nota: %i\n",menor(v));
	printf("Aprovados: %i\n",cont);
	fclose(a);
}
