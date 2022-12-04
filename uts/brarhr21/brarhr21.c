/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi UTS dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
int main(){

    int n, i; //Deklarasi integer n untuk jumlah array huruf dan i untuk indeks for nanti.
    scanf("%d", &n); //Scanf untuk inputan n sesuai yang user inginkan.
    char huruf[n]; //Deklarasi huruf yang jumlah array-nya sesuai dengan jumlah n.

    for(i = 0; i < n; i++) //Looping dari fungsi for untuk mengisi array huruf.
    {
        scanf(" %c", &huruf[i]);
    }

    int awal, akhir; //Deklarasi awal dan akhir untuk menentukan range dari array huruf[n]
    scanf("%d%d", &awal, &akhir); //Scanf inputan range sesuai dengan yang user inginkan.

    int m; //Deklarasi integer m untuk menentukan berapa jumlah huruf yang ingin dijumlah.
    scanf("%d", &m); //Scanf inputan m sesuai dengan yang user inginkan
    char alpha[m]; //Membuat char array baru untuk mengelompokan alphabet/huruf yang jumlahnya sama.

    for(i = 0; i < m; i++) //Looping dari fungsi for untuk mengisi array alphabet yang akan dicari jumlah samanya.
    {
        scanf(" %c", &alpha[i]);
    }

    int x, y; //Deklarasi x dan y untuk membantu memudahkan Looping for.
    int alphaedan[m]; //Deklarasi array baru alphaedan untuk membantu penjumlahan huruf yang sama.

    for(y = 0; y < m; y++) //Fungsi for untuk mendeklarasikan nilai array alphaedan[y] adalah 0, agar nanti nilainya dapat dijumlahkan.
    {
        alphaedan[y] = 0;
    }

    for(x = awal; x <= akhir; x++) //Fungsi Looping for x untuk menentukan range di for sesuai yang user input di scanf awal-akhir tadi.
    {
        for(y = 0; y < m; y++) //Fungsi Looping for untuk me-Looping range array alpha m yang user input.
        {
            if(alpha[y] == huruf[x]) //Syarat apabila isi dari huruf array alpha[y] sama dengan huruf[x].
            {
                alphaedan[y] += 1; //Nilai alphaedan[y] ditambah 1 setiap huruf inputan array nya berhuruf sama.
            }
        }
    }

    printf("%d", alphaedan[0]); //Menunjukan hasil dari array di kotak pertama [0] agar hasil printf tidak ada spasi diakhir.
    for(y = 1; y < m; y++) //Fungsi untuk looping hasil jumlah huruf yang sama.
    {
        printf(" %d", alphaedan[y]);
    }
    printf("\n"); //Membuat line baru.

    return 0;
}