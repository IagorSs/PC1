/* Implemente uma função que retorna o valor do seguinte somatório:
n
 (5*i+2)
i=3
O valor de “n” será passado como parâmetro para função. */

int somatorio(int n){
	int s=0,i=3;
	while (i<=n){
		s=s+(5*i+2);
		i++;
	}return s;
}

