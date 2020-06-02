/* Implemente uma função que recebe 2 números inteiros como parâmetro e retorna e a multiplicação
desses números. A multiplicação não deve ser feita utilizando o operador “*”, em vez disso utilize
apenas o operador de adição “+”. Implemente o programa principal para testar sua função. */

int multiplicacao(int a,int b){
	int c=1,s=0;
	if(a==1||b==1)
		return 1;
	else{ 
		while(c<=b){
			s=s+a;
			c++;
		}return s;
	}
}
