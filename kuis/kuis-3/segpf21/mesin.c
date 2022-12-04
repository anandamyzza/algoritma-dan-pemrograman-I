/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi KUIS 3 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int maxLuas(data segitiga[], int luas[])
{
    int maxL = -99; // Deklarasi variabel maxL untuk menyimpan dan mencari nilai tertinggi dari seluruh nilai segitiga.
                    // Dideklarasikan -99 agar tidak terjadi error saat mencari nilai maksimumnya.
    /* Perulangan untuk menghitung luas segitiga */
    for(i = 0; i < n; i++)
    {
        luas[i] = 0; // Deklarasi nilai luas array of integer = 0 agar nilai yang dihasilkan tidak random.

        // Diperiksa apabila panjang segitiga panjang A merupakan sisi segitiga terpanjang.
        if(segitiga[i].lenA > segitiga[i].lenB && segitiga[i].lenA > segitiga[i].lenC)
        {
            // Rumus luas segitiga dengan sisi B dan C merupakan alas dan tinggi.
            luas[i] = (segitiga[i].lenB * segitiga[i].lenC / 2);
        }
        // Diperiksa apabila panjang segitiga panjang B merupakan sisi segitiga terpanjang.
        else if(segitiga[i].lenB > segitiga[i].lenA && segitiga[i].lenB > segitiga[i].lenC)
        {
            // Rumus luas segitiga dengan sisi A dan C merupakan alas dan tinggi.
            luas[i] = (segitiga[i].lenA * segitiga[i].lenC / 2);
        }
        // Diperiksa apabila panjang segitiga panjang C merupakan sisi segitiga terpanjang.
        else if(segitiga[i].lenC > segitiga[i].lenA && segitiga[i].lenC > segitiga[i].lenB)
        {
            // Rumus luas segitiga dengan sisi A dan B merupakan alas dan tinggi.
            luas[i] = (segitiga[i].lenA * segitiga[i].lenB / 2);
        }
        
        /* Permisalan untuk mencari nilai maksimum dari seluruh luas segitiga */
        if(luas[i] > maxL)
        {
            maxL = luas[i];
        }
    }

    /* Mengembalikan nilai luas */
    return maxL;
}

int maxLen(data segitiga[], int miring[])
{
    int maxM = -99; // Deklarasi variabel maxM untuk menyimpan dan mencari nilai tertinggi dari seluruh sisi miring segitiga.
                    // Dideklarasikan -99 agar tidak terjadi error saat mencari nilai maksimumnya.
    /* Perulangan untuk mencari sisi miring segitiga */
    for(i = 0; i < n; i++)
    {
        miring[i] = 0; // Deklarasi nilai sisi miring array of integer = 0 agar nilai yang dihasilkan tidak random.

        // Diperiksa apabila panjang segitiga panjang A merupakan sisi segitiga terpanjang.
        if(segitiga[i].lenA > segitiga[i].lenB && segitiga[i].lenA > segitiga[i].lenC)
        {
            // Menyimpan nilai sisi miring segitiga dari panjang A ke array of integer miring[i].
            miring[i] = segitiga[i].lenA;
        }
        // Diperiksa apabila panjang segitiga panjang B merupakan sisi segitiga terpanjang.
        else if(segitiga[i].lenB > segitiga[i].lenA && segitiga[i].lenB > segitiga[i].lenC)
        {
            // Menyimpan nilai sisi miring segitiga dari panjang B ke array of integer miring[i].
            miring[i] = segitiga[i].lenB;
        }
        // Diperiksa apabila panjang segitiga panjang C merupakan sisi segitiga terpanjang.
        else if(segitiga[i].lenC > segitiga[i].lenA && segitiga[i].lenC > segitiga[i].lenB)
        {
            // Menyimpan nilai sisi miring segitiga dari panjang C ke array of integer miring[i].
            miring[i] = segitiga[i].lenC;
        }

        /* Permisalan untuk mencari nilai maksimum dari seluruh sisi miring segitiga */
        if(miring[i] > maxM)
        {
            maxM = miring[i];
        }
    }

    /* Mengembalikan nilai sisi miring */
    return maxM;
}