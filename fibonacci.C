```c
#include <stdio.h>
//DO NOT LAUGH AT MY CODE!!
//IF HANIF READ THIS AGAIN, REMEMBER YOU ARE THE ONE WHO WRIE THIS THING!   
int x = 0;
int y = 1;
   
int main(){
    printf("Putaran 1 = 0\n");// i dont know (untuk sekarang) cara buat loop dari 0
    printf("Putaran 2 dan 3 = 1\n"); //ini juga jadi manual aja, fixing ts sometimes
    int z = x + y; //z = 1
    int i = 2; //karena liat kesalahan ku, awal nya i 3 ku ganti i = 2, alasannya? :
    // i dont know 
    
    while (x <= 987){ // I DONT KNOW HOW TO DO TS FIXING TS TOO SOMETIMES

        x = y + z;
        i++;
        printf("putaran ke %d : %d\n", i, x); //putaran ke 4 = 2
        
        y = x + z;
        i++;
        printf("putaran ke %d : %d\n", i, y);//putaran ke 5 = 3

        z = x + y;
        i++;
        printf("putaran ke %d : %d\n", i, z);//putaran ke 6 = 5

    }
} // ntah kenapa sampe 987, it was a good number tho 
//urut juga ye kan dari 9 ke 8 then 7
//ye uh it work ga rapi dikit gapapa wok
```
