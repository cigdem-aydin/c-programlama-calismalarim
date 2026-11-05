#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char kitapadi[20],yazar[15],sayfasayisi[3],basimtarihi[4],basimevi[10],tur[10];
	
	printf("Kitabin Adi: ");
	scanf("%s",kitapadi);
	
	printf("\n");
	
	printf("Yazar: ");
	scanf("%s",yazar);

	printf("\n");
	
	printf("Sayfa Sayisi: ");
	scanf("%s",sayfasayisi);
	
	printf("\n");
	
	printf("Basim Tarihi: ");
	scanf("%s",basimtarihi);
	
	printf("\n");
	
	printf("Basim Evi: ");
	scanf("%s",basimevi);
	
	printf("\n");
	
	printf("Tur: ");
	scanf("%s",tur);
	
	printf("Adi: %s - Yazar: %s - Sayfa Sayisi: %s - Basim Tarihi: %s - Basim Evi: %s - Tur: %s",kitapadi,yazar,sayfasayisi,basimtarihi,basimevi,tur);
	
	return 0;
}
