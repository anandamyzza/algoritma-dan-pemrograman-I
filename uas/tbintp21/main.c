/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan UAS dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int main(){

    /* Meminta nilai n dari user */
    scanf("%d", &n);
    data value[n]; // Deklarasi variabel bungkusan.

    /* Pengulangan untuk meminta 4 nilai per baris dari user */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &value[i].mark[j]);
        }
    }

    /* Memanggil prosedur */
    amount(value);

    return 0;
}