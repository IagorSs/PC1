#include <stdio.h>
/* Implemente um programa solicita ao usuário a hora de inicio e a hora de término de um
jogo, ambas subdivididas em 2 valores distintos: horas e minutos. O programa deve calcular
e exibir a duração do jogo em minutos. Considere que o tempo máximo de duração de um
jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
Teste seu programa com os seguintes valores:
Início Fim
00:00 23:59
23:50 00:50
10:50 10:51
10:40 10:39 */

void main(){
	int hi,ht,mi,mt,md;
	char c;
	md=0;
	printf("Digite as horas e minutos de início do jogo ");
	scanf("%i%c%i",&hi,&c,&mi);
	printf("Digite as horas e minutos do fim do jogo ");
	scanf("%i%c%i",&ht,&c,&mt);
	while(hi!=ht||mi!=mt){
		if(mi<60){
			mi++;
			md++;
		}else{
			hi++;
			mi=0;
		}if(hi==24)
			hi=0;
	}
	printf("Tempo de duração do jogo: %i minuto(s)\n",md);	
}
