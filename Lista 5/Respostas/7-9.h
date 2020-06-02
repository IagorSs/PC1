/* Procedimentos para:
7) colocar em ordem crescente os elementos do vetor. No programa principal, exiba o vetor
antes e depois de ordená­lo.
8) exibir o 3o. maior elemento do vetor. Por exemplo: v={2,4,4,1,3,6,5,6} → 3o. Maior= 4.
9) eliminar números repetidos do vetor. Os números repetidos devem ser substituídos por
novos números. Este procedimento deverá exibir na tela todos os elementos do vetor, antes e depois
de eliminar os números repetidos. */

int identificar_repeticao(int v[]){//retorna 1 se houver nmr repetido e 0 senão
	int i,i1=0;
	while(i1<tam){
		i=0;
		while(i<tam){
			if(i1==i)
				i++;
			if(i==tam)
				break;
			if(v[i1]==v[i])
				return 1;
			i++;
		}i1++;
	}return 0;
}

int maior_n(int v[]){
	int i=0,ng;
	while(i<tam){
		if(i==0||v[i]>ng)
			ng=v[i];
		i++;
	}return ng;
}

int menor_n(int v[]){
	int i=0,ng;
	while(i<tam){
		if(i==0||v[i]<ng)
			ng=v[i];
		i++;
	}return ng;
}

int maior_n_e_subs(int v[]){
	int i=0,ng,ig;
	while(i<tam){
		if(i==0||v[i]>ng){
			ng=v[i];
			ig=i;
		}i++;
	}v[ig]=menor_n(v)-1;
	return ng;
}

int menor_n_e_subs(int v[]){
	int i=0,ng,ig;
	while(i<tam){
		if(i==0||v[i]<ng){
			ng=v[i];
			ig=i;
		}i++;
	}v[ig]=maior_n(v)+1;
	return ng;
}

void copiar(int v[],int c[]){
	int i=0;
	while(i<tam){
		c[i]=v[i];
		i++;
	}
}

void ordem_crescente(int v[]){
	int i=0,c[tam],man;
	man=maior_n(v);
	copiar(v,c);
	while(i<tam){
		v[i]=menor_n_e_subs(c);
		i++;
	}
}

void ex_8(int v[]){
	int i=0,e,c[tam];
	copiar(v,c);
	while(i<3){
		e=maior_n_e_subs(c);
		i++;
	}printf("%i\n",e);
}

void eliminar_repetidos_e_subs(int v[]){
	int i,i1;
	while(identificar_repeticao(v)==1){
		i1=0;
		while(i1<tam){
			i=0;
			while(i<tam){
				if(i1==i)
					i++;
				if(i==tam)
					break;
				if(v[i1]==v[i])
					v[i]=rand()%101;
				i++;
			}i1++;
		}
	}
}

