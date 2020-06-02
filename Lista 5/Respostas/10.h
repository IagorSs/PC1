/* Implelmente a função float max(float v [ ], int n) que retorna o maior número entre os n
primeiros elementos de um vetor. */

float max(float v[],int n){
	int i=0,ng;
	while(i<n){
		if(i==0||v[i]>ng)
			ng=v[i];
		i++;
	}return ng;
}
