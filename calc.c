#include <stdio.h>
float num1;
float num2;
char operator ;
int main (void){
    printf("selamat datang di kalukalator sederhana\n");
    printf("massukan angka pertama\n");
    printf(">>>> ");
    scanf("%f", &num1);
    printf("Massukan angka ke 2\n");
    printf(">>>> ");
    scanf("%f", &num2);
    printf("Pilih operator (+, -, x, :)\n");
    printf(">>>> \n");
    scanf(" %c", &operator);

    if (operator == '+')
    {
        float hasil = num1 + num2;
        printf("hasil dari %.f ditambah %.f adalah %.f", num1, num2, hasil);
    }
    
    else if (operator == '-')
    {
        float hasil = num1 - num2;
        printf("hasil dari %.f dikurangi %.f adalah %.f", num1, num2, hasil);
    }
	else if (operator == 'x'|| operator == '*') // tanda || adalah tanda atau untuk beberapa bahasa
	{ // bisa saja menggunakna x atau * tergantung orangnya
		float hasil = num1 * num2;
		printf("hasil dari %.f dikali %.f adalah %.f", num1, num2, hasil);
    }
	else if (operator == ':' || operator == '/') // antisipasi menggunakan tanda / tergantung orangnya
	{
		float hasil = num1 / num2;
		printf("hasil dari %.f dibagi %.f adalah %.f", num1, num2, hasil);
	}
    else {
        printf("gunakan operator yang tepat");
    }
}