/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP9 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

void powerBoss(char strBoss[], int *asciiBoss)
{
    /* Memisahkan nama jurus Boss yang dipisahkan oleh '_' */
    int sumsideBoss, summainBoss; // Integer untuk membantu proses mencari total kekuatan Boss.
    char strmainBoss[51], strsideBoss[51]; // Char untuk membantu proses pemisahan kata jurus Boss.

    // Mengcopy kata pertama jurus Boss dari string utama.
    i = 0;
    j = 0;
    do{
        strmainBoss[j] = strBoss[i];
        i++;
        j++;
    }while(strBoss[i] != '_');
    strmainBoss[j] = '\0';
    
    // Mengcopy kata kedua jurus Boss dari string utama.
    i++;
    j = 0;
    do{
        strsideBoss[j] = strBoss[i];
        i++;
        j++;
    }while(strBoss[i] != '\0');
    strsideBoss[j] = '\0';

    /* Menghitung total kekuatan Boss */
    sumsideBoss = 0;
    summainBoss = 0;

    // Menjumlahkan jumlah ASCII dari kata_1 dan kata_2 dalam jurus Boss.
    for(i = 0; i < strlen(strsideBoss); i++)
    {
        sumsideBoss += strsideBoss[i];
    }
    for(i = 0; i < strlen(strmainBoss); i++)
    {
        summainBoss += strmainBoss[i];
    }

    // Rumus total kekuatan Boss.
    sumsideBoss /= strlen(strsideBoss);
    *asciiBoss = summainBoss - sumsideBoss;

    // Permisalan apabila kekuatan Boss negatif.
    if(*asciiBoss < 0)
    {
        *asciiBoss *= -1;
    }
}

void powerSub(char elementSub[][51], char strSub[][51], int asciiSub[], char elementBoss[])
{
    /* Memisahkan nama jurus Karakter yang dipisahkan oleh '_' */
    int sumsideSub, summainSub, helper[n]; // Integer untuk membantu proses mencari total kekuatan Karakter.
    char strmainSub[n][51], strsideSub[n][51]; // Char untuk membantu proses pemisahan kata jurus Karakter.
    char elementAL[51], elementIL[n][51]; // Char untuk membantu proses Ketentuan Elemen.

    // Menggunakan perulangan karena Karakter merupakan Array of String.
    for(i = 0; i < n; i++)
    {
        // Mengcopy kata pertama jurus Karakter dari string utama.
        j = 0;
        k = 0;
        do{
            strmainSub[i][j] = strSub[i][k];
            k++;
            j++;
        }while(strSub[i][k] != '_');
        strmainSub[i][j] = '\0';

        // Mengcopy kata kedua jurus Karakter dari string utama.
        k++;
        j = 0;
        do{
            strsideSub[i][j] = strSub[i][k];
            k++;
            j++;
        }while(strSub[i][k] != '\0');
        strsideSub[i][j] = '\0'; 
    }
    
    /* Menghitung total kekuatan Karakter per Array of String */
    for(i = 0; i < n; i++)
    {
        asciiSub[i] = 0;
        summainSub = 0;
        sumsideSub = 0;

        // Menjumlahkan jumlah ASCII dari kata_1 dan kata_2 dalam jurus Karakter.
        for(j = 0; j < strlen(strmainSub[i]); j++)
        {
            summainSub += strmainSub[i][j];
        }
        for(j = 0; j < strlen(strsideSub[i]); j++)
        {
            sumsideSub += strsideSub[i][j];
        }

        // Rumus total kekuatan Karakter sebelum diberi Ketentuan Elemen.
        sumsideSub /= strlen(strsideSub[i]);
        asciiSub[i] = summainSub - sumsideSub;
    }

    // Permisalan apabila kekuatan Karakter negatif.
    for(i = 0; i < n; i++)
    {
        if(asciiSub[i] < 0)
        {
            asciiSub[i] *= -1;
        }
    }

    /* Ketentuan Elemen */
    // String compare untuk memastikan bahwa Elemen Boss sudah benar.
    if(strcmp(elementBoss, "Fire") == 0)
    {
        elementAL[0] = 'F';
        elementAL[1] = '\0';
    }
    else if(strcmp(elementBoss, "Wind") == 0)
    {
        elementAL[0] = 'W';
        elementAL[1] = '\0';
    }
    else if(strcmp(elementBoss, "Lightning") == 0)
    {
        elementAL[0] = 'L';
        elementAL[1] = '\0';
    }
    else if(strcmp(elementBoss, "Earth") == 0)
    {
        elementAL[0] = 'E';
        elementAL[1] = '\0';
    }
    else if(strcmp(elementBoss, "Water") == 0)
    {
        elementAL[0] = 'w';
        elementAL[1] = '\0';
    } // Diberi '\0' agar menjadi sebuah string.

    // String compare untuk memastikan bahwa Elemen Karakter sudah benar.
    for(i = 0; i < n; i++)
    {
        if(strcmp(elementSub[i], "Fire") == 0)
        {
            elementIL[i][0] = 'F';
            elementIL[i][1] = '\0';
        }
        else if(strcmp(elementSub[i], "Wind") == 0)
        {
            elementIL[i][0] = 'W';
            elementIL[i][1] = '\0';
        }
        else if(strcmp(elementSub[i], "Lightning") == 0)
        {
            elementIL[i][0] = 'L';
            elementIL[i][1] = '\0';
        }
        else if(strcmp(elementSub[i], "Earth") == 0)
        {
            elementIL[i][0] = 'E';
            elementIL[i][1] = '\0';
        }
        else if(strcmp(elementSub[i], "Water") == 0)
        {
            elementIL[i][0] = 'w';
            elementIL[i][1] = '\0';
        } // Diberi '\0' agar menjadi sebuah string.
    }

    // Buff atau Debuff kekuatan Karakter.
    for(i = 0; i < n; i++)
    {
        // Proses Buff kekuatan Karakter yang ditambahkan 40% total kekuatan Karakter apabila elemen Karakter mengalahkan elemen Boss.
        if(strcmp(elementIL[i], "F") == 0 && strcmp(elementAL, "W") == 0 || strcmp(elementIL[i], "W") == 0 && strcmp(elementAL, "L") == 0 ||
           strcmp(elementIL[i], "L") == 0 && strcmp(elementAL, "E") == 0 || strcmp(elementIL[i], "E") == 0 && strcmp(elementAL, "w") == 0 ||
           strcmp(elementIL[i], "w") == 0 && strcmp(elementAL, "F") == 0)
        {
            helper[i] = asciiSub[i] * 4 / 10;
            asciiSub[i] += helper[i];
        }

        // Proses Debuff kekuatan Karakter yang dikurangi 30% total kekuatan Karakter apabila elemen Karakter dikalahkan elemen Boss.
        if(strcmp(elementIL[i], "F") == 0 && strcmp(elementAL, "w") == 0 || strcmp(elementIL[i], "w") == 0 && strcmp(elementAL, "E") == 0 ||
           strcmp(elementIL[i], "E") == 0 && strcmp(elementAL, "L") == 0 || strcmp(elementIL[i], "L") == 0 && strcmp(elementAL, "W") == 0 ||
           strcmp(elementIL[i], "W") == 0 && strcmp(elementAL, "F") == 0)
        {
            helper[i] = asciiSub[i] * 3 / 10;
            asciiSub[i] -= helper[i];
        }
    }
}

void result(char nameSub[][51], int asciiSub[], int asciiBoss)
{
    int superior = 0;
    int inferior = 0;

    /* Hasil Total Kekuatan Boss */
    printf("Kekuatan Boss: %d\n", asciiBoss);
    
    /* Karakter Superior */
    printf("=====================\nSuperior\n=====================\n");
    printf("---------------------\n");
    for(i = 0; i < n; i++)
    {
        // Permisalan apabila total kekuatan Karakter melebihi total kekuatan Boss.
        if(asciiSub[i] > asciiBoss)
        {
            printf("%s %d\n", nameSub[i], asciiSub[i]);
            superior++; // Inkremen untuk menghitung jumlah Karakter Superior.
        }
    }

    // Permisalan apabila tidak ada karakter Superior.
    if(superior == 0)
    {
        printf("Tidak ada karakter Superior\n");
    }
    printf("---------------------\n");

    /* Karakter Inferior */
    printf("=====================\nInferior\n=====================\n");
    printf("---------------------\n");

    for(i = 0; i < n; i++)
    {
        // Permisalan apabila total kekuatan Karakter dibawah total kekuatan Boss.
        if(asciiSub[i] < asciiBoss)
        {
            printf("%s %d\n", nameSub[i], asciiSub[i]);
            inferior++; // Inkremen untuk menghitung jumlah Karakter Inferior.
        }
    }

    // Permisalan apabila tidak ada karakter Superior.
    if(inferior == 0)
    {
        printf("Tidak ada karakter Inferior\n");
    }
    printf("---------------------\n");
}