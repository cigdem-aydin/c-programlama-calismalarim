#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Ygs 1 Puan Türü hesaplama
	
	//Türkçe: 1.999
	//Matematik: 3.998
	//Sosyal Bilgiler: 1
	//Fen Bilgisi: 2.999
	//Taban: 100.160
	
	float turkce,matematik,sosyal,fen,taban,toplampuan;
	
	printf("Turkce Netiniz: ");
	scanf("%f",&turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%f",&matematik);
	
	printf("Sosyal Netiniz: ");
	scanf("%f",&sosyal);
	
	printf("Fen Netiniz: ");
	scanf("%f",&fen);
	
	taban=100.160;
	
	toplampuan=1.999*turkce+3.998*matematik+1*sosyal+2.999*fen+taban;
	
	printf("Taban puaniniz ekleniyor....\n");
	printf("Toplam netiniz hesaplaniyor.....\n");
	printf("Toplam Netiniz: %f",toplampuan);
	
	
	
	
	
	return 0;
}
