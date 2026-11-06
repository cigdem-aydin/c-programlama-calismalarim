#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//4)))
	
	int birler,onlar,yuzler,toplam,sayi;
	
	printf("Sayi: ");
	scanf("%d",&sayi);
	
	birler=sayi%10;
	yuzler=sayi/100;
	onlar(sayi/10)%10;
	
	toplam=birler+yuzler+onlar;
	
	printf("Toplam %d",toplam);


	return 0;
}


/*


	//1)))
	
	int normal,el,normaltutar,eltutar,toplam;
	printf("El Bagaj Kg: ");
	scanf("%d",&el);
	
	printf("Normal Bagaj Kg: ");
	scanf("%d",&normal);
	
	if(normal<15)
	{
		normaltutar=0;
	}
	else
	{
		normaltutar=(normal-15)*5;
	}
	
	if(el<8)
	{
		eltutar=0;
	}
	else
	{
		eltutar=(el-8)*4;
	}
	toplam=normaltutar+eltutar;
	
	printf("Toplam Ekstra Odemeniz: %d TL, iyi yolculuklar...",toplam);
	
	//2)))
	
	int sayi1,sayi2,buyuk,kucuk,i,toplam=0;
	
	yeniden:
	printf("1. Sayi: ");
	scanf("%d",&sayi1);
	
	printf("2. Sayi: ");
	scanf("%d",&sayi2);
	
	if(sayi1==sayi2)
	{
		goto yeniden;
	}
	else
	{
		if(sayi1>sayi2)
		{
			buyuk=sayi1;
			kucuk=sayi2;
		}
		else
		{
			kucuk=sayi1;
			buyuk=sayi2;
		}
	}
	for(i=kucuk;i<=buyuk;i++)
	{
		toplam=toplam+i;
	}
	printf("Toplam: %d",toplam);
	

	//3)))
	
	int yaz,kis,ilkbahar,sonbahar,toplam;
	kis=320;
	ilkbahar=kis/4;
	yaz=ilkbahar*8;
	sonbahar=yaz/10;
	
	toplam=kis+ilkbahar+sonbahar+yaz;
	printf("Toplam %d",toplam);




	
	
	
*/
