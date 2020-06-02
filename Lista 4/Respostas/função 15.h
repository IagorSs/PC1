/* Implemente uma função que calcula o mínimo múltiplo comum de dois número inteiros
utilizando o método da decomposição simultânea dos números em fatores primos.
MMC = 2 * 2 * 3 * 5 = 60. */

int MMC_2(int a, int b){
	int  d=2,m=1;
	while(a!=1||b!=1){
		if(a%d==0&&b%d==0){
			a=a/d;
			b=b/d;
			m=m*d;
		}else if(a%d==0){
			a=a/d;
			m=m*d;
		}else if(b%d==0){
			b=b/d;
			m=m*d;
		}else
			d++;
	}return m;
}
