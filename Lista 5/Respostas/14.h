/* Implemente o procedimento void copia (char origem [ ], char destino [ ]) que faz uma
cópia do vetor origem no vetor destino. */

void copiar_string(char origem[],char destino[]){
	int i;
	for(i=0;origem[i]!='\0';i++){
		destino[i]=origem[i];
	}
}
