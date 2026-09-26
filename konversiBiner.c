#include <stdio.h>
#include <stdlib.h>

//nemu unsigned short tadi di tutorial, sekalian nyoba
unsigned short biner[16]; //mentok 65535, biar gk trlalu berat karena cuma proyek kecil
unsigned short desimal;//lebih dari 65535 tidak akan keluar angkanya

int main(void){
    printf("MAsukkan bilangan desimal yg akan di konversi ke biner\n");
    printf(">>>> ");
    scanf("%hu", &desimal);
    int i = 0;
    
    //ngubah dari desimal ke biner
    while (desimal > 0)
    {
        biner[i] = desimal % 2;
        desimal = desimal / 2;
        i++;
    }    
    printf("hasil konversi biner: ");
    
    //membalik urutan array dari akhir ke awal, bukan awal ke akhir
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%hu", biner[j]);
    }
    
    printf("\n"); //newline biar rapi tipis tipis
    return 0; // selesai
}
