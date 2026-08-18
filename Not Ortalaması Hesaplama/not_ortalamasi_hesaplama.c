#include <stdio.h>
#include <stdlib.h>

int main(){

float vize, final, ortalama;

	printf("Vize sinav notunuzu giriniz: ");
	scanf("%f", &vize);

	printf("Final sinav notunuzu giriniz: ");
	scanf("%f", &final);

	ortalama=(vize)*(0.40) + (final)*(0.60);

	if(ortalama>=55){
		printf("Gecti.");
	}
	else{
		printf("Kaldi.");
	}

return 0;
}
