/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi KUIS 3 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>

/* Bungkusan untuk seluruh panjang sisi segitiga */
typedef struct{
    int lenA;
    int lenB;
    int lenC;
}data;

/* Integer global untuk membantu proses for dalam program */
int n, i, j;

// Fungsi untuk mencari nilai luas maximum.
int maxLuas(data segitiga[], int luas[]);
// Fungsi untuk mencari nilai miring maximum.
int maxLen(data segitiga[], int miring[]);