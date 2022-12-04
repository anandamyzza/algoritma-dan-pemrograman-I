/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan Evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int main(){

    /* Meminta masukan nilai n dari user (baris) */
    scanf("%d", &n);
    char str[n][200]; // Deklarasi variabel untuk menyimpan penggalan dialog.
    char symbolA, symbolB; // Deklarasi variabel untuk ':' dalam inputan jam menit detik.

    /* Meminta masukan dari user untuk penggalan dialog */
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    /* Meminta masukan user untuk durasi film */
    int jam, menit, detik;
    scanf("%d", &jam);
    while(symbolA != ':'){
        scanf(" %c", &symbolA);
    }
    scanf("%d", &menit);
    while(symbolB != ':'){
        scanf(" %c", &symbolB);
    }
    scanf("%d", &detik);

    /* Memanggil prosedur */
    divide(str, jam, menit, detik);

    return 0;
}