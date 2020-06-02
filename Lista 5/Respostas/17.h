/* Implemente o procedimento void imprime_sobrenome (char nome_completo[ ]) querecebe o nome completo de uma pessoa e imprime o último nome. Por exemplo, para o nome
completo “Jose Maria da Silva”, o programa deve exibir: “Silva”. */

void inverter_string(char v[],char d[]);

void imprime_sobrenome(char nome_completo[]){
	int i,i1=0;
	int qtde_e=0;
	char v[tam],vi[tam];
	for(i=0;nome_completo[i]!='\0';i++);
	for(i--;nome_completo[i]!=' ';i--){
		v[i1]=nome_completo[i];
		i1++;
	}v[i1]='\0';
	inverter_string(v,vi);
	printf("%s\n",vi);
}

void inverter_string(char v[],char d[]){
	int i,i1=0;
	for(i=0;v[i]!='\0';i++);
	for(i--;i>=0;i--){
		d[i1]=v[i];
		i1++;
	}d[i1]='\0';
}
