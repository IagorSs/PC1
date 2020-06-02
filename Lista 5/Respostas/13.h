/* Implemente o procedimento “void concatenar (char s1[], char s2[])” que copia o string
s2 a partir do final de s1. Exemplo: s1 = “abc”, s2= “def”, após o procedimento concatenar s1 terá
o conteúdo s1= “abcdef”. */

void concatenar(char s[],char s1[]){
	int i,i1;
	i1=i=0;
	while(s[i]!='\0'){
		i++;
	}while(s1[i1]!='\0'){
		s[i]=s1[i1];
		i++;
		i1++;
	}
}
