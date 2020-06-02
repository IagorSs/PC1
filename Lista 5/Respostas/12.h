/* Implemente uma função que conta e retorna a quantidade de caracteres existente em um
string passado como parâmetro. */

int qtde_elementos(char s[]){
	int c,i;
	c=i=0;
	while(s[i]!='\0'){
		c++;
		i++;
	}return c;
}
