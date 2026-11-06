#include <stdio.h>
#include <stdlib.h>



int main() {
	
	// 4)))
	
	 int saat;
	 printf("Kac Saat Kaldiniz: ");
	 scanf("%d",&saat);
	 
	 if(saat>0 && saat <=4)
	 {
	 	printf("10 TL Odeme Yapin");
	 }
	 if(saat>=5 && saat<=8)
	 {
	 	printf("12 TL Odeme Yapin");
	 }
	 if(saat>=9 && saat<=12)
	 {
	 	printf("15 TL Odeme Yapin");
	 }
	 if(saat>=13)
	 {
	 	printf("20 TL Odeme Yapin");
	 }
	
	

	return 0;
}

/*

	//1)))
	
	int sayi=1;
	int i;
	for(i=1;i<=24;i++) //2 üssü 24, 2 üssü 5= 32 gelirdi sonuc)
	{
		sayi=sayi*2;
	}
	printf("%d",sayi);
	
	//2))
	
	int i;
	int toplam=0;
	int sayi;
	for(i=1;i<=4;i++)
	{
		printf("%d.Sayi: ",i);
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	printf("Toplam Sonuc: %d",toplam);
	
	//3)))
	
	int sayi;
	int toplam=0;
	

	while(sayi!=0)
	{
		printf("Sayi: ");
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	printf("%d",toplam);
	
	
	
*/
