#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//3)))
	
	int skor[10]={2,1,0,0,2,1,1,2,1,0};
	int i,puan=0;
	
	for(i=0;i<10;i++)
	{
		if(skor[i]==2)
		{
			puan=puan+3;
		}
		if(skor[i]==0)
		{
			puan=puan+1;
		}
	}
	if(puan>=12)
	{
		printf("Puaniniz: %d ligde kaldiniz",puan);
	}
	else
	{
		printf("Puaniniz: %d ligden dustunuz",puan);
	}


	
	return 0;
}


/*

	//1)))
	
	int i,j;
	int yukseklik;
	printf("Yuksekligi Girin: ");
	scanf("%d",&yukseklik);
	
	for(i=1;i<=yukseklik;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//2)))
	
	int i,toplam=0;
	for(i=1;i<=81;i+=4)
	{
		toplam=toplam+i;
	}
	printf("Toplam: %d",toplam);
	
	
*/
