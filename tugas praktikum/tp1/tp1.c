/*Saya Ananda Myzza Marhelio NIM 2100702
mengerjakan evaluasi TP1 dalam mata kuliah
Algoritma dan Pemrograman 1 untuk
keberkahanNya maka saya tidak melakukan
kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

#include <stdio.h> //File header untuk standar input dan output yang mengandung deklarasi 'printf' dan 'scanf'.
int main(){ //Fungsi utama program yang akan dieksekusi pertamakali saat program dijalankan.

    int n, m, s; //Deklarasi untuk variabel; jumlah pakaian, menit, dan detik pengerjaan.
    scanf("%d", &n); //Input nilai untuk n = Jumlah Pakaian.
    scanf("%d", &m); //Input nilai untuk m = Menit Pengerjaan.
    scanf("%d", &s); //Input nilai untuk s = Detik Pengerjaan.

    int detikM = m * 60; //Deklarasi variabel untuk mencari berapa detik menit yang di input.
    int totalS = detikM + s; //Deklarasi variabel untuk mencari total detik dari penjumlahan detikM dan s.
    int Hasil1 = n * totalS; //Deklarasi variabel untuk mencari total berapa lama Wanda menjahit tanpa waktu istirahat (Dalam detik).
    int jumlahIstirahat = Hasil1 / 2400; //Deklarasi variabel berapa banyak Wanda beristirahat selama proses menjahit.
    int detikIstirahat = jumlahIstirahat * 300; //Deklarasi variabel berapa banyak waktu istirahat Wanda dalam detik.
    int totalDetik = Hasil1 + detikIstirahat; //Deklarasi variabel total keseluruhan waktu Wanda menjahit (Waktu menjahit dan waktu istirahat) dalam detik.
    int Jam = totalDetik / 3600; //Deklarasi variabel untuk mencari total Jam Wanda menjahit.
    int jamM = totalDetik % 3600; //Deklarasi variabel untuk mencari modulus Detik yang tersisa dari Jam.
    int Menit = jamM / 60; //Deklarasi variabel untuk mencari total Menit Wanda menjahit.
    int Detik = jamM % 60; //Deklarasi variabel untuk mencari total Detik Wanda menjahit.

    printf("Waktu istirahat      : %d kali\n", jumlahIstirahat); //Fungsi yang menampilkan data Jumlah Wanda beristirahat.
    printf("Total waktu menjahit : %d jam, %d menit, %d detik\n", Jam, Menit, Detik); //Fungsi yang menampilkan total waktu Wanda menjahit.

    return 0; //Menyatakan hasil keluaran dari fungsi main() adalah 0.
}