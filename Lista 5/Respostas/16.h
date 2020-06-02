/* Implemente a função int compara (char string1 [ ], char string2 [ ]) que retorna 1 caso
as strings sejam iguais e 0 caso contrário. */

//iguais na ordem tb? só no conteudo? tamanho? WTF

int compara(char string1[],char string2[]){//1 se forem iguais, 0 senão
	int i;
	for(i=0;string1[i]!='\0'&&string2[i]!='\0';i++){
		if(string1[i]!=string2[i])
			return 0;
	}return 1;
}
