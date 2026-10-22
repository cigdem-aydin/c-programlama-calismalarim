#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int matris[2][3]={10,20,30,40,50,60}; // 0,1 || 0,1,2
	//matristeki eleman sayısını matristeki sayıları çarparak bulursun.
	//2x3 = 6 tane
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	//i ve j aynı anda artmıyor.
	//İç içe iki döngü var ve içteki döngü, dıştaki bir kez dönerken kendi turunu baştan sona tamamlıyor.
	
	
	return 0;
}
