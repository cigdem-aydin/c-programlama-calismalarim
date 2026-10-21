#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sinav1,sinav2,sinav3,proje,ort;
	printf("Birinci Sinav Notunuzu Giriniz: ");
	scanf("%d",&sinav1);
	printf("Ikinci Sinav Notunuzu Giriniz: ");
	scanf("%d",&sinav2);
	printf("Ucuncu Sinav Notunuzu Giriniz: ");
	scanf("%d",&sinav3);
	printf("Proje Notunuzu Giriniz: ");
	scanf("%d",&proje);
	
	ort=(sinav1+sinav2+sinav3+proje)/3;
	
	if(ort<50)
	{
		printf("%d - FF",ort);
	}
	if(ort>=50 && ort<60)
	{
		printf("%d - DD",ort);
	}
	if(ort>=60 && ort<70)
	{
		printf("%d - CC",ort);
	}
	if(ort>=70 && ort<85)
	{
		printf("%d - BB",ort);
	}
	if(ort>=85)
	{
		printf("%d - AA",ort);
	}
	
	
	return 0;
}
