/* 
funções para:
21) a quantidade de números pares da matriz;
22) a soma dos números ímpares da matriz;
23) a quantidade de números com valor maior do que a média dos números da matriz;
24) o maior valor da matriz;
25) o segundo maior valor da matriz;
procedimento:
27) eliminar os números repetidos da matriz. Os números repetidos devem ser substituídos por
novos números. Este procedimento deverá exibir na tela todos os elementos da matriz antes e
depois de eliminar os números repetidos. */

int qtde_pares(int m[][co]){
	int i,j,c=0;
	for(i=0;i<li;i++)
		for(j=0;j<co;j++)
			if(m[i][j]%2==0)
				c++;
	return c;
}

int soma_impar(int m[][co]){
	int i,j,s=0;
	for(i=0;i<li;i++)
		for(j=0;j<co;j++)
			if(m[i][j]%2!=0)
				s+=m[i][j];
	return s;
}

int media(int m[][co]){
	int i,j,me,s=0;
	for(i=0;i<li;i++)
		for(j=0;j<co;j++)
			s+=m[i][j];
	me=s/(li*co);
	return me;
}

int f23(int m[][co]){
	int i,j,c=0,me;
	me=media(m);
	for(i=0;i<li;i++)
		for(j=0;j<co;j++)
			if(m[i][j]>me)
				c++;
	return c;
}

int ma_v(int m[][co]){
	int i,j,ng;
	for(i=0;i<li;i++)
		for(j=0;j<co;j++)
			if(i==0&&j==0||m[i][j]>ng)
				ng=m[i][j];
	return ng;
}

int me_v(int m[][co]){
	int i,j,ng;
	for(i=0;i<li;i++)
		for(j=0;j<co;j++)
			if(i==0&&j==0||m[i][j]<ng)
				ng=m[i][j];
	return ng;
} 

void ma_v_e_subs(int m[][co]){
	int i,j,ng,ig,jg;
	for(i=0;i<li;i++)
		for(j=0;j<co;j++)
			if(i==0&&j==0||m[i][j]>ng){
				ng=m[i][j];
				ig=i;
				jg=j;
			}
	m[ig][jg]=me_v(m)-1;
}

int segundo_ma_v(int m[][co]){
	int i,j,ng;
	ma_v_e_subs(m);
	for(i=0;i<li;i++)
		for(j=0;j<co;j++)
			if(i==0&&j==0||m[i][j]>ng)
				ng=m[i][j];
	return ng;
}

int repeticao(int m[][co]){//1 se houver repetição e 0 senão
	int i,j,r,a,i1,j1;
	for(i=0;i<li;i++)
		for(j=0;j<co;j++){
			a=m[i][j];
			for(i1=0;i1<li;i1++)
				for(j1=0;j1<co;j1++){
					if(i1==i&&j1==j)
						j1++;
					if(j1==co)
						continue;
					else if(m[i1][j1]==a)
						return 1;
				}
		}
	return 0;
			
}

void eliminar_repetidos(int m[][co]){
	int i,j,a,i1,j1;
	while(repeticao(m)!=0)
		for(i=0;i<li;i++)
			for(j=0;j<co;j++){
				a=m[i][j];
				for(i1=0;i1<li;i1++)
					for(j1=0;j1<co;j1++){
						if(i1==i&&j1==j)
							j1++;
						if(j1==co)
							continue;
						else if(m[i1][j1]==a)
							m[i1][j1]=rand()%100;
					}
			}
}
