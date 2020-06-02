/* Implemente um programa que preenche aleatoriamente dois vetores Q e R com 12 e 20
elementos inteiros (valores repetidos ou não) respectivamente. Implemente um procedimento que
recebe os vetores Q, R e um terceiro vetor W. O procedimento deverá preencher o vetor W com a
interseção de Q e R. Além disto, W não poderá conter elementos repetidos. Exiba o conteúdo do
vetor W no programa principal. Utilize a função malloc para os vetores Q e R. Utilize a função
realloc toda vez que um elemento for inserido no vetor W. Não utilize variáveis globais. */

#include <stdio.h>
#include <stdlib.h>

void exibir(int *p,int n);

void preencher(int *p,int tam){
	int i;
	for(i=0;i<tam;i++)
		p[i]=rand()%20+1;
}

void interseccao(int *q,int *r,int *w){
	int iq,ir,iw=0,aux;
	for(iq=0;iq<12;iq++){
		for(ir=0;ir<20;ir++){
			if(q[iq]==r[ir]){
				for(aux=0;aux<=iw;aux++){
					if(q[iq]==w[aux]&&iw!=0)
						aux=iw+1;
					else if(aux==iw){
						w=realloc(w,(aux+1)*sizeof(int));
						w[aux]=q[iq];
						iw++;
						aux=iw+1;
					}
				}
			}
		}
	}printf("Valor final de iw:%i\n",iw);
	exibir(w,iw);
	w=realloc(w,(iw+1)*sizeof(int));
	w[iw]=0;
	exibir(w,(iw+1));//até aqui exibe corretamente, inclusive com o 0 no final
}

void exibir(int *p,int n){
	int i;
	for(i=0;i<n;i++)
		printf("%i ",*(p+i));
	printf("\n");
}

void main(){
	int *q,*r,*w,i;
	srand(time(0));
	q=malloc(12*sizeof(int));
	r=malloc(20*sizeof(int));
	w=malloc(0*sizeof(int));
	preencher(q,12);
	preencher(r,20);
	exibir(q,12);
	exibir(r,20);
	interseccao(q,r,w);
	for(i=0;w[i]!=0;i++)//nessa exibição de vez em quando não entra no loop e de vez em quando exibe(???)
		printf("%i ",w[i]);
	printf("\n");
	free(w);
	free(q);
	free(r);
}
