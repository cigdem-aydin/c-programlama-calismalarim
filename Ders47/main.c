#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char harf='k';
	char *pt=&harf;
	
	printf("Adres: %x\n",pt); //62fe47
	pt++; //pointerý bir arttýr.
	
	printf("Adres2: %x\n",pt); //62fe48
	
	pt--; //48-1=47 yazar
	printf("Adres3: %x\n",pt); //62fe47
	
	pt=pt+5;
	printf("Adres4: %x",pt); //62fe4c
	//onluk sayýlarý yazmýyor harfe geçiyor
	//a,b,c diye , hexadecimal dönüþümler
	
	return 0;
}
