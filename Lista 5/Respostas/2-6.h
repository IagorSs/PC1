/* Implemente funções que recebam o vetor de 15 números como parâmetro (implementado no
exercício 1) e retornem:

2)a quantidade de números pares do vetor;
3)a soma dos números ímpares do vetor;
4)a quantidade de números com valor maior do que a média dos números do vetor;
5)o maior valor do vetor;
6)a maior diferença em valor absoluto entre elementos consecutivos do vetor; */

int par_vetor(int v[]){
	int i=0,c=0;
	while(i<tam){
		if(v[i]%2==0)
			c++;
		i++;
	}return c;
}

int soma_impar_vetor(int v[]){
	int i=0,s=0;
	while(i<tam){
		if(v[i]%2!=0)
			s+=v[i];
		i++;
	}return s;
}

int media_vetor(int v[]){
	int m,s,i;
	s=i=0;
	while(i<tam){
		s+=v[i];
		i++;
	}m=s/tam;
	return m;
}

int qtde_ma_m(int v[]){
	int m,i=0,c=0;
	m=media_vetor(v);
	while(i<tam){
		if(v[i]>m)
			c++;
		i++;
	}return c;
}

int maior_valor(int v[]){
	int ng,i=0;
	while(i<tam){
		if(i==0||v[i]>ng)
			ng=v[i];
		i++;
	}return ng;
}

int maior_diferenca(int v[]){
	int i=0,d;
	while(i<tam-1){
		if(i==0||v[i]-v[i+1]>d)
			d=v[i]-v[i+1];
		if(v[i+1]-v[i]>d)
			d=v[i+1]-v[i];
		i++;
	}return d;
}


