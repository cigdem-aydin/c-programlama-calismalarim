#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char bilgi[40]; //bilgimiz 40 karakterden oluþsun
	printf("Bilgiyi Girin: ");

	
	gets(bilgi);
	printf("\n\n");
	puts(bilgi);
	
	//puts ve getste tüm cümleyi alýyor+
	return 0;
}


/*	scanf("%s",&bilgi);
	printf("Bilgi: %s",bilgi);
	//scanfte boþluktan sonraki kýsýmlarý almýyor-*/
