/* Implemente o procedimento void copia (char origem [ ], char destino [ ], int n) que
copia os primeiros n caracteres do vetor origem para o vetor destino. */

void copiar_string_n(char origem[],char destino[],int n){
	int i;
	for(i=0;i<n;i++){
		destino[i]=origem[i];
	}
}
