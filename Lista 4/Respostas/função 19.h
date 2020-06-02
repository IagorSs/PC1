/* Implemente um procedimento para calcular e exibir o seguinte somatório:
S = f(1) + f(2) + f(3) + ... + f(100). A função f(n) foi definida no exercício anterior.
Resultado: 1124175704 */
#include "função 18.h"

int somatorio_f19(){
	int s=0,a=1;
	do{
		s=s+menor_inteiro(a);
		a++;
	}while(a<=100);
	return s;
}
