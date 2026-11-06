#include <stdio.h>
#include <stdlib.h>



int main() {

	
	






	return 0;
}


/*

		int i;
	int toplam=0;
	int sayi;
	for(i=1;i<=4;i++)
	{
		printf("%d. Sayi: ",i);
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	printf("Toplam: %d",toplam);





	int sayi=1;
	int i;
	for(i=1;i<=24;i++)
	{
		sayi=sayi*2;
	}
	printf("%d",sayi);




		int sayi,sonuc;
	printf("Sayiyi Girin: ");
	scanf("%d",&sayi);
	
	sonuc=sayi*sayi*sayi;
	printf("Sayinin Kupu: %d",sonuc);


	 
	int sayi, i;
	printf("Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			printf("%d\n",i);
		}
	}

	




	int sayac=0;
	int i;
	
	int a,b,c;
	
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		if(a!=b && a!=c && b!=c)
		{
			sayac ++;
		}
	}
	printf("%d",sayac);


,,..,,,,,,,,

	int[2][3]={(1,2,3),(4,5,6)};
	2 satir, 3 sütun = 6 eleman

	int i;
	int toplam=0;
	int a[2]; // 2 elemanlý dizi
	
	printf("1. Sayiyi Giriniz: ");
	scanf("%d",&a[0]); //Doðrudan dizinin ilk elemanýna yazýldý
	printf("2. Sayiyi Giriniz: "); //Doðrudan dizinin ikinci elemanýna yazýld
	scanf("%d",&a[1]);
	
	

	for(i=0;i<2;i++)
	{
		toplam=toplam+a[i];
	}
	
	printf("Toplam: %d\n",toplam);




		int gun;
	printf("Sayi Giriniz: ");
	scanf("%d",&gun);
	switch(gun)
	{
		case 1:
			printf("Pazartesi");
			break;
		case 2:
			printf("Sali");
			break;
		default:
			printf("Gecersiz");
			break;
			
	}







	// if -else
	
	int yas;
	printf("Yasinizi Giriniz: ");
	scanf("%d",&yas);
	
	if(yas>=18)
	{
		printf("Yetiskin");
	}
	else
	{
		printf("Yetiskin Degil");
	}
	
	

	




	int a,b,toplam,fark,carpma,bolme,mod;
	a=10;
	b=3;
	
	toplam=a+b;
	fark=a-b;
	carpma=a*b;
	bolme=a/b;
	mod=a%b;
	
	printf("T: %d\nF: %d\nC: %d\nB: %d\nMod: %d",toplam,fark,carpma,bolme,mod);




iki sayiyi toplama 
	int sayi1,sayi2;
	int toplam=0;
	
	printf("Sayi 1 degerini giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Sayi 2 degerini giriniz: ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	printf("Toplam: %d",toplam);
	
	
		//dairenin cevre formulu 2*pi*r
	//pi yi 3.14 alýnýz
	
	float pi,cevre,r;
	
	pi=3.14;
	r=2;
	cevre=10;
	cevre=2*pi*r;
	
	printf("Dairenin Cevresi: %.2f\n",cevre);
	
		int vize,final,yil_sonu_notu;
	printf("Vize Notunuzu Giriniz: ");
	scanf("%d",&vize);
	
	printf("Final Notunuzu Giriniz: ");
	scanf("%d",&final);
	
	yil_sonu_notu=vize*0.4+final*0.6;
	printf("Yil Sonu Notunuz: %d",yil_sonu_notu);
	
	
		int sayi1,sayi2;
	printf("1. Sayiyi Giriniz: ");
	scanf("%d",&sayi1);
	printf("2. Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	
	if(sayi1>sayi2)
	{
		printf("Buyuk Sayi: %d",sayi1);
	}
	else
	{
		printf("Buyuk Sayi: %d",sayi2);
	}

	//Listedeki tek ve cift sayisini bulunuz.
	
	int sayac=0;
	int sayi;
	int tek_sayac=0;
	int cift_sayac=0;
	
	printf("Deger Giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%2==0)
	{
		cift_sayac=cift_sayac+1;
		printf("Cift: %d\n",cift_sayac);
	}
	else
	{
		tek_sayac=tek_sayac+1;
		printf("Tek: %d\n",tek_sayac);
	}
	sayac=sayac+1;
	printf("Sayac: %d",sayac);
	
	
	
	%d = Tam sayi; Aritmetik veriler için kullanýlýr
	%f = float; Ondalikli deðiþkenler için kullanýlýr; 
	%s = Metin; (scan'dan geliyor); Alfabetik veriler için kullanýlýr
	%.2f = virgülden sonra 2 basamak;
	// ile /* yorum yapmak için kullanýlýr
	printf = yazdýrma için kullanýlýr;
	scanf = kullanýcýdan veri almak için kullanýlýr;
	int deðiþkenler (tam sayi) / Deðiþken türü Deðiþken adý (%d)
	* = çarpma iþlemi için kullanýlýr
	/ = bölme iþlemi için kullanýlýr
	Ondalýklý sayýlarý "." kullanarak yazarýz. Virgülle deðil: 5.37

	if    (%d)
	else = deðilse
	= atama
	= = sorgulama (eþit mi? / eþit midir? / eþitse.)
	>= (büyük eþit) <= (küçük eþit)
	Mod Alma = % (Mod alma bir sayýnýn baþka bir sayýya bölümünden kalan sonucu bulur.)
	ve = &&
	veya = ||
	
	int sayi;
	if(sayi%5==0)
	== eþit midir/se
	!= eþit deðil midir/ deðilse
	Döngüler --> for döngüsü
	for
	(Baþlangýç; Bitiþ; Artýþ Miktari)
	
	sayi++ --> sadece sayiyi 1 artirir, ++2 yaparsan sayi 2 artýrmaz.
	sayi+=2 --> +=2 yaparsan 2 artirir.
	
	i,j,k --> sayaç
	while --> þartlý döngü (ilgili þartý saðladýðý sürece)
	while(þart)
	{
		iþlemler
	}
	sayi-- (sayiyi bir bir azaltir)
	
	//NOT://
	int, tam sayýlarý depolar.
	float ondalýklý sayýlarý depolar.
	f son eki /*ÖRN 10.5f , C'ye deðeri double yerine float olarak atar.
	double float'tan daha yüksek hassasiyette ondalýk sayýlarý depolar.
	
	char, tek týrnak içine alýnmýþ tek bir karakteri depolar char grade='A';  (print f içine char %c þeklinde yazýlýr)
	
	switch(anahtar)
	case(durum)
	switch(deðiþken)    //char ile case karýþtýrma
	{
		case1:....
		case2:....
	}
	break; ---> kodu kýrar
	default --> switch-case yapýsýnda, tanýmlanan hiçbir case sabiti ile deðiþkenin deðeri eþleþmediðinde çalýþacak olan varsayýlan durumu belirtir.
	// default if-else yapýsýndaki else bloðuna benzer
	
	default'un sonunada ; eklenmesi gerekmektedir.
	case 1:printf("...."); break; int scanf("%d")
	case 'F':printf("....."); break; int scanf("%s");
	-----------------------------------------
	
	Þehirler=Ýstanbul,Ankara,Ýzmir,Bursa,Adana
	Þehirler--> Dizi
	Ýstanbul,Ankara,Ýzmir,Bursa,Adana --> item(elemanlar/ögeler)
	
	Diziler genellikle sýnýrý olan yapýlardýr. Belli bir boyut. Belli bir alaný vardýr.
	Öðrenciler = Ali,Ayþe,Ahmet,Emel
	Tek Rakamlar=1,3,5,7,9
	Çift Rakamlar= 0,2,4,6,8
	
	int sayilar[]   // [] --> dizi
	Dizi Sembolü = []
	Index= Eleman Sýrasý
	Dizilerde index'in baþlangýç deðeri 0(sýfýrdýr).
	(Programlama dillerinde sayma iþlemleri sýfýrdan baþlar.)
	
	--------------------------------------------
	
	*Yýldýz Oluþturma*
	Geriye sayarken þart "büyük ya da eþit" olmak ve baþlangýç deðeri büyük deðer olmak zorunda
	for(i=4;i>=1;i--)
	---------------------------------------------
	int dizi[x][y] --> iki boyutlu bir dizi x=satir s. y=sütun sayis,
	array(dizi)
	indeks(index) --> sýra numarasý
	---------------------------------------------
	\n --> yeni satýr (slash n/new line)
	#include <stdio.h> // giriþ çýkýþ fonksiyonlarý için baþlýk dosyasý
	
	+ Toplama
	- Çýkarma
	* Çarpma
	/ Bölme
	% Bölümden Kalan/Mod Operatörü
	
	== eþit
	!= eþit deðil
	> büyük
	< küçük
	>= büyük eþit
	<= küçük eþit
	
	++x önce artýrýr sonra kullanýr
	x++ önce kullanýr sonra artýrýr
	
	| iþlem | anlam |
	| && | ve |
	| || | veya |
	| ! | deðil |
	
	//Öncelik sýrasý: ! --> && --> || */
	

	
	

