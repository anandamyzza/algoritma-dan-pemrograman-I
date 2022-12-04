/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi KUIS 3 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int main(){

    /* Meminta user untuk masukan baris Array of String */
    scanf("%d", &n);
    // Deklarasi char main untuk menampung kata yang user input.
    char main[n][51];

    /* Meminta user untuk masukan kata Array of String */
    for(i = 0; i < n; i++)
    {
        scanf("%s", main[i]);
    }

    /* Untuk memanggil prosedur */
    sentence(main);

    return 0;
}