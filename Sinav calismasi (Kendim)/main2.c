#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
/*	int i;
	int toplam=0;
	for(i=0;i<=10;i++) //bide i-- li halini yaptý hoca  for(i=100;i>=0;i-=10){
						//								if (i==30)
													//  break;
													// printf("%d \n",i);
													//  }
													
													
						//							for(i=100;i>=0;i-=10){
						//								if (i==30)
													// continue;
													// printf("%d \n",i);
													//  }
{
	toplam=toplam+i;
	
}
printf("%d",toplam);
*/

int i;
int j;
for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		printf("* "); //ÜÇGENDEN ÞEKÝL OLUÞTURMA / PÝRAMÝT OLUÞTURMA 1 3 5 7 9
	}
	printf("\n");
}

//SINAVLARDA ÞUNU SORUYORDUM:
// 
/*   *
    * *
   * * *
  * * * *
* * * * * *
--------------------------
while döngüsü

 do{






}while(n!=0)







	return 0;
}

---------------------------
int i;
while(i<=20){
	printf("%d \n",i);
	i++;
	i = kontrol(i);
	
}


	return 0;
}



int kontrol(int i_p){
	return (i * 4)-5;


------------------------------

int sayi, basamak=0;
printf("Sifirdan farkli bir basyi giriniz: \n");
scanf("%d,&sayi);

while(sayi!=0){
sayi/=10;
basamak++;
}

printf("basamak sayisi : %d \n",basamak);

-------------------------------
girilen bir sayýnýn tersini bulmak

int sayi, ters=0;

printf

while 
ters = (ters * 10) + (sayi%10);

sayi/=0;
--------------------------------
string


