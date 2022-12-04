/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP9 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int main(){

    /* Meminta inputan user untuk data Boss */
    char nameBoss[51], elementBoss[51], strBoss[51]; // strBoss = Strength Boss.
    scanf("%s %s %s", nameBoss, elementBoss, strBoss);

    /* Meminta inputan user untuk banyak jumlah Karakter */
    scanf("%d", &n);

    /* Meminta inputan user untuk data Karakter */
    char nameSub[n][51], elementSub[n][51], strSub[n][51]; // strSub = Strength Sub.
    for(i = 0; i < n; i++)                                 // Sub = Karakter.
    {
        scanf("%s %s %s", nameSub[i], elementSub[i], strSub[i]);
    }

    /* Integer lokal untuk membantu proses mencari kekuatan Boss dan Karakter */
    int asciiBoss = 0;
    int asciiSub[n];

    /* Untuk memanggil prosedur */
    powerBoss(strBoss, &asciiBoss);
    powerSub(elementSub, strSub, asciiSub, elementBoss);
    result(nameSub, asciiSub, asciiBoss);

    return 0;
}