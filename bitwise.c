#include <stdio.h>

void bitleriGoster(int deger){

    unsigned int mask = 1 << 31; // int degeri 4 byte yani 32 bit oldugundan dolayi mask degerimizi 31 bit kaydiriyoruz.

    printf("%d = ",deger);

    for(int i = 1 ; i <= 32 ; i++){

        putchar(deger & mask ? '1' : '0');
        deger <<= 1;

        if(i % 8 == 0)
            putchar(' ');

    }
}

void XOR(int sayi1,int sayi2){
    printf("XOR(ya da) isleminden sonra sonucun degeri ve binary gosterimi : ");
    bitleriGoster(sayi1 ^ sayi2);
}
void OR(int sayi1,int sayi2){
    printf("OR(veya) isleminden sonra sonucun degeri ve binary gosterimi : ");
    bitleriGoster(sayi1 | sayi2);
}
void AND(int sayi1,int sayi2){
    printf("AND(ve) isleminden sonra sonucun degeri ve binary gosterimi : ");
    bitleriGoster(sayi1 & sayi2);
}

int main(){

    char secilenIslem;
    int sayi1, sayi2;

    puts("^ -> exclusive OR (ya da) islemi");
    puts("& -> AND(ve) islemi");
    puts("| -> OR(veya) islemi");
    printf("Hangi islemi yapmak istiyorsunuz ? ");

    scanf("%c",&secilenIslem);

    printf("%c islemini sectiniz. Islem yapmak istediginiz ilk sayiyi giriniz: ",secilenIslem);
    scanf("%d",&sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);

    if(secilenIslem == '^'){
        XOR(sayi1,sayi2);
    }
    if(secilenIslem == '|'){
        OR(sayi1,sayi2);
    }
    if(secilenIslem == '&'){
        AND(sayi1,sayi2);
    }


}