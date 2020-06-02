/* “char *strstr (char *str1, char *str2)” que retorna o endereço de str1 em que ocorre pela
primeira vez a substring str2. Caso não exista, retorna NULL. */

char* strstr(char* str1,char* str2){
	int i1,i2,ig;
	printf("%p\n%p\n",str1,str2);
	for(i1=0;str1[i1]!='\0';i1++){
		ig=i1;
		for(i2=0;str1[i1]==str2[i2];i2++,i1++)
			if(str2[i2+1]=='\0')
				return &str1[ig];
		i1=ig;
	}return NULL;
}
