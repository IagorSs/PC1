/* “void calc(int * v, int num, int * xmin, int * xmax)” que coloca nas posições de memórias
apontadas por “xmin” e “xmax” o menor e o maior valor (respectivamente) existentes nos “num”
primeiros inteiros do vetor “v”. */

int maior_num(int* v,int num){
	int ng;
	for(int i=0;i<num;i++)
		if(v[i]>ng||i==0)
			ng=v[i];
	return ng;
}

int menor_num(int* v,int num){
	int ng;
	for(int i=0;i<num;i++)
		if(v[i]<ng||i==0)
			ng=v[i];
	return ng;
}

void calc(int* v,int num,int* xmin,int* xmax){
	*xmin=menor_num(v,num);
	*xmax=maior_num(v,num);
}

// main para referencia
/* void main(){
	int v[tam],num,i,a,b;
	int *xmin,*xmax;
	srand(time(0));
	for(i=0;i<tam;i++)
		v[i]=rand()%21;
	a=rand()%20;
	b=rand()%20;
	while(a==b)
		b=rand()%20;
	xmin=&v[a];
	xmax=&v[b];
	printf("Posições min/max: %i / %i\n",a,b);	
	printf("qts nmrs? ");scanf("%i",&num);
	for(i=0;i<tam;i++)
		printf("%i ",v[i]);
	printf("\n");
	calc(v,num,xmin,xmax);
	for(i=0;i<tam;i++)
		printf("%i ",v[i]);
	printf("\n");
} */
