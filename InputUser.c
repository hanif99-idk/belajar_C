#include <stdio.h>
#include <string.h>

int main(){
    
    int age = 0 ;  //menghindari error 
    float gpa = 0.0f; //kalo gak dikasih nilai bisa ada "undefined behavior", f disini ngasih tau itu float
    char grade = '\0'; //tujuan disini sebenernya itu fgets sama getchar + string.h
    char name [30] = "" ;
    
    printf("enter your age: ");
    scanf("%d", &age);
    
    printf("enter your gpa: ");
    scanf("%f", &gpa); //ini kena input buffer
    
    printf("enter your grade (A/B/C/D): ");
    scanf(" %c", &grade); // kasih spasi di "%c" menjadi " %c" shortcut buat ilangin input buffer
    
    getchar(); //juga menghilangkan input buffer
    printf("enter your full name: ");
    //scanf("%s", &name); scanf tidak bisa mendeteck spasi 
    fgets(name, sizeof(name), stdin); //so we use this, fgets = file get string , kena input buffer lagi
    name[strlen(name) - 1 ] = '\0'; // namamu/0. gitu hasilnya tpi gak dibaca karena \0
    
    printf("%d\n", age);
    printf("%.2f\n ", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
    
    return 0;
}

//dibaris 23, sizeof() itu function untuk menghitung  banyak e slot yg ada (keknya)
//stdin itu standart input

//baris 24, aku juga belum paham, its unnecessary tho 