/* Implemente a função “Primo” que recebe um número inteiro positivo como parâmetro e retorna 1
caso o número seja primo e 0, caso contrário. Por definição, um número é primo quando é divisível
somente por si próprio e por 1. */
int primo(int a){ // 0 para número não primo e 1 para número primo
	int d=2;
	if(a==1)
		return 0;//número não primo
	else if(a==2)
		return 1;//número primo
	else if(a<=0)		
		return 2;//número inválido
	else{
		while(a%d!=0){
				if(d>a/2)
					return 1;
				else
					d++;
		}return 0;
	}	
}
