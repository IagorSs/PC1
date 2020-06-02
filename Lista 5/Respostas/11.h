/* Implemente a função int compara (int vetor1 [ ], int vetor2 [ ]) que retorna 1 caso os
vetores sejam iguais e 0 caso contrário. A quantidade de elementos em cada vetor pode ser
diferente. Se julgar necessário, passe outros parâmetros para a função. */

?????????????????????????

/*int compara(int v1[],int qtde1,int v2[],int qtde2){//1 caso vetor seja igual e 0 senão
	int i=0,i2=0,c=0;
	if(qtde1>=qtde2){
		while(i<qtde1){
			i2=0;
			while(i2<qtde2){
				if(v1[i]==v2[i2])
					c++;
					break;
				i2++;
			}i++;
		}if(c==qtde2-1)
			return 1;
		else
			return 0;
	}else{
		while(i2<qtde2){
			i=0;
			while(i<qtde2){
				if(v1[i]==v2[i2])
					c++;
					break;
				i++;
			}i2++;
		}if(c==qtde1-1)
			return 1;
		else
			return 0;
	}
}
