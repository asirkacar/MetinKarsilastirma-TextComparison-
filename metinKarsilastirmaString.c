#include <stdio.h>
#include <string.h>

int main()
{
	char ilkmetin[100], ikincimetin[100];
	int durum;
	
	printf("�lk: "); gets(ilkmetin);
	printf("Ikinci: "); gets(ikincimetin);
	
	durum = strcmp(ilkmetin,ikincimetin);
	
	if (durum==0)
		printf("Metinler Ayni");
	else
		printf("Metinler Farkli");
}
