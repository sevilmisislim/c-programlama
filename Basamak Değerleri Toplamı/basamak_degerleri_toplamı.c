#include <stdio.h>
#include <stdlib.h>

int main(){

int sayi, basamak1, basamak2, basamak3, basamak4, toplam;
	 
	 printf("Lutfen dort basamakli bir sayi giriniz: ");
	 scanf("%d", &sayi);
	 printf("Girdiginiz sayi: %d\n", sayi);
	 
	 basamak1=sayi/1000;
	 printf("Sayinin birinci basamagi: %d\n", basamak1);
	 
	 basamak2= (sayi%1000)/100;
	 printf("Sayinin ikinci basamagi: %d\n", basamak2);
	 
	 basamak3= (sayi%100)/10;
	 printf("Sayinin ucuncu basamagi: %d\n", basamak3);
	 
	 basamak4= sayi%10;
	 printf("Sayinin dorduncu basamagi: %d\n", basamak4);
	 
	toplam=basamak1+basamak2+basamak3+basamak4;
	printf("Girdiginiz sayinin basamaklari toplami: %d\n", toplam); 

  return 0;
}
