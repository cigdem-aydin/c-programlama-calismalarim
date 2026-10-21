#include <stdio.h>
#include <stdlib.h>


int main() {

	int sayi;
	printf("Hafta Numarasi Giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:printf("Pazartesi"); break;
		case 2:printf("Sali"); break;
		case 3:printf("Carsamba"); break;
		case 4:printf("Persembe"); break;
		case 5:printf("Cuma"); break;
		case 6:printf("Cumartesi");
		break;
		case 7:printf("Pazar");
		break;
		default: printf("Yanlis ya da Eksik Numara Girdiniz"); break;
	}
	
	return 0;
}



/*

	int sayi;
	printf("Ay Numarasi Giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:printf("Ocak"); break;
		case 2:printf("Subat"); break;
		case 3:printf("Mart"); break;
		case 4:printf("Nisan"); break;
		case 5:printf("Mayis"); break;
		case 6:printf("Haziran"); break;
		case 7:printf("Temmuz"); break;
		case 8:printf("Agustos"); break;
		case 9:printf("Eylul");
		break;
		case 10:printf("Ekim");
		break;
		case 11:printf("Kasim");
		break;
		case 12:printf("Aralik");
		break;
		default: printf("Hatali Sayi Girisi");
		break;
	}
	
*/


/*

	
	char harf;
	printf("Harf Giriniz: ");
	scanf("%s",&harf);
	
	switch(harf)
	{
		case 'M':printf("Matematik"); break;
		case 'm':printf("Matematik"); break;
		case 'T':printf("Turkce"); break;
		case 't':printf("Turkce"); break;
		case 'S':printf("Sosyal Bilgiler"); break;
		case 's':printf("Sosyal Bilgiler");
		break;
		case 'F':printf("Fen Bilimleri"); break;
		case 'f':printf("Fen Bilimleri"); break;
		default: printf("Hatali Harf Girisi");
		break;
	}
	
	
*/
