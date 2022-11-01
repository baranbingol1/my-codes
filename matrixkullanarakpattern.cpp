#include <stdio.h>
//Matrix kullanarak �r�nt� (Bu bir HackerRank problemidir.)
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
   		//A�a��daki kod her d�ng�de �r�nt�n�n kenarlar�na "n" say�s�n� yazar.
       for(int i = baslangic; i <=bitis ; i++){
           for(int j = baslangic; j <= bitis; j++){
                   pattern_array[i][j] = n;
           }
       }
       //Birdahaki d�ng� i�in azalt�lacak olan n say�s� d�ng�de olu�an �eklin i� taraf�n�n kenarlar�na denk gelsin diye baslangic 1 art�l�yor ve bitis 1 azalt�l�yor.
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
