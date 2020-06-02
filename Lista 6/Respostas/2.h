/* “char * strchar (char *s, char ch)” que retorna o endereço da última ocorrência de “ch” em “s”;
caso não exista, retorna NULL (NULL é uma constante simbólica que indica que o ponteiro não
aponta para nenhuma variável). Implemente a função principal (“main”) para testar a função
strchar. */

char* strchar(char* s,char ch){
	int i;
	printf("%p\n",s);
	for(i=0;s[i]!='\0';i++);
	for(i--;i>=0;i--)
		if(s[i]==ch)
			return &s[i];
	return NULL;
}
