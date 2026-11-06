#include <stdio.h>
#include <stdlib.h>



int main() {
	

  //4)))))))
  
  	int sayi,sonuc;
  	printf("Sayiyi Girin: ");
  	scanf("%d",&sayi);
  	
  	sonuc=sayi*sayi*sayi;
  	printf("%d",sonuc);
 
 
 
 
 
 
	
	return 0;
}

/* 1)))))))
	//Üç basamaklý, rakamlarý birbirinden farklý, kaç tane sayý olduðunu bulan programý c dili ile  kodlayýnýz.
	int sayac=0;
	int i; //döngüyü tutsun
	
	int a,b,c; //basamaklar
	
	
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=(i/10)%10; //234'ü 10'a böl, kalaný ver
		c=i%10;
		if(a!=b && a!=c && b!=c)
		{
			sayac++; //sayaç bir bir artar
		}
		
	}
	
	printf("%d",sayac);
	
	//% iþareti mod (kalan) operatörüdür. Yani bir bölme iþleminden sonra geriye kalan sayýyý verir.
	
	2)))))))
	
	 // 3))))
 // klavyeden girilen sayýnýn tam blenlerini bulan programý kodlayýn.
 
	int sayi,i;
	printf("Sayiyi Girin: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0) //sayi’yý i’ye böldüðümde kalan 0 mu?
		{ // == eþit mi?
			printf("%d\n",i);
		}	
	}
 
	
*/
