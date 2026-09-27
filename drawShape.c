#include <stdio.h>
#include <stdlib.h>
//gambar segitiga
void segitiga(void){
    printf("    /|\n");
    printf("   / |\n");
    printf("  /  |\n");
    printf(" /___|\n");
}

//gambar persegi
void Persegi(void){
    printf("______\n");
    printf("|    |\n");
    printf("|    |\n");
    printf("|____|\n");
}
//gambar lingkaran
void lingkaran(void){
    printf("   ***   \n");
    printf(" *     * \n");
    printf("*       *\n");
    printf(" *     * \n");
    printf("   ***   \n");
}
//gambar persegi panjang
void persegi_panjang(void){
    printf("__________\n");
    printf("|        |\n");
    printf("|        |\n");
    printf("|________|\n");
}
//pilihan mau gambar apa di main
int main(){
    printf("Mau gambar apa?\n");
    printf("1. Segitiga\n");
    printf("2. Persegi\n");
    printf("3. Lingkaran\n");
    printf("4. Persegi Panjang\n");
    int pilihan;
    scanf("%d", &pilihan);  //membaca input dari user
    if (pilihan == 1)  // ya logic nya sama kek piton beda sintaks aja
    {
        printf("oke ini segitiga\n");
        segitiga();
    }
    else if (pilihan == 2)  //pake else if bukan elif 
    {
        printf("oke ini persegi\n");
        Persegi();
    }
    else if (pilihan == 3)
    {
        printf("oke ini lingkaran\n");
        lingkaran();
    }
    else if (pilihan == 4)
    {
        printf("oke ini persegi panjang\n");
        persegi_panjang();
    }
    else  //error handling kalo input bukan 1-4
    {
        printf("cuma bisa satu sampai 4 (1-4) lainnya gabisa wok.\n");
    }
    return 0;  //program selesai
}