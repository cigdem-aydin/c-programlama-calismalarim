#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int satir,sutun,i,j,k,n;
	printf("Satir Sayisi: ");
	scanf("%d",&satir);
	
	printf("Sutun Sayisi: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n [%d][%d] ---> ",i+1,j+1); //[0][0] yerine [1][1] göstermek daha doðal durur. Gerçek index yine i ve j’dir
			scanf("%d",&matris[i][j]);
		}
	}
	printf("\n\n Olusan Matris\n");
	for(k=0;k<satir;k++)
	{
		for(n=0;n<sutun;n++)
		{
			printf("%d ",matris[k][n]);
		}
		printf("\n");
	}
	
	
	return 0;
}
