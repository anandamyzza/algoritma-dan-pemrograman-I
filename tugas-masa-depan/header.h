/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>

/* Integer global */
int n; // Integer untuk menampung nilai ketebalan.
int i, j, k, l; // Integer untuk membantu proses for dalam program.

/* Prosedur dan fungsi untuk proses seluruh program */
// Prosedur untuk memisahkan satuan, puluhan, dan ratusan. Serta mencari Indeks ratusan dan puluhan.
void unit(char main[], int ascii[], int divide[], int indeks[]);
// Fungsi untuk mencari nilai panjang dari array of integer ASCII inputan user.
int len(char main[], int ascii[]);
// Prosedur untuk mengeluarkan hasil print dari baris ke-1 pola ASCII.
void lineA(char main[], int divide[], int indeks[], int batas);
// Prosedur untuk mengeluarkan hasil print dari baris ke-2 pola ASCII.
void lineB(char main[], int divide[], int indeks[], int batas);
// Prosedur untuk mengeluarkan hasil print dari baris ke-3 pola ASCII.
void lineC(char main[], int divide[], int indeks[], int batas);
// Prosedur untuk mengeluarkan hasil print dari baris ke-4 pola ASCII.
void lineD(char main[], int divide[], int indeks[], int batas);
// Prosedur untuk mengeluarkan hasil print dari baris ke-5 pola ASCII.
void lineE(char main[], int divide[], int indeks[], int batas);