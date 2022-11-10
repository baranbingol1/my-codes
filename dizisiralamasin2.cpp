#include <iostream>

using std::cout;
using std::cin;

void sort(int *dizi, int uzunluk){

    int temp;

for(int i = 0 ; i < uzunluk; i++){
    for(int j = 0; j < uzunluk -1; j++){
        if(*(dizi+j) < *(dizi+j+1)){
            temp = dizi[j];
            dizi[j] = dizi[j+1];
            dizi[j+1] = temp;
            }
        }
    }
}


int main(){

    int dizi_uzunlugu;

    cout << "Dizinin uzunlugunu giriniz: ";
    cin >> dizi_uzunlugu;

    int dizi[dizi_uzunlugu];

    for(int i = 0 ; i < dizi_uzunlugu; i++){
        cout << i+1 << ".elemani giriniz:";
        cin >> *(dizi+i);
    }

    sort(dizi,dizi_uzunlugu);

    cout << "Dizinin siralanmis hali: ";

    for(int i = 0 ; i < dizi_uzunlugu; i++){
        cout << dizi[i] << " ";
    }

    return 0;
}