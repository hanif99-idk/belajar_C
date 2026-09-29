#include <stdio.h>
int num1 ;
int num2 ;
char operator ;
int main (void){
    printf("selamat datang di kalukalator sederhana\n");
    printf("massukan angka pertama\n");
    printf(">>>> ");
    scanf("%d", &num1);
    printf("Massukan angka ke 2\n");
    printf(">>>> ");
    scanf("%d", &num2);
    printf("Pilih operator (+)\n");
    printf(">>>> \n");
    scanf(" %c", &operator);

    if (operator == '+')
    {
        int hasil = num1 + num2;
        printf("hasil dari %d ditambah %d adalah %d", num1, num2, hasil);
    }
    
    else if (operator == '-')
    {
        int hasil = num1 - num2;
        printf("hasil dari %d dikurangi %d adalah %d", num1, num2, hasil);
    }
    
    else 
    {
        printf("fitur belum ada / error");
    }
}