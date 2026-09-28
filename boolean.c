#include <stdio.h>
#include<stdbool.h>

int main(){
    bool isOnline = true;
    bool isOffline = false;

    if (isOnline){ //true karena nggak ada pembanding nilai 
        printf("Kamu online\n");//bentuk nya kan if (true){}begitu
    }
    else { //kebalikannya true apa? ya jelas false
        printf("kamu nggak online alias offline\n");
    }

    if (isOffline)//kalo true ya berati offline kan isoffline awikwok
    {
        printf("Kamu offline / tidak online\n");
    }
    else //kalo false berati online karena nge check nya is offline bukan online
    {
        printf("Kamu online!\n");
    }
    if (isOnline && isOffline || isOnline == false && isOffline == false)//jika nialinya sama ya 
    {
        printf("hah gimana maksudnya");//masa online dan offline di satu waktu yg bersamaan?
    }
}
