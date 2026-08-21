#include <stdio.h>
#include <stdlib.h>

int main(){

  int a, b, c, max, min;
	 
	 printf("Lutfen uc adet sayi giriniz: ");
	 scanf("%d%d%d", &a, &b, &c);
	 
	 if(a>b && a>c)
	 {
	 	max=a;
	 }
	 else if(b>a && b>c)
	 {
	 	max=b;
	 }
	 else
	 {
	 	max=c;
	 }
	 
	 if(a<c && a<b)
	 {
	 	min=a;
	 }
	 else if(b<a && b<c)
	 {
	 	min=b;
	 }
	 else 
	 {
	 	min=c;
	 }
	 
	 printf("Max deger: %d\n", max);
	 printf("Min deger: %d\n", min); 

   return 0;
}
