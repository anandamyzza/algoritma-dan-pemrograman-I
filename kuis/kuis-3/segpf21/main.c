/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi KUIS 3 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int main(){

    /* Meminta user untuk masukan nilai baris Array of Integer */
    scanf("%d", &n);

    /* Variabel untuk menyimpan nilai segitiga (tipe terstruktur), nilai luas segitiga, dan nilai sisi miring segitiga */
    data segitiga[n];
    int luas[n];
    int miring[n];

    /* Meminta user untuk masukan 3 nilai dari sisi segitiga */
    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d", &segitiga[i].lenA, &segitiga[i].lenB, &segitiga[i].lenC);
    }

    /* Untuk memanggil fungsi */
    maxLuas(segitiga, luas);
    maxLen(segitiga, miring);

    /* Hasil keluaran akhir dari program */
    printf("%d %d\n", maxLuas(segitiga, luas), maxLen(segitiga, miring));

    return 0;
}