/* 16) Implemente um programa que grave a seguinte matriz em um arquivo binário.
Cada célula da matriz representa a distância entre duas cidades, por exemplo: distância
entre as cidades 2 e 4 → 17 Km; entre as cidades 4 e 5 → 80 Km. O programa deve apenas
grava a matriz em um arquivo binário. */

#include <stdio.h>
#include <stdlib.h>

void main(){
	int i,j,m[5][5];
	FILE *a,*b;
	a=fopen("16.txt","rb");
	b=fopen("16.bin","wb");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			fscanf(a,"%i",&m[i][j]);
			fwrite(&m[i][j],sizeof(int),1,b);
			//printf("%i ",m[i][j]); //visualização da matriz no programa
		}//printf("\n");
	}fclose(a);
	fclose(b);// a partir daqui e pra visualização do arquivo bin
	/*b=fopen("16.bin","rb");
	int aux;
	fread(&aux,sizeof(int),1,b);
	i=0;
	while(i<25){
		printf("%i ",aux);
		fread(&aux,sizeof(int),1,b);
		i++;
		if(i%5==0)
			printf("\n");
		
	}
	fclose(b);*/
}
