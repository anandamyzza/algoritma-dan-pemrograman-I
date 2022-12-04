/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP3 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>

//Typedef struct yang berfungsi untuk menampung koordinat x dan y.
typedef struct{
    int x;
    int y;
}koordinat;

int main(){

    //Deklarasi variabel kodeK dan satuan untuk menentukan Kuadran dan p untuk Persen Luas Segitiga.
    int kodeK, p;
    int satuan;
    //Deklarasi variabel a, b, dan c di tipe data koordinat untuk mencari nilai segitiga di grafik kartesius.
    koordinat a, b, c;

    //Membuat 8 input variabel sesuai dengan soal yang diberikan.
    scanf("%d %d %d %d %d %d %d %d", &kodeK, &a.x, &a.y, &b.x, &b.y, &c.x, &c.y, &p);

    //Fungsi untuk menentukan angka terakhir dari kodeK.
    satuan = kodeK % 10;

    //Deklarasi variabel untuk mencari luas segitiga dan luas x% dari segitiga.
    float luasSgtg;
    float luasP;

    //Fungsi aritmetika untuk mencari nilai luas segitiga dan luas x% dari segitiga.
    luasSgtg = (b.x - c.x) * (a.y - b.y) * 0.5;
    luasP = luasSgtg * p / 100;

        //Fungsi switch untuk menentukan apakah segitiga yang di input memiliki bayangan apa tidak, beserta posisi bayangan segitiga tsb.
        switch(satuan)
        {
        case 1:
            //Fungsi if untuk mencari refleksi segitiga di ke-4 Kuadran dari Kuadran I
            if(a.x>0 && b.x>0 && c.x>0 && a.y>0 && b.y>0 && c.y>0) //Mencari refleksi segitiga Kuadran I di Kuadran I
            {
                printf("A: %d, %d\n", a.x, a.y);
                printf("B: %d, %d\n", b.x, b.y);
                printf("C: %d, %d\n", c.x, c.y);
            }
            else if(a.x<0 && b.x<0 && c.x<0 && a.y>0 && b.y>0 && c.y>0) //Mencari refleksi segitiga Kuadran I di Kuadran II
            {
                printf("A: %d, %d\n", a.x * -1, a.y);
                printf("B: %d, %d\n", b.x * -1, b.y);
                printf("C: %d, %d\n", c.x * -1, c.y);
            }
            else if(a.x<0 && b.x<0 && c.x<0 && a.y<0 && b.y<0 && c.y<0) //Mencari refleksi segitiga Kuadran I di Kuadran III
            {
                printf("A: %d, %d\n", a.x * -1, a.y * -1);
                printf("B: %d, %d\n", b.x * -1, b.y * -1);
                printf("C: %d, %d\n", c.x * -1, c.y * -1);
            }
            else if(a.x>0 && b.x>0 && c.x>0 && a.y<0 && b.y<0 && c.y<0) //Mencari refleksi segitiga Kuadran I di Kuadran IV
            {
                printf("A: %d, %d\n", a.x, a.y * -1);
                printf("B: %d, %d\n", b.x, b.y * -1);
                printf("C: %d, %d\n", c.x, c.y * -1);
            }
            else //Fungsi apabila refleksi segitiga di ke-4 Kuadran dan nilai yang di input tidak valid.
            {
                printf("Kuadran tidak valid!\n");
                printf("A: %d, %d\n", a.x, a.y);
                printf("B: %d, %d\n", b.x, b.y);
                printf("C: %d, %d\n", c.x, c.y);
            }
            break;
        case 2:
            //Fungsi if untuk mencari refleksi segitiga di ke-4 Kuadran dari Kuadran II
            if(a.x>0 && b.x>0 && c.x>0 && a.y>0 && b.y>0 && c.y>0) //Mencari refleksi segitiga Kuadran II di Kuadran I
            {
                printf("A: %d, %d\n", a.x * -1, a.y);
                printf("B: %d, %d\n", b.x * -1, b.y);
                printf("C: %d, %d\n", c.x * -1, c.y);
            }
            else if(a.x<0 && b.x<0 && c.x<0 && a.y>0 && b.y>0 && c.y>0) //Mencari refleksi segitiga Kuadran II di Kuadran II
            {
                printf("A: %d, %d\n", a.x, a.y);
                printf("B: %d, %d\n", b.x, b.y);
                printf("C: %d, %d\n", c.x, c.y);
            }
            else if(a.x<0 && b.x<0 && c.x<0 && a.y<0 && b.y<0 && c.y<0) //Mencari refleksi segitiga Kuadran II di Kuadran III
            {
                printf("A: %d, %d\n", a.x, a.y * -1);
                printf("B: %d, %d\n", b.x, b.y * -1);
                printf("C: %d, %d\n", c.x, c.y * -1);
            }
            else if(a.x>0 && b.x>0 && c.x>0 && a.y<0 && b.y<0 && c.y<0) //Mencari refleksi segitiga Kuadran II di Kuadran IV
            {
                printf("A: %d, %d\n", a.x * -1, a.y * -1);
                printf("B: %d, %d\n", b.x * -1, b.y * -1);
                printf("C: %d, %d\n", c.x * -1, c.y * -1);
            }
            else //Fungsi apabila refleksi segitiga di ke-4 Kuadran dan nilai yang di input tidak valid.
            {
                printf("Kuadran tidak valid!\n");
                printf("A: %d, %d\n", a.x, a.y);
                printf("B: %d, %d\n", b.x, b.y);
                printf("C: %d, %d\n", c.x, c.y);
            }
            break;
        case 3:
            //Fungsi if untuk mencari refleksi segitiga di ke-4 Kuadran dari Kuadran III
            if(a.x>0 && b.x>0 && c.x>0 && a.y>0 && b.y>0 && c.y>0) //Mencari refleksi segitiga Kuadran III di Kuadran I
            {
                printf("A: %d, %d\n", a.x * -1, a.y * -1);
                printf("B: %d, %d\n", b.x * -1, b.y * -1);
                printf("C: %d, %d\n", c.x * -1, c.y * -1);
            }
            else if(a.x<0 && b.x<0 && c.x<0 && a.y>0 && b.y>0 && c.y>0) //Mencari refleksi segitiga Kuadran III di Kuadran II
            {
                printf("A: %d, %d\n", a.x, a.y * -1);
                printf("B: %d, %d\n", b.x, b.y * -1);
                printf("C: %d, %d\n", c.x, c.y * -1);
            }
            else if(a.x<0 && b.x<0 && c.x<0 && a.y<0 && b.y<0 && c.y<0) //Mencari refleksi segitiga Kuadran III di Kuadran III
            {
                printf("A: %d, %d\n", a.x, a.y);
                printf("B: %d, %d\n", b.x, b.y);
                printf("C: %d, %d\n", c.x, c.y);
            }
            else if(a.x>0 && b.x>0 && c.x>0 && a.y<0 && b.y<0 && c.y<0) //Mencari refleksi segitiga Kuadran III di Kuadran IV
            {
                printf("A: %d, %d\n", a.x * -1, a.y);
                printf("B: %d, %d\n", b.x * -1, b.y);
                printf("C: %d, %d\n", c.x * -1, c.y);
            }
            else //Fungsi apabila refleksi segitiga di ke-4 Kuadran dan nilai yang di input tidak valid.
            {
                printf("Kuadran tidak valid!\n");
                printf("A: %d, %d\n", a.x, a.y);
                printf("B: %d, %d\n", b.x, b.y);
                printf("C: %d, %d\n", c.x, c.y);
            }
            break;
        case 4:
            //Fungsi if untuk mencari refleksi segitiga di ke-4 Kuadran dari Kuadran IV
            if(a.x>0 && b.x>0 && c.x>0 && a.y>0 && b.y>0 && c.y>0) //Mencari refleksi segitiga Kuadran IV di Kuadran I
            {
                printf("A: %d, %d\n", a.x, a.y * -1);
                printf("B: %d, %d\n", b.x, b.y * -1);
                printf("C: %d, %d\n", c.x, c.y * -1);
            }
            else if(a.x<0 && b.x<0 && c.x<0 && a.y>0 && b.y>0 && c.y>0) //Mencari refleksi segitiga Kuadran IV di Kuadran II
            {
                printf("A: %d, %d\n", a.x * -1, a.y * -1);
                printf("B: %d, %d\n", b.x * -1, b.y * -1);
                printf("C: %d, %d\n", c.x * -1, c.y * -1);
            }
            else if(a.x<0 && b.x<0 && c.x<0 && a.y<0 && b.y<0 && c.y<0) //Mencari refleksi segitiga Kuadran IV di Kuadran III
            {
                printf("A: %d, %d\n", a.x * -1, a.y);
                printf("B: %d, %d\n", b.x * -1, b.y);
                printf("C: %d, %d\n", c.x * -1, c.y);
            }
            else if(a.x>0 && b.x>0 && c.x>0 && a.y<0 && b.y<0 && c.y<0) //Mencari refleksi segitiga Kuadran IV di Kuadran IV
            {
                printf("A: %d, %d\n", a.x, a.y);
                printf("B: %d, %d\n", b.x, b.y);
                printf("C: %d, %d\n", c.x, c.y);
            }
            else //Fungsi apabila refleksi segitiga di ke-4 Kuadran dan nilai yang di input tidak valid.
            {
                printf("Kuadran tidak valid!\n");
                printf("A: %d, %d\n", a.x, a.y);
                printf("B: %d, %d\n", b.x, b.y);
                printf("C: %d, %d\n", c.x, c.y);
            }
            break;
        default:
            //Fungsi switch apabila refleksi segitiga di ke-4 Kuadran dan nilai yang di input tidak valid.
            printf("Kuadran tidak valid!\n");
            printf("A: %d, %d\n", a.x, a.y);
            printf("B: %d, %d\n", b.x, b.y);
            printf("C: %d, %d\n", c.x, c.y);
            break;
        }
    
    //Fungsi if untuk menentukan apakah luas segitiga bernilai negatif apa tidak.
    //Apabila negatif, maka akan dikali -1 agar hasilnya positif.
    //Beserta hasil keluaran dari luas segitiga beserta luas x% segitiga tersebut.
    if(luasSgtg < 0)
    {
        printf("Luas: %.2fcm2\n", luasSgtg * -1);
        printf("Luas %d%%: %.2fcm2\n", p, luasP * -1);
    }
    else if(luasSgtg > 0)
    {
        printf("Luas: %.2fcm2\n", luasSgtg);
        printf("Luas %d%%: %.2fcm2\n", p, luasP);
    }

    return 0;
}