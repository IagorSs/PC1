/* Implemente um procedimento que coloca em ordem crescente os caracteres de um string
“s” passado como parâmetro. */

void menor_valor_string_subs_inicio(char s[],int i){
	int ii,ig;
	int menor_valor;
	for(ii=i;s[i]!='\0';i++){
		if(i==ii||(int)s[i]<menor_valor){
			menor_valor=(int)s[i];
			ig=i;
		}
	}s[ig]=s[ii];
	s[ii]=(char)menor_valor;
}

void ordem_crescente(char s[]){
	int i;
	for(i=0;s[i]!='\0';i++){
		menor_valor_string_subs_inicio(s,i);
	}printf("%s\n",s);
}


