#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int  m1[50][50],m2[50][50],sonuc[50][50];
	int i,j,k,satir,sutun,satir2,sutun2;
	int toplam=0;
	
	printf("1. Matrisin Satir ve Sutununu Gir:\n");
	scanf("%d%d",&satir,&sutun);
	printf("1. Matrisin Degerlerini Girin:\n");
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("m1[%d][%d]: ",i,j);
			scanf("%d", &m1[i][j]);
		}
	}
	
	printf("2 Matrisin Satir ve Sutununu Gir:\n");
	scanf("%d%d",&satir2,&sutun2);
	printf("2. Matrisin Degerlerini Girin:\n");
	if(satir2 != sutun)
	{
		printf("uzgunum! Bu matrisler carpilamaz\n");
	}	
	else{ //eðer kurallara uyuyorsa sýkýntý yok devam eder
		for(i=0;i<satir2;i++)
		{
			for(j=0;j<sutun2;j++)
			{
			printf("m2[%d][%d]: ",i,j);		
			scanf("%d", &m2[i][j]);
			}
		}
	
		}
	
	

	
	return 0;
}
