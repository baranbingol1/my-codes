#include <stdio.h>
#include <math.h>
int mersenne_sayisi(int x){	
	return 2*x-1;	
}

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

int main(void){
	
	int istenilen_sayi;
	printf("Kac tane mersenne sayisi bulmak istediginizi giriniz: ");
	scanf("%i",&istenilen_sayi);
	
	int mersenne_sayilari[istenilen_sayi];
	
	for(int i = 1, j=0; i <=istenilen_sayi, j <istenilen_sayi; i++, j++){
		mersenne_sayilari[j] = mersenne_sayisi(i);
	}
	int counter=0;
	for(int i = 1; i < istenilen_sayi ; i++){
		if(asal_mi(mersenne_sayilari[i]) == 0){
			counter++;	
			printf("%d bir mersenne asalidir\n",mersenne_sayilari[i]);
		}
	}
	printf("ilk %i mersenne sayisinin %d tanesi asal sayidir.",istenilen_sayi,counter);
}
