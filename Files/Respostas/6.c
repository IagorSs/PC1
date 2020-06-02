/* Implemente um programa que realiza a cópia de um arquivo. Teste seu programa com um
arquivo de áudio ou uma imagem. */
// Formato int colocado na variável "c", pois imagens .jpg são gravadas nessa extensão de bytes

#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *a,*b;	
	char arq[40];
	int c;
	printf("Digite o nome do arquivo de origem\n");
	gets(arq);
	a=fopen(arq,"rb");
	if(a==NULL){
		printf("Impossível abrir arquivo\n");
		return;
	}
	printf("Agora o nome do arquivo de destino\n");
	gets(arq);
	b=fopen(arq,"wb");
	c=fgetc(a);
	while(c!=EOF){
		fputc(c,b);
		c=fgetc(a);
	}
	fclose(a);
	fclose(b);
}
