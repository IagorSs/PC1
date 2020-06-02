/* Implemente uma função que calcula e retorna a potência de um número. A função deve receber como
parâmetro o número (base) e o expoente. Faça o cálculo da potência utilizando o operador de
multiplicação (*). */

int potencia(int b,int e){
	int m=1,c=1;
	while(c<=e){
		m=m*b;
		c++;
	}return m;
}

