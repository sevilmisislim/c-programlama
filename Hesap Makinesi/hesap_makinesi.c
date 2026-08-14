#include <stdio.h>
#include <stdlib.h>

int main(){

int sayi1, sayi2, sonuc;
char islem; 

printf("sayi1'i giriniz: ");
scanf("%d", &sayi1);

printf("sayi2'i giriniz: ");
scanf("%d", &sayi2);

printf("Yapmak istediginiz islemi seciniz: ");
scanf(" %c", &islem);

switch (islem)
{
    case'+': sonuc=(sayi1)+(sayi2);
    break;

    case'-': sonuc=(sayi1)-(sayi2);
    break;

    case'*': sonuc=(sayi1)*(sayi2);
    break;

    case'/': sonuc=(sayi1)/(sayi2);
    if(sayi2==0){
        printf("Sayi sifira bolunemez!");
    }
    break;
}

printf("Islem sonucu = %d", sonuc);





return 0;
}
