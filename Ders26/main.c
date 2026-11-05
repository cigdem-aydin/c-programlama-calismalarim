#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	int m1[2][2];
	int m2[2][2];
	int toplam[2][2];
	int i,j,k,l;
	
	printf("1. Matrisin degerlerini giriniz:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d", &m1[i][j]);
		}
	}
	
	printf("2. Matrisin degerlerini giriniz: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d", &m2[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			toplam[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	printf("\nToplam Matris:\n");
	for(k=0;k<2;k++)
	{
		for(l=0;l<2;l++)
		{
			printf("%d ", toplam[k][l]);
		}
		printf("\n");
	}
		

	
	return 0;
}

/*
[
	int m1[2][2]={10,12,15,18};
	int m2[2][2]={8,11,14,6};
	int toplam[2][2];
	
	int i,j,k,l;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			toplam[i][j]=m1[i][j]+m2[i][j];
		}
		
	}
	for(k=0;k<2;k++)
	{
		for(l=0;l<2;l++)
		{
			printf("%d ",toplam[k][l]);
		}
		printf("\n");
	}
	
*/
