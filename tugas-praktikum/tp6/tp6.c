/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP6 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

typedef struct{ //Deklarasi tipe data terstruktur.
    char foodCode; //Deklarasi char foodCode untuk menampung kode jenis makanan.
    int binary[8]; //Deklarasi integer biner dengan total 8 array untuk menampung kode biner yang berjumlah 8 angka.
    char foodName[50]; //Deklarasi char foodName dengan total 50 array untuk menampung nama makanan yang user input nanti.
    int sumTake; //Deklarasi integer sumTake untuk menjumlahkan total makanan yang akan diambil.
}bundle; //Nama tipe data terstruktur.

#include <stdio.h>
int main(){

    int n; //Deklarasi integer 'n' sebagai jumlah jenis makanan yang user input.
    int i, m, s, p; //Deklarasi integer 'i' (Indeks), 'm' untuk membantu inputan biner, 's' untuk membantu inputan nama makanan, dan 'p' untuk membantu syarat if penjumlahan huruf.
    char Alpha; //Deklarasi char Alpha atau huruf yang nanti user input sebagai kode makanan yang diambil.

    //Meminta user untuk inputan jumlah jenis makanan.
    scanf("%d", &n);

    int batas[n]; //Deklarasi int batas dengan array 'n' (sesuai dengan jumlah makanan yang user input). batas[n] berfungsi agar ';' tidak ikut ke print nanti.
    int start[n]; //Deklarasi int start dengan array 'n'. start[n] berfungsi sebagai 2 pangkat n untuk mencari nilai desimal dari 8 angka kode biner.
    int decimal[n]; //Deklarasi int decimal dengan array 'n'. decimal[n] berfungsi sebagai integer untuk menyimpan hasil desimal setelah di convert dari 8 angka kode biner.
    int sumAlpha[n]; //Deklarasi int sumAlpha dengan array 'n'. sumAlpha[n] berfungsi untuk menjumlahkan kode makanan yang diambil nanti.
    int total[n]; //Deklarasi total dengan array 'n'. total[n] berfungsi sebagai penampung untuk hasil dari pengurangan desimal dan jumlah makanan yang diambil nanti.
    bundle food[n]; //Deklarasi dari tipe data berstruktur 'bundle' dengan nama food yang memiliki array 'n'.

    for(i = 0; i < n; i++) //For looping sesuai dengan jumlah jenis makanan yang user input.
    {
        //Meminta user untuk inputan kode makanan.
        scanf(" %c", &food[i].foodCode);
        
        //Fungsi looping untuk kode biner.
        for(m = 0; m < 8; m++)
        {
            //Meminta user untuk inputan 8 angka kode biner.
            scanf("%d", &food[i].binary[m]);
        }

        //Fungsi convert biner ke desimal.
        start[i] = 1; //Inisialisasi start[i] = 1 agar tidak keluar angka random. Dan sebagai hasil dari 2^0 yang biner paling kiri miliki.
        decimal[i] = 0; //Inisialisasi decimal[i] = 0 agar jumlah desimal tidak keluar angka random.
        for(m = 7; m >= 0; m--) //For looping yang dimulai dari array ke-7 menuju ke-0 karena sifat biner yang terus bertambah +1 dalam pangkatnya dari kode biner sebelah kanan.
        {
            decimal[i] += food[i].binary[m] * start[i];
            start[i] *= 2; //start[i] dikalikan 2 sesuai dengan sifat biner.
        }

        //Fungsi untuk nama makanan.
        s = 0; //Inisialisasi s = 0 agar angka yang keluar tidak random.
        while((food[i].foodName[s-1] != ';')) //Fungsi while yang memiliki syarat akan berhenti jika inputan yang user input adalah ';'.
        {
            //Meminta user untuk inputan nama makanan.
            scanf(" %c", &food[i].foodName[s]);
            s++; //Iterasi while agar array food[i].foodName[s] bertambah 1 setiap user menginput huruf.
        }
        batas[i] = s - 1; //Deklarasi batas[i] yang isinya s - 1 agar saat nanti di print hasilnya ';' tidak akan keluar.

        //Meminta user untuk inputan pengambilan jumlah dalam sekali pengambilan.
        scanf("%d", &food[i].sumTake);
        sumAlpha[i] = 0; //Inisialisasi sumAlpha[i] = 0 agar tidak keluar angka random.
    }
    
    //input nilai jika makanan ingin dikurangi
    p = 0; //Inisialisasi p = 0 agar tidak keluar angka random.
    while(Alpha != '*') //Fungsi while yang memiliki syarat akan berhenti jika inputan yang user input adalah '*'.
    {
        //Meminta user untuk inputan kode makanan yang akan diambil.
        scanf(" %c", &Alpha);
        for(i = 0; i < n; i++) //For looping untuk membantu menghitung jumlah kode makanan yang akan diambil.
        {
            if(Alpha == food[i].foodCode) //Syarat if yang masuk apabila huruf sama dengan kode makanan yang diambil.
            {
                sumAlpha[i] += 1; //sumAlpha yang bertambah 1 apabila huruf sama dengan kode makanan yang diambil.
                p = 1; // p = 1 yang masuk ke syarat if untuk membantu syarat if penjumlahan huruf nanti (Line 104 dan 108).
            }
        }
    }

    //Fungsi pengurangan untuk mencari jumlah makanan.
    total[i] = 0; //Inisialisasi total[i] = 0 agar total tidak keluar angka random.
    for(i = 0; i < n; i++) //For looping untuk membantu menjumlahkan banyak makanan setelah diambil.
    {
        sumAlpha[i] *= food[i].sumTake; //Jumlah huruf dikalikan dengan jumlah satu kali pengambilan.
        total[i] = decimal[i] - sumAlpha[i]; //Total yang merupangan pengurangan desimal dengan hasil sumAlpha yang sudah dikali dengan sumTake.
        if(total[i] < 0) //Syarat apabila total bernilai negatif
        {
            total[i] = 0; //Maka akan di inisialisasikan menjadi 0.
        }
    }

    //Hasil print stok makanan awal.
    printf("Stok Makanan Awal\n");
    for(i = 0; i < n; i++) //For looping untuk membantu mengeluarkan hasil print stok makanan awal.
    {
        printf("- %c ", food[i].foodCode); //Mengeluarkan hasil kode makanan.
        for(s = 0; s < batas[i]; s++) //For looping untuk membantu mengeluarkan hasil print nama makanan dan akan berhenti sebelum mencapai batas[i].
        {
            printf("%c", food[i].foodName[s]); //Mengeluarkan hasil nama makanan.
        }
        printf(" %d\n", decimal[i]); //Mengeluarkan hasil convert biner ke desimal.
    }
    
    if(p == 0) //If syarat, jika p == 0.
    {
        printf("\n---Stok Tetap---\n"); //Maka akan keluar hasil print stok tetap.
    }
    else if(p == 1) //Namun apabila p == 1.
    {
        printf("\nStok Makanan Update\n"); //Maka akan keluar hasil print stok makanan update.
        for(i = 0; i < n; i++)
        {
            printf("- %c ", food[i].foodCode);
            for(s = 0; s < batas[i]; s++)
            {
                printf("%c", food[i].foodName[s]);
            }
            printf(" %d\n", total[i]); //Mengeluarkan hasil total pengurangan desimal dengan jumlah makanan yang diambil.
        }
    }

    return 0;
}