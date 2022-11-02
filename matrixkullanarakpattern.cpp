#include <stdio.h>
//Matrix kullanarak örüntü (Bu bir HackerRank problemidir.)
int main() 
{

    int n;
    printf("Sayiyi giriniz: ");
    scanf("%d", &n);
    int matrix_boyutu = 2*n-1;
    int pattern_array[matrix_boyutu][matrix_boyutu];
    int baslangic = 0;
    int bitis = matrix_boyutu - 1;
   while(n != 0){
   		//Aşağıdaki kod her döngüde örüntünün kenarlarına "n" sayısını yazar.
       for(int i = baslangic; i <=bitis ; i++){
           for(int j = baslangic; j <= bitis; j++){
                   pattern_array[i][j] = n;
           }
       }
       //Birdahaki döngü için azaltılacak olan n sayısı döngüde oluşan şeklin iç tarafının kenarlarına denk gelsin diye baslangic 1 artılıyor ve bitis 1 azaltılıyor.
       ++baslangic;
       --bitis;
       --n;
   }
	printf("Olusan oruntu: ");
	printf("\n");
	for(int i = 0; i < matrix_boyutu; i++){
		for(int j = 0; j < matrix_boyutu; j++){
			printf("%d ",pattern_array[i][j]);
		}
		printf("\n");
	}
	    
    return 0;
}
