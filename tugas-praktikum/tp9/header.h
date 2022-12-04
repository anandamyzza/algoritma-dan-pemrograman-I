/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP9 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>

/* Integer global untuk membantu proses for dalam program */
int n, i, j, k;

// Prosedur untuk mencari nilai kekuatan Boss.
void powerBoss(char strBoss[], int *asciiBoss);
// Prosedur untuk mencari nilai kekuatan Karakter.
void powerSub(char elementSub[][51], char strSub[][51], int asciiSub[], char elementBoss[]);
// Prosedur untuk mengeluarkan hasil dari program.
void result(char nameSub[][51], int asciiSub[], int asciiBoss);