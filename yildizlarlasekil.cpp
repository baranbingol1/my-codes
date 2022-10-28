#include <stdio.h>

int main(){
	int girilen_sayi = 1;
	
	printf("Sayiyi giriniz: ");
	scanf("%d",&girilen_sayi);
	
	for(int i=1;i<=girilen_sayi;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=girilen_sayi;i>=2;i--){
		for(int j=i;j>=2;j--){
			printf("*");
		}
		printf("\n");
	}

	return 0;
		
}

