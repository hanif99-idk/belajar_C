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
    printf("Pilih operator (+, -, x, :)\n");
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
	else if (operator == 'x'|| operator == '*') // tanda || adalah tanda atau untuk beberapa bahasa
	{ // bisa saja menggunakna x atau * tergantung orangnya
		int hasil = num1 * num2; //menggunakan tanda petik / snowflake untuk perkalian
		printf("hasil dari %d dikali %d adalah %d", num1, num2, hasil);
    }
	else if (operator == ':' || operator == '/') // antisipasi menggunakan tanda / tergantung orangnya
	{
		int hasil = num1 / num2; //tanda atau/ garis miring untuk pembagian
		printf("hasil dari %d dibagi %d adalah %d", num1, num2, hasil);
	}
    else 
    {
        printf("gunakan operator yang tepat");
    }
}