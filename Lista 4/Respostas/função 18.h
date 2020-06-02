/* Implemente uma função que recebe um número “n” como parâmetro e retorna o menor
número inteiro positivo múltiplo de “n” que contém apenas dígitos menores ou iguais a 2.
Exemplos de retorno da função
f(n): f(2)=2, f(3)=12, f(7)=21, f(42)=210,
f(89)=1121222. Implemente o programa principal para testar sua função. */

int checagem_digitos_1_2(int a){//0 se tiver só nmr menor q 3
	int b;//numero guardado
	do{
		b=a%10;
		if(b>=3)
			return 1;
		else
			a=a/10;
	}while(a!=0);
	return 0;
}

int menor_inteiro(int a){
	int m=1,c;
	do{
		c=a*m;
		m++;
	}while(checagem_digitos_1_2(c)!=0);
	return c;
}
