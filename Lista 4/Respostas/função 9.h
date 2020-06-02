/* Implemente uma função que recebe um número inteiro como parâmetro e retorna o fatorial desse
número. Se o número for menor do que zero, então a função deve retornar o valor -1. Implemente o
programa principal para testar a função. Se o valor de retorno da função for “-1”, o programa
principal deve informar que o número digitado está incorreto. */

int fatorial(int a){
	int m=1;
	if(a>0){
		while(a>=1){
			m=m*a;
			a--;
		} return m;//valor fatorado
	}else
		return -1;// valor incorreto
}

