#include <stdio.h>
#include <stdlib.h>

//içi boþ dortgen oluþtur


	void dortgen(int kisa,int uzun)
	{
		int i,j;
		for(i=0;i<uzun;i++)
		{
			if(i==0 || i==uzun-1)
			{
				for(j=0;j<kisa;j++)
				{
					printf("*");
				}
			}
			else
			{
				printf("*");
				for(j=0;j<kisa-2;j++)
				{
					printf(" ");
				}
				printf("*");
			}
			printf("\n"); 
		}
	}

	

	int main() {
	
	int en,boy;
	printf("Dikdortgenin enini giriniz: ");
	scanf("%d",&en);
	
	printf("Dikdortgenin boyunu giriniz: ");
	scanf("%d",&boy);
	
	dortgen(en,boy);
	
	
	
	
	return 0;
}



/*	int kupbul(int sayi)
	{
		int sonuc=sayi*sayi*sayi;
		return sonuc;
	}



	int main() {
	
		int s;
		printf("Sayiyi Girin: ");
		scanf("%d",&s);
		kupbul(s);
		printf("\n\n Sonuc: %d",kupbul(s));
	
*/
