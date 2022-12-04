/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP10 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>

/* Integer global untuk membantu proses for dalam program */
int n, i, j, k;

// Prosedur untuk mencari total nilai yang dimiliki BobaBobi, Wanda, dan Natasha.
void value(char nameSus[][50], int numBobi[], int numWanda[], int numNatasha[], int total[]);
// Fungsi untuk mengurutkan nilai dari tercekil ke yang terbesar. (Mengembalikan nilai yang terkecil).
int orderNum1(char nameSus[][50], int total[]);
// Fungsi untuk mengurutkan nilai dari tercekil ke yang terbesar. (Mengembalikan nilai ke-dua).
int orderNum2(char nameSus[][50], int total[]);
// Fungsi untuk mengurutkan nilai dari tercekil ke yang terbesar. (Mengembalikan nilai yang terbesar).
int orderNum3(char nameSus[][50], int total[]);
// Prosedur untuk mengeluarkan hasil pengurutan.
void orderName(char nameSus[][50]);
// Prosedur untuk mencari mengeluarkan hasil enskripsi.
void encryptionResult(char nameSus[][50], int numBobi[], int numWanda[], int numNatasha[], int total[]);