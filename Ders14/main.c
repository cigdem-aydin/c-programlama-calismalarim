#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen sayýnýn faktoryelini while ile bulun

int main() {

	int sayi,faktoryel;
	faktoryel=1;
	printf("Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	
	while(sayi>=1)
	{
		faktoryel=faktoryel*sayi;
		sayi--;
	}
	printf("Sonuc: %d",faktoryel);
	
	return 0;
}


/*	
	int i;
	i=1;
	while(i<=5)
	{
		printf("Merhaba Ege Bolgesi\n");
		i++; //i deðerini bir bir arttýr.
	}
	
*/


/*
//bir ile 10 arasýndaki sayýlarý while döngüsü ile listeleyen c kodlarý

	int i=1;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
*/


/*
//bir ile 20 arasýndaki çift  sayýlarý listeleyen ama 14 sayýsýný
//listelemeyen c komutunu yazýn.

	int i=1;
	while(i<=20)
	{
	i++;
	
		if(i==14)
		{
			i=i+1;
		}
	
		if(i%2==0)
		{
			printf(" %d",i);
		}


	}
*/


/*

//girilen sayýnýn faktoryelini while ile bulan kod.

	int sayi,faktoryel;
	faktoryel=1;
	sayi=4;
	
	while(sayi>1)
	{
		faktoryel=faktoryel*sayi;
		sayi--;
	}
	printf("Sonuc: %d",faktoryel);
	
*/
