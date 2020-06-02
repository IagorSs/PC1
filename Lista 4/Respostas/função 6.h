/* Escreva uma função que recebe como parâmetros 3 números inteiros correspondendo aos valores de
dia, mês e ano, respectivamente, e retorna o número de dias já transcorridos neste ano. Utilize a
função implementada no exercício anterior para determinar se o ano é bissexto (no ano bissexto o
mês de fevereiro tem 29 dias). */
#include "função 5.h"
int dias_passados(int d,int m, int a){
	int dp,janeiro=31,fevereiro;
	if(ano_bissexto(a)==1)
		fevereiro=29+janeiro;
	else
		fevereiro=28+janeiro;
	int marco=fevereiro+31,abril=marco+30,maio=abril+31,junho=maio+30,julho=junho+31,agosto=julho+31,setembro=agosto+30,outubro=setembro+31,novembro=outubro+30;
	switch(m){
		case 1: dp=d;
			break;
		case 2: dp=janeiro+d;
			break;
		case 3: dp=fevereiro+d;
			break;
		case 4: dp=marco+d;
			break;
		case 5: dp=abril+d;
			break;
		case 6: dp=maio+d;
			break;
		case 7: dp=junho+d;
			break;
		case 8: dp=julho+d;
			break;
		case 9: dp=agosto+d;
			break;
		case 10: dp=setembro+d;
			 break;
		case 11: dp= outubro+d;
			 break;
		case 12: dp=novembro+d;
			 break;
	}return dp;
}

