#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char nereden[30]="Merhaba Ankara";
	char nereye[30]="";
	
	strncpy(nereye,nereden,14);
	printf("%s",nereye);
	
	
	
	return 0;
}

//	strcpy --> direkt kaynaðýn tamamýný kopyalýyor
// strncpy --> kopyalancak olan kaynak içerisinde kaç karakterlik kopyalama yapýlacaðýnýn parametresidir
// strncpy --> kopyalacaðýmýz karakter sayýsý için kullanýlan komut


/*	char kaynak[30]="Merhaba Balikesir";
	char kopya[30]=""; //içi boþ
	
	strcpy(kopya,kaynak);
	//1.cisi nereye kopyalanacak
	//2.cisi nereden kopyalanacak
	
	printf("%s",kopya); */
