#include <stdio.h>
#include <stdlib.h>
#include "4.h"
#define tam 20
#include <time.h>

void main(){
	int v[tam],num,i;
	int *xmin,*xmax;
	srand(time(0));
	for(i=0;i<tam;i++)
		v[i]=rand()%21;
	xmin=&v[rand()%20];
	xmax=&v[rand()%20];
	while(xmin==xmax)
		xmax=&v[rand()%20];
	printf("%i\n%i\n",*xmin,*xmax);
	printf("qts nmrs? ");scanf("%i",&num);
	for(i=0;i<tam;i++)
		printf("%i ",v[i]);
	printf("\n");
	calc(v,num,xmin,xmax);
	for(i=0;i<tam;i++)
		printf("%i ",v[i]);
	printf("\n");
}
