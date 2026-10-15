#include <stdio.h>

int main()
{
	char anggotaKeluarga [10];
	char tempat [10];
	char buah [10];
	char kataHubung[10];
	
	printf("Massukan salah satu jenis anggota keluarga: \n");
	scanf("%s", &anggotaKeluarga);
	printf("Massukan tempat (contoh, kota, kantor, desa): \n");
	scanf("%s", &tempat);
	printf("Massukan nama buah: \n");
	scanf("%s", &buah);
	printf("Massukan kata hubung: \n");
	scanf("%s", &kataHubung);
	
	printf("Kemarin %s datang\n", anggotaKeluarga);
	printf("Pamanku dari %s }\n", tempat);
	printf("Dibawakannya %s , pisang\n", buah);
	printf("%s sayur-mayur segala rupa\n", kataHubung);
}