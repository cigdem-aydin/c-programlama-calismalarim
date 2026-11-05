#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("Ogrence ortalama hesap bilgi sistemi...");
	printf("\n\n");
	
	int s1,s2,ort;
	
	printf("Birinci sinav notunuz: ");
	scanf("%d",&s1);
	
	printf("Ikinci sinav notunuz: ");
	scanf("%d",&s2);
	
	ort=(s1+s2)/2;
	
	printf("Ortalama: %d\n\n",ort);
	
	if(ort>=50)
	{
		printf("Basarili");
	}
	else
	{
		printf("Basarisiz");
	}

	return 0;
}
