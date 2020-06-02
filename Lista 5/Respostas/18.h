/* Implemente o void eliminar(char v [ ], char ch) que elimina todas as ocorrências do
caractere“ch” no vetor de caracteres “v”. Ao eliminar um caractere, os outros elementos do vetor
devem ser movidos para esquerda. Por exemplo: v = “programacao de computadores” e ch = 'a'. Ao
final do procedimento o conteúdo de “v” deverá ser “progrmco de computadores”. Você não pode
utilizar um vetor auxiliar para implementar o procedimento. */

void empurrar_esquerda(char v[],int i){
	while(v[i]!='\0'){
		v[i]=v[i+1];
		i++;
	}
}

void eliminar(char v[],char ch){
	int i;
	for(i=0;v[i]!='\0';i++){
		if(v[i]==ch){
			empurrar_esquerda(v,i);
			i--;
		}
	}
}
