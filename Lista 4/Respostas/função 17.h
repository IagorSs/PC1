/* Implemente um procedimento chamado “ calcular_tempo” que recebe, por parâmetro, a
hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores distintos:
horas e minutos. O procedimento deve exibir a duração do jogo em minutos, considerando
que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em
um dia e terminar no outro.
Teste seu procedimento com os seguintes valores:
Início Fim
00:00 23:59
23:50 00:50
10:50 10:51
10:40 10:39 */

int calcular_tempo(float hi,float mi,float ht,float mt){
	int dm=0;
	while(hi!=ht||mi!=mt){
		if(mi<60){
			mi++;
			dm++;
		}else{
			mi=0;
			hi++;
		}if(hi==24)
			hi=0;
	}return dm;
}
