/* Faça um programa que leia as três notas e as faltas de um aluno e imprima sua situação.
( “APROVADO”, “REPROVADO POR FALTA” ou “REPROVADO POR MÉDIA” ). Observação
– A média para aprovação é 60 e o limite de faltas é 18. */
#include<stdio.h>

int main(){
	float n1,n2,n3,m;
	int f;
	printf("Digite suas 3 notas separadas por espaço somente\n");
	scanf("%f %f %f",&n1,&n2,&n3);
	printf("Digite o número de faltas: ");
	scanf("%i",&f);
	m = n1+n2+n3;
	if(f>18)
		printf("REPROVADO POR FALTA\n");
	else if(m<60)
		printf("REPROVADO POR MÉDIA\n");
	else
		printf("APROVADO\n");
}
