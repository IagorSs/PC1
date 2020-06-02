/* Implemente uma função que retorna 1 quando o ano (passado como parâmetro) for bissexto e 0, caso
contrário.
Um ano não divisível por 100 e divisível por 4 é bissexto;
Um ano divisível por 100 e divisível por 400 é bissexto;
Os demais anos não são bissextos. */

int ano_bissexto(int a){
	if(a%100!=0&&a%4==0)
		return 1;
	else if(a%100==0&&a%400==0)
		return 1;
	else
		return 0;
}

