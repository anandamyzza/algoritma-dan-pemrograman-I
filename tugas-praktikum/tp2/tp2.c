/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP2 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
int main(){

//Deklarasi untuk 6 variabel char dan 1 variabel int dan 2 int pembantu
    char a, b, c, d, e, f;
    int angka, hV, hK;
    hV = 0; //Int untuk membantu perhitungan total huruf vokal
    hK = 0; //Int untuk membantu perhitungan total huruf konsonan

//Membuat 6 input variabel char dan 1 variabel int melalui scanf
    scanf(" %c", &a);
    scanf(" %c", &b);
    scanf(" %c", &c);
    scanf(" %c", &d);
    scanf(" %c", &e);
    scanf(" %c", &f);
    scanf("%d", &angka);

//Membuat 'If' untuk mengkatergorikan apakah input char yang dimasukan adalah huruf vokal atau konsonan.
if((a == 'A') || (a == 'I') || (a == 'U') || (a == 'E') || (a == 'O')){
    hV += 1;
}else{
    hK += 1;
}

if((b == 'A') || (b == 'I') || (b == 'U') || (b == 'E') || (b == 'O')){
    hV += 1;
}else{
    hK += 1;
}

if((c == 'A') || (c == 'I') || (c == 'U') || (c == 'E') || (c == 'O')){
    hV += 1;
}else{
    hK += 1;
}

if((d == 'A') || (d == 'I') || (d == 'U') || (d == 'E') || (d == 'O')){
    hV += 1;
}else{
    hK += 1;
}

if((e == 'A') || (e == 'I') || (e == 'U') || (e == 'E') || (e == 'O')){
    hV += 1;
}else{
    hK += 1;
}

if((f == 'A') || (f == 'I') || (f == 'U') || (f == 'E') || (f == 'O')){
    hV += 1;
}else{
    hK += 1;
}

//Memasukan ke-4 syarat yang sudah disebutkan di dalam soal.
if((hV == hK) && (angka%2 == 0))
{
    printf("Riddle Stone Acquired! Everybody comes home\n");
}else if ((hV > hK) && (angka%2 != 0))
{
    printf("Riddle Stone Acquired! Everybody comes home\n");
}else if ((hK > hV) && (angka == 0))
{
    printf("Riddle Stone Acquired! Everybody comes home\n");
}else
{
    printf("You are unworthy, for you cannot riddle me\n");
}

    return 0;
}