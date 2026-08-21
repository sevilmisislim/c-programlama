#include <stdlib.h>
#include <stdio.h>

int main(){

int sayi, faktoriyel;
	 faktoriyel=1;
	 
	 printf("Lutfen bir sayi giriniz: ");
	 scanf("%d", &sayi);
	 
	 while(sayi>1)
	 {
	 	faktoriyel=faktoriyel*sayi;
	 	sayi--;
	 }
	 
	 printf("Girdiginiz sayinin faktoriyeli: %d", faktoriyel);

   return 0;
}
