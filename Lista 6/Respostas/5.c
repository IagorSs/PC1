#include <stdio.h>
#include <stdlib.h>
#include "4.h"
#define tam 20
#include <time.h>

int idf_rep(int *v){//1 se houver repetição e 0 senão
	int i,i1;
	for(i=0;i<tam;i++)
		for(i1=0;i1<tam;i1++){
			if(i1==i)
				i1++;
			if(i1==tam)
				continue;
			else if(v[i]==v[i1])
				return 1;
		}
	return 0;
}

void rem_rep(int *v){
	int i,i1;
	while(idf_rep(v)==1)
		for(i=0;i<tam;i++)
			for(i1=0;i1<tam;i1++){
				if(i1==i)
					i1++;
				if(i1==tam)
					continue;
				else if(v[i]==v[i1])
					v[i1]=rand()%51;
			}
}

int* end_maior_num_abaixo(int *v,int num){
	int i,ng,ig;
	for(i=0;i<tam;i++)
		if(i==0||ng<v[i]&&ng<num)
			ng=v[i];
			ig=i;
	return &v[ig];
}

void main(){
	int v[tam],i,p[tam],*po;
	srand(time(0));
	for(i=0;i<tam;i++)
		v[i]=rand()%51;
	rem_rep(v);
	for(i=0;i<tam;i++)
		printf("%i ",v[i]);
	printf("\n");
	for(i=0;i<tam;i++){
		if(i==0)
			p[i]=end_maior_num_abaixo(v,51);
		else
			p[i]=end_maior_num_abaixo(v,*po);
		po=p[i];
	}for(i=0;i<tam;i++)
		printf("%p\n",p[i]);		
}
