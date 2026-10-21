#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi1,sayi2,sonuc,secim;
	
	sayi1=12;
	sayi2=16;
	
	printf("Matematik Menusu\n");
	printf("*******************\n\n");
	printf("1- Karede Alan ve Cevre Hesabi\n");
	printf("2- Girilen Sayinin Kupu\n");
	printf("3- Cemberde Alan ve Cevre Hesabi\n");
	printf("4- 5x2+7x+9 x e gore islemin sonucu\n");
	printf("5- Dikdortgende Alan ve Cevre Hesabi\n\n");
	printf("isleminizi secin: ");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			printf("Karenin Alani: %d\n",(sayi1*sayi1));
			printf("Karenin Cevresi: %d",(sayi1*4));
			break;
		case 2:
			printf("Sayinin Kupu: %d",(sayi1*sayi1*sayi1));
			break;
		case 3:
			printf("Cemberin Alani: %d\n");
			printf("Cemberin Cevresi: %d");
			break;
		case 4:
			printf("Sonuc: %d",(5*5+7*sayi1+9));
			break;
		case 5:
			printf("Dikdortgenin Alani: %d\n",(sayi1*sayi2));
			printf("Dikdortgenin Cevresi: %d",(2*sayi1+sayi2*2));
			break;
		default: printf("Hatali Numara Girdiniz"); break;
			
	}
	
	
	return 0;
}




/*

	int sayi1, sayi2, sonuc;
	char islem;
	sayi1=75;
	sayi2=15;
	printf("islemi girin: ");
	scanf("%s",&islem);
	
	switch(islem)
	{
		case '+':
			sonuc=sayi1+sayi2;
			printf("Sonuc: %d",sonuc);
			break;
		case '-':
			sonuc=sayi1-sayi2;
			printf("Sonuc: %d",sonuc);
			break;
		case '*':
			sonuc=sayi1*sayi2;
			printf("Sonuc: %d",sonuc);
			break;
		case '/':
			sonuc=sayi1/sayi2;
			printf("Sonuc: %d",sonuc);
			break;
		default:
			printf("Hatali sembol girdiniz");
			break;
	}
	
*/
