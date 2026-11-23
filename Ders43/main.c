#include <stdio.h>
#include <stdlib.h>

	struct kayit
	{
		char ad[20];
		char soyad[20];
		int no;
		int sinif;
		float ort;	
		};
		struct kayit ogr;

	int main() {
	
	printf("Ad Soyad: ");
	scanf("%s%s",&ogr.ad,&ogr.soyad);
	printf("Numara: ");
	scanf("%d",&ogr.no);
	printf("Sinif: ");
	scanf("%d",&ogr.sinif);
	printf("Ortalama: ");
	scanf("%f",&ogr.ort);
	
	printf("%s %s\n",ogr.ad,ogr.soyad);
	printf("%d\n",ogr.no);
	printf("%d\n",ogr.sinif);
	printf("%f",ogr.ort);
	
	return 0;
}
