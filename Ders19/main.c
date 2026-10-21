#include <stdio.h>
#include <stdlib.h>

//dýþarýdan eleman sayýsý girilip, bu dizilerin toplamý ve ortalamasý

int main() {

	int dizi[100];
	int i, sayi;
	int toplam=0;
	float ortalama;
	
	printf("Eleman Sayisi: ");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++)
	{
		printf("%d. Elemani Giriniz: ",i+1);
		scanf("%d",&dizi[i]);
		toplam=toplam+dizi[i];
	}
	
	ortalama=(float)toplam/sayi;
//Eðer kullanýcý eleman sayýsýný 100 girerse, sen o bölme iþlemini for döngüsünün içine koyduðunda bilgisayar o bölme iþlemini 100 kez ard arda tekrarlar.
//Oysa ortalama, tüm sayýlar toplandýktan sonra sadece bir kez hesaplanmasý gereken bir sondur. Bilgisayarý gereksiz yere meþgul etmiþ olursun.
//o yüzden ortalamayý for döngsünün içine yazma.
	

	printf("Toplam: %d - Ortalama: %.2f",toplam,ortalama);
	
	return 0;
}

/*

	char sehir[15];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Sehri Girin: ");
		scanf("%s",sehir);
		printf("Girdiginiz il: %s",sehir);
		printf("\n");
	}
	
*/


/*

	int dizi[100];
	int i,sayi;
	printf("Eleman Sayisi: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d.degerini girin: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	
	for(i=0;i<sayi;i++)
	{
		printf("%d ",dizi[i]);
	}
	
*/


/*

	
	int dizi[100];
	int i,sayi;
	int toplam=0;
	float ortalama; 

	
	printf("Eleman Sayisi: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("%d. elemani giriniz: ",i+1); ///1. elemani giriniz |||| eðer sadece i yazsaydýk 0. elemaný girin yazacaktý oda saçma olurdu.
											///					||||	o yüzden i+1 þeklinde yazdýk.
		scanf("%d",&dizi[i]); //kullanýcý 15 girerse dizi[0}=15; olur
		toplam=toplam+dizi[i];
	}
	ortalama = (float)toplam/sayi; //illa float diye parantez içinde belirtmek zorundasýn.
	
//Baþýna (float) yazarak derleyiciye þunu söylersiniz:
//"Bu iþlemi yaparken geçici olarak toplam deðiþkenini ondalýklý sayý gibi düþün."
//Buna tür dönüþümü (casting) denir. Böylece bölme iþlemi doðru bir þekilde ondalýklý olarak gerçekleþir
//(örneðin 5.0 / 2 = 2.5).	
	
	printf("Toplam: %d\n",toplam);
	printf("Ortalama: %.2f\n",ortalama); //%.2f ifadesi, ondalýklý sayýnýn virgülden sonraki sadece ilk 2 basamaðýný ekrana basmasýný saðlar
	
//----------------------------------------------------------------------------------------------------------------------------
//6. Ortalama hesaplamasýný for döngüsünden önce koyduðumda neden çalýþmadý?
//Çünkü döngü çalýþmadan önce henüz hiçbir dizi elemaný girilmemiþtir ve toplam deðiþkeninin deðeri henüz 0'dýr.
//Siz ortalamayý döngüden önce hesaplatmaya çalýþýrsanýz, bilgisayar 0 / sayi iþlemini yapar ve ortalamayý 0 olarak bulur.
//for döngüsü bittikten sonra ise tüm sayýlar toplam deðiþkenine eklenmiþtir,
//yani toplam artýk güncel ve doðrudur.
//Bu yüzden ortalama, tüm toplama iþlemi bittikten sonra (for döngüsünün dýþýnda ve altýnda) hesaplanmalýdýr.

*/
