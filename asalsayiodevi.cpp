#include <stdio.h>
#include <math.h>

int asal_mi(int sayi){
	
	int sayac = 2;
	for(int i=2;i<=sqrt(sayi);i++){
		if(sayi%i==0){
			sayac++;
			if(sayac==3){
				return sayac;
				break;
			}	
		}
	}
	if(sayac==2){
		return 0;
	}
	
}

int carpanlari_bul(int sayi){
	
	for(int i=1;i<=sayi;i++){
		if(sayi%i==0){
			printf("%i ",i);
		}
	}
	
}

int main(){
	int girilen_sayi;
	printf("Lutfen 0'dan buyuk bir sayi giriniz: ");
	scanf("%d",&girilen_sayi);
	
	if(girilen_sayi>0){
		if(asal_mi(girilen_sayi)==0){
			printf("Sayiniz asaldir.\n");
			printf("Carpanlari: %d %d",1,girilen_sayi);
			}
			else{
				printf("Sayiniz asal degildir.\n");
				printf("Carpanlari: ");
				carpanlari_bul(girilen_sayi);
			}
		
	}
	
	else{
		printf("Lutfen gecerli bir sayi giriniz.");
	}

	return 0;
}
