/*Saya Ananda Myzza Marhelio [2100702] mengerjakan soal Kuis 1 Segitiga Kejujuran dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/


#include <stdio.h>
#include <math.h>
int main(){

    //membuat inputan untuk sisi segitiga 1 dan 2
    int a1, b1, c1, a2, b2, c2;
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);

    //membuat int dan float untuk menghitung tinggi dan luas segitiga sama sisi dan sama kaki
    int luasSS1, tinggiSS1, luasaSK1, tinggiaSK1, luasbSK1, tinggibSK1, luascSK1, tinggicSK1;
    int luasSS2, tinggiSS2, luasaSK2, tinggiaSK2, luasbSK2, tinggibSK2, luascSK2, tinggicSK2;
    float SS1, aSK1, bSK1, cSK1, SS2,  aSK2, bSK2, cSK2;
    
    //rumus mencari segitiga sama sisi 1
    SS1 = (b1 * b1) - (a1 * a1 * 0.25);
    tinggiSS1 = sqrt(SS1);
    luasSS1 = (a1 * tinggiSS1) / 2;

    //rumus mencari segitiga sama kaki 1
    aSK1 = (b1 * b1) - (a1 * a1 * 0.25);
    tinggiaSK1 = sqrt(aSK1);
    luasaSK1 = (a1 * tinggiaSK1) / 2;

    bSK1 = (a1 * a1) - (b1 * b1 * 0.25);
    tinggibSK1 = sqrt(bSK1);
    luasbSK1 = (b1 * tinggibSK1) / 2;

    cSK1 = (a1 * a1) - (c1 * c1 * 0.25);
    tinggicSK1 = sqrt(cSK1);
    luascSK1 = (c1 * tinggicSK1) / 2;

    //rumus mencari segitiga sama sisi 2
    SS2 = (b2 * b2) - (a2 * a2 * 0.25);
    tinggiSS2 = sqrt(SS2);
    luasSS2 = (a2 * tinggiSS2) / 2;

    //rumus mencari segitiga sama kaki 2
    aSK2 = (b2 * b2) - (a2 * a2 * 0.25);
    tinggiaSK2 = sqrt(aSK2);
    luasaSK2 = (a2 * tinggiaSK2) / 2;

    bSK2 = (a2 * a2) - (b2 * b2 * 0.25);
    tinggibSK2 = sqrt(bSK2);
    luasbSK2 = (b2 * tinggibSK2) / 2;

    cSK2 = (a2 * a2) - (c2 * c2 * 0.25);
    tinggicSK2 = sqrt(cSK2);
    luascSK2 = (c2 * tinggicSK2) / 2;

    //rumus mencari luas segitiga siku-siku
    int luasSiku1, luasSiku2, luasSiku3, luasSiku4, luasSiku5, luasSiku6;

    luasSiku1 = (a1 * b1) / 2;
    luasSiku2 = (a1 * c1) / 2;
    luasSiku3 = (b1 * c1) / 2;
    luasSiku4 = (a2 * b2) / 2;
    luasSiku5 = (a2 * c2) / 2;
    luasSiku6 = (b2 * c2) / 2;

    //int untuk mencari selisih luas segitiga
    int selisihSS1, selisihSS2, selisihaSK1, selisihaSK2, selisihbSK1, selisihbSK2, selisihcSK1, selisihcSK2;
    int selisihSiku1, selisihSiku2, selisihSiku3, selisihaSiku1, selisihaSiku2, selisihaSiku3;

    selisihSS1 = luasSS1 - luasSS2;
    selisihSS2 = luasSS2 - luasSS1;
    selisihaSK1 = luasaSK1 - luasaSK2;
    selisihaSK2 = luasaSK2 - luasaSK1;
    selisihbSK1 = luasbSK1 - luasaSK2;
    selisihbSK2 = luasbSK2 - luasbSK1;
    selisihcSK1 = luascSK1 - luascSK2;
    selisihcSK2 = luascSK2 - luascSK1;

    selisihSiku1 = luasSiku1 - luasSiku4;
    selisihSiku2 = luasSiku2 - luasSiku5;
    selisihSiku3 = luasSiku3 - luasSiku6;
    selisihaSiku1 = luasSiku4 - luasSiku1;
    selisihaSiku2 = luasSiku5 - luasSiku2;
    selisihaSiku3 = luasSiku6 - luasSiku3;

    //syarat-syarat yang dibutuhkan seperti yang berada di soal kuis.
    if((a1 == b1) && (b1 == c1) && (a2 == b2) && (b2 == c2))
    {
        printf("segitiga sama sisi\n");
        if(luasSS1 > luasSS2){
            printf("segitiga pertama\n");
            printf("selisih %d\n", selisihSS1);
        }else if(luasSS1 < luasSS2){
            printf("segitiga kedua\n");
            printf("selisih %d\n", selisihSS2);
        }
    }else if((a1 == b1) || (a1 == c1) || (b1 == c1)){
        printf("segitiga sama kaki\n");
        if((a2 == b2) || (a2 == c2) || (b2 == c2) || (luasaSK1 > luasaSK2) || (luasbSK1 > luasbSK2) || (luascSK1 > luascSK2)){
            printf("segitiga pertama\n");
            if(luasaSK1 > luasaSK2){
                printf("selisih %d\n", selisihaSK1);
            }else if(luasbSK1 > luasbSK2){
                printf("selisih %d\n", selisihbSK1);
            }else if(luascSK1 > luascSK2){
                printf("selisih %d\n", selisihcSK1);
            }
        }else if((a2 == b2) || (a2 == c2) || (b2 == c2) || (luasaSK1 < luasaSK2) || (luasbSK1 < luasbSK2) || (luascSK1 < luascSK2)){
            printf("segitiga kedua\n");
            if(luasaSK1 < luasaSK2){
                printf("selisih %d\n", selisihaSK2);
            }else if(luasbSK1 < luasbSK2){
                printf("selisih %d\n", selisihbSK2);
            }else if(luascSK1 < luascSK2){
                printf("selisih %d\n", selisihcSK2);
            }
        }
    }else if(((c1 > a1) && (c1 > b1)) || ((a1 > c1) && (a1 > b1)) || ((b1 > a1) && (b1 > c1)))
    {
        if(((c2 > a2) && (c2 > b2)) || ((a2 > c2) && (a2 > b2)) || ((b2 > a2) && (b2 > c2))){
            printf("segitiga siku-siku\n");
            if((luasSiku1 > luasSiku4) || (luasSiku2 > luasSiku5) || (luasSiku3 > luasSiku6)){
                printf("segitiga pertama\n");
                if(luasSiku1 > luasSiku4){
                    printf("selisih %d\n", selisihSiku1);
                }else if(luasSiku2 > luasSiku5){
                    printf("selisih %d\n", selisihSiku2);
                }else if(luasSiku3 > luasSiku6){
                    printf("selisih %d\n", selisihSiku3);
                }
            }else if((luasSiku1 < luasSiku4) || (luasSiku2 < luasSiku5) || (luasSiku3 < luasSiku6)){
                printf("segitiga kedua\n");
                if(luasSiku1 < luasSiku4){
                    printf("selisih %d\n", selisihaSiku1);
                }else if(luasSiku2 < luasSiku5){
                    printf("selisih %d\n", selisihaSiku2);
                }else if(luasSiku3 < luasSiku6){
                    printf("selisih %d\n", selisihaSiku3);
                }
            }
        }
    }else{
        printf("tidak sama\n");
    }

    return 0;
}