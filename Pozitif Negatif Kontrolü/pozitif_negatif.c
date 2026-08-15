#include <stdio.h>
#include <stdlib.h>
int main(){
  int a;
	 printf("Lutfen bir a degeri giriniz: ");
	 scanf("%d", &a);
	 
	 if(a>0)
       {
        	printf("a pozitif");
    	 }	 
	 
	 else if(a<0)
	 {
	 	printf("a negatif");
	 }
	 
	 else
	 {
	 	printf("a sifir");
	 }

   return 0;
}
