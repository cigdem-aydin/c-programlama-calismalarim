#include <stdio.h>
#include <stdlib.h>



int main() {
	
	printf("****************");
	printf("\n");
	printf("**    MENU    **");
	printf("\n");
	printf("****************");	
	printf("\n\n");
	printf("1.Toplama islemi\n");
	printf("2.Carpma islemi\n");
	printf("3.Kare bul\n");
	printf("4.Kup bul\n");
	printf("5.Denklem (5x^2+4x+3)");
	
	int s1,s2,sonuc,secim;
	
	printf("\n\n");
	printf("isleminiz: ");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:
			printf("iki sayi girin: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1+s2;
			printf("Toplam: %d",sonuc);
		break;
		
		case 2:
			printf("iki sayi girin: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1*s2;
			printf("Carpim: %d",sonuc);
		break;
		
		case 3:
			printf("karesi alinacak sayi: ");
			scanf("%d",&s1);
			sonuc=s1*s1;
			printf("Kare:  %d",sonuc);
		break;
		
		case 4:
			printf("Kupu alinacak sayi: ");
			scanf("%d",&s1);
			sonuc=s1*s1*s1;
			printf("Kup: %d",sonuc);
		break;
		
		case 5:
			printf("X degerini giriniz: ");
			scanf("%d",&s1);
			sonuc=(5*s1*s1)+(4*s1)+3;
			printf("Denklem Sonucu: %d",sonuc);
		break;
	}

	return 0;
}
