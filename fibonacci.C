#include <stdio.h>

int x = 0;
int y = 1;
//awal deret kan 0,1,1,2,3,5     
int main(){
    int z = x + y ; //loop 1 jadi nya z = 1
    x = y + z ;// x = 2
    y = x + z ;// y = 3
    
    while (x < 300){
    z = x + y ; //masuk sini ambil nilai tadi z = 5
    x = y + z ; //x = 8 
    y = x + z ; // y = 13, dan seterusnya sampe x < 300 jadi false 
    
    printf("%d\n", z);
    printf("%d\n", x);
    printf("%d\n", y);
    }
} // ntah kenapa sampe 987, it was a good number tho 
//urut juga ye kan dari 9 ke 8 then 7
//ye uh it work ga rapi dikit gapapa wok 