#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#define PI 3.14
#define MAX 255

int cont;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void perkalian(){
        int a,b,hasilkali;
        mengulang:
        printf("\n1. Perkalian :\n");
        printf("Masukkan Angka Pertama : ");
        scanf("%d", &a);
        printf("Masukkan Angka Kedua   : ");
        scanf("%d", &b);
        hasilkali = a * b;
        printf("Hasil:\t\t\t   %d\n", hasilkali);
        ulang:
         printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menupingporolansudo();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }
}
void pembagian(){
        float a,b,hasilbagi;
        mengulang:
        printf("\n1. Pembagian :\n");
        printf("Masukkan Angka Pertama : ");
        scanf("%f", &a);
        printf("Masukkan Angka Kedua   : ");
        scanf("%f", &b);
        hasilbagi = a / b;
        printf("Hasil:\t\t\t   %.2f\n", hasilbagi);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menupingporolansudo();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }
}
void penjumlahan(){
    int a, b, hasiltambah;
        mengulang:
        printf("\n1. Penjumlahan :\n");
        printf("Masukkan Angka Pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasiltambah = a + b;
        printf("Hasil:\t\t\t   %d\n", hasiltambah);
        ulang:
         printf("Apakah ingin mengulang?? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menupingporolansudo();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }
}
void pengurangan(){
    int a,b,hasilkurang;
        mengulang:
        printf("\n1. Pengurangan :\n");
        printf("Masukkan Angka Pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasilkurang = a - b;
        printf("Hasil:\t\t\t   %d\n", hasilkurang);
        ulang:
         printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menupingporolansudo();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }
}
void Sinus(){
   double inputan, hasil;
    mengulang:
    printf("Masukkan derajat sinus : ");
    scanf("%lf", &inputan);
   // menconvert ke radian
   inputan = (inputan * PI) / 180;
   hasil = sin(inputan);

   printf("Hasil sinus adalah = %.2lf\n", hasil);
                ulang:
                printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menusincostan();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void cosinus(){
   double arg, hasil;
    mengulang:
    printf("Masukkan derajat cosinus : ");
    scanf("%lf", &arg);
   // menconvert ke radian
   arg = (arg * PI) / 180;
   hasil = cos(arg);

   printf("Hasil cosinus adalah = %.2lf\n", hasil);
                ulang:
                printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menusincostan();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void Tangen(){
    double arg, hasil;
    mengulang:
    printf("Masukkan derajat Tangen : ");
    scanf("%lf", &arg);
   // menconvert ke radian
   arg = (arg * PI) / 180;
   hasil = tan(arg);

   printf("Hasil sinus adalah = %.2lf\n", hasil);
   ulang:
                printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menusincostan();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}

void keliling_Persegi(){
    float c, d, hasil;
        mengulang:
        printf("\n1. Keliling Persegi :\n");
        printf("Masukan Panjang Persegi : ");
        scanf("%f", &c);
        printf("Masukan Lebar Persegi   : ");
        scanf("%f", &d);
        hasil = 2*(c+d);
        printf("Keliling Persegi Adalah = %.2f\n", hasil);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void keliling_Trapesium(){
    float c,d,e,hasil,tinggi=0.5,simpan;
        mengulang:
        printf("\n1. Keliling Trapesium :\n");
        printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
        scanf("%f", &c);
        printf("Masukkan Sisi Bawah Trapesium Sama Kaki   : ");
        scanf("%f", &d);
        printf("Masukkan Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &e);
        hasil=tinggi*(c+d);
        simpan=hasil;
        //tinggi=1/2*(c+d);
        //printf("\n%.2f", tinggi);
        printf("Keliling Trapesium Sama Kaki adalah = %.2f\n", simpan+c+d+e);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void keliling_LayangLayang(){
    float c,d,hasil;
        mengulang:
        printf("\n1. Keliling Layang-Layang :\n");
        printf("Masukkan Panjang Sisi Atas : ");
        scanf("%f", &c);
        printf("Masukkan Panjang Sisi Bawah   : ");
        scanf("%f", &d);
        hasil =2*(c+d);
        printf("Keliling Layang-Layang adalah = %.2f\n", hasil);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void keliling_Lingkaran(){
    float c,d,rumusd,rumusr;
    float jari2 =3.14;
        mengulang:
        printf("\n1. Lingkaran :\n");
        printf("Masukkan Panjang Diameter : : ");
        scanf("%f", &c);
        printf("Masukkan Panjang Jari-jari   : ");
        scanf("%f", &d);
        rumusd=jari2*c;
        rumusr=2*(jari2*d);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", rumusd);
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", rumusr);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void Luas_Persegi(){
    float c, d, hasil;
        mengulang:
        printf("\n1. Luas :\n");
        printf("Masukan Panjang Persegi : ");
        scanf("%f", &c);
        printf("Masukan Lebar Persegi   : ");
        scanf("%f", &d);
        hasil =c*d;
        printf("Luas Persegi Adalah = %.2f\n", hasil);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundatar();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void Luas_Trapesium(){
    float c,d,e,hasil,tinggi=0.5,simpan;
        ngulang:
        printf("\n1. Luas Trapesium :\n");
        printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
        scanf("%f", &c);
        printf("Masukkan Sisi Bawah Trapesium Sama Kaki   : ");
        scanf("%f", &d);
        printf("Masukkan Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &e);
        hasil=tinggi*(c+d);
        simpan=hasil;
        printf("Luas Trapesium Sama Kaki adalah = %.2f\n", 0.5*(c+d)*simpan);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundatar();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void Luas_LayangLayang(){
    float c,d,hasil;
        ngulang:
        printf("\n1. Luas Layang-Layang :\n");
        printf("Masukkan Panjang Sisi Atas : ");
        scanf("%f", &c);
        printf("Masukkan Panjang Sisi Bawah   : ");
        scanf("%f", &d);
        hasil =0.5*(c*d);
        printf("Luas Layang-Layang adalah = %.2f\n", hasil);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundatar();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void Luas_Lingkaran(){
    float c,d,rumusd,rumusr;
    float jari2=3.14;
        ngulang:
        printf("\n1. Luas Lingkaran :\n");
        printf("Masukkan Panjang Diameter : : ");
        scanf("%f", &c);
        printf("Masukkan Panjang Jari-jari   : ");
        scanf("%f", &d);
        rumusd=0.25*jari2*(c*c);
        rumusr=jari2*(d*d);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", rumusd);
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", rumusr);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundatar();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void Volume_Kubus(){
    float b;
        ngulang:
        printf("\n1. Volume Kubus :\n");
        printf("Masukkan Panjang Sisi Kubus : ");
        scanf("%f", &b);
        printf("Volume Kubus adalah = %.2f\n", b*b*b);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolume();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void Volume_Prisma(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,simpan,jari2=3.14;
        mengulang:
        printf("\n1. Volum Prisma :\n");
        printf("Masukkan Sisi Persegi : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Masukkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Masukkan Tinggi Segitiga : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Masukkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Masukkan Diameter Lingkaran :");
        scanf("%f", &e);
        printf("Masukkan Tinggi Prisma :");
        scanf("%f", &f);
        printf("Volume Prisma Persegi adalah = %.2f\n", a*a*a);
        printf("Volume Prisma Segitiga adalah = %.2f\n", ((b*c)/2)*f);
        printf("Volume Silinder berdasar Jari-Jari adalah = %.2f\n", jari2*(d*d*f));
        printf("Volume Silinder berdasar Diameter adalah = %.2f\n", 0.25*jari2*(e*e)*f);
        ulang:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolume();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto ulang;
                }

}
void Volume_Limas(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,simpan,jari2=3.14,luas_alas,rdiameter;
        mengulang:
        printf("\n1. Volum Lisma :\n");
        printf("Masukkan Sisi Persegi : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Masukkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Masukkan Tinggi Segitiga : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Masukkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Masukkan Diameter Lingkaran :");
        scanf("%f", &e);
        printf("Masukkan Tinggi Limas :");
        scanf("%f", &f);
        luas_alas=0.5*b*f;
        rdiameter=e/2;
        printf("Volume Limas Persegi adalah = %.2f\n", 0.33*a*a*f);
        printf("Volume Limas Segitiga adalah = %.2f\n", 0.33*luas_alas*f);
        printf("Volume Limas Silinder berdasar Jari-Jari adalah = %.2f\n", jari2*d*d*f);
        printf("Volume Limas Silinder berdasar Diameter adalah = %.2f\n", jari2*rdiameter*rdiameter*f);
        UILANGUAGE_ENUMPROC:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolume();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto UILANGUAGE_ENUMPROC;
                }

}
void Volume_Lingkaran(){
    float a,b,rdiameter,simpan;
    float jari2=3.14;
        mengulang:
        printf("\n1. Volume Bola :\n");
        printf("Masukkan Jari-Jari Lingkaran : ");
        scanf("%f", &a);
        printf("Masukkan Diameter Lingkaran : ");
        scanf("%f", &b);
        rdiameter=b/2;
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", 1.33*jari2*a*a*a);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", 1.33*jari2*rdiameter*rdiameter*rdiameter);
        UILANGUAGE_ENUMPROC:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolume();
                }
                else{
                system("cls");
                printf("PILIHAN TIDAK TERSEDIA YGY\n");
                goto UILANGUAGE_ENUMPROC;
                }

}
void akar(){
    float inputan;
    double simpan;
        mengulang:
        printf ("Masukkan bilangan yang akan diakar = ");
        scanf (" %f", &inputan);
        // sqrt(untuk menconvert akar
        simpan = sqrt(inputan);
        printf (" \nHasil akar dari %.2f adalah %.2f\n", inputan, simpan);
        UILANGUAGE_ENUMPROC:
        printf("Apakah ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto mengulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto*main();
                }
                else {
                    system("cls");
                    printf("PILIHAN TIDAK TERSEDIA YGY\n");
                    goto UILANGUAGE_ENUMPROC;
                }



}
void menupingporolansudo(){
                //Menu penjumlahan

        int input,inMenu,y=1;
        int atas=24,bawah=25;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color D7");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ===============================");
        printf("\n   Ping Poro Lan Sudo\n");
        printf("   ===============================\n");
        printf("        1. Perkalian                  \n");
        printf("        2. Pembagian                  \n");
        printf("        3. Penjumlahan                \n");
        printf("        4. Pengurangan                \n");
        printf("        5. Kembali ke Menu utama      \n");
        printf("   ===============================\n");
        gotoxy(3,4+y);printf("==>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                perkalian();
                break;
            case 2 :
                pembagian();
                break;
            case 3 :
                penjumlahan();
                break;
            case 4 :
                pengurangan();
                break;
            case 5 :
                system("cls");
                goto*main();


        }
}

void menusincostan(){

        //Menu SinCostan

        int input,inMenu,y=1;
        int atas=24,bawah=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color E4");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==5){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ===============================");
        printf("\n   SinCosTan\n");
        printf("   ===============================\n");
        printf("        1. Sinus                      \n");
        printf("        2. Cosinus                    \n");
        printf("        3. Tangen                     \n");
        printf("        4. Return ke Menu utama      \n");
        printf("   ===============================");
        gotoxy(3,4+y);printf("==>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                Sinus();
                break;
            case 2:
                cosinus();
                break;
            case 3:
                Tangen();
                break;
            case 4:
                system("cls");
                goto*main();


        }

}

void menukeliling(){


        //Menu Keliling Luas Volume

        int input,inMenu,y=1;
        int atas=24,bawah=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F4");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==5){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ===============================");
        printf("\n   Keliling Luas Volume \n");
        printf("   ===============================\n");
        printf("        1. Hitung Keliling Bangun Datar         \n");
        printf("        2. Hitung Luas Bangun Datar             \n");
        printf("        3. Hitung Volume Bangun Ruang           \n");
        printf("        4. Return ke Menu utama                 \n");
        printf("   ===============================");
        gotoxy(3,4+y);printf("==>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                menukelilingbangundatar();
                break;
            case 2:
                menuluasbangundatar();
                break;
            case 3:
                menuvolume();
                break;
            case 4:
                system("cls");
                goto*main();


        }
}

void menukelilingbangundatar(){

    //Menu Keliling Bangun Datar

        int input,inMenu,y=1;
        int atas=24,bawah=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color 0B");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ===============================");
        printf("\n   Keliling Bangun Datar \n");
        printf("   ===============================\n");
        printf("        1. Keliling Persegi                    \n");
        printf("        2. Keliling Trapesium                  \n");
        printf("        3. Keliling Layang-Layang              \n");
        printf("        4. Keliling Lingkaran                  \n");
        printf("        5. Return ke Menu Sebelumnya           \n");
        printf("   ===============================");
        gotoxy(3,4+y);printf("==>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    keliling_Persegi();
                break;
             case 2 :
                    keliling_Trapesium();
                break;
             case 3 :
                    keliling_LayangLayang();
                break;
             case 4 :
                    keliling_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }
}

void menuluasbangundatar(){

    //Menu Luas Bangun Datar

        int input,inMenu,y=1;
        int atas=24,bawah=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F5");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ===============================");
        printf("\n   Luas Bangun Datar \n");
        printf("   ===============================\n");
        printf("        1. Luas Persegi                        \n");
        printf("        2. Luas Trapesium                      \n");
        printf("        3. Luas Layang-Layang                  \n");
        printf("        4. Luas Lingkaran                      \n");
        printf("        5. Return ke Menu Sebelumnya           \n");
        printf("   ===============================");
        gotoxy(3,4+y);printf("==>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    Luas_Persegi();
                break;
             case 2 :
                    Luas_Trapesium();
                break;
             case 3 :
                    Luas_LayangLayang();
                break;
             case 4 :
                    Luas_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }

}

void menuvolume(){

    //Menu Volum Bangun Ruang

        int input,inMenu,y=1;
        int atas=24,bawah=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color 9");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ===============================");
        printf("\n   Volume Bangun Ruang \n");
        printf("   ===============================\n");
        printf("        1. Volume Kubus                        \n");
        printf("        2. Volume Prisma                       \n");
        printf("        3. Volume Limas                        \n");
        printf("        4. Volume Bola                         \n");
        printf("        5. Return ke Menu Sebelumnya           \n");
        gotoxy(3,4+y);printf("==>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    Volume_Kubus();
                break;
             case 2 :
                    Volume_Prisma();
                break;
             case 3 :
                    Volume_Limas();
                break;
             case 4 :
                    Volume_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }

}

void menuutama(){
    int input,inMenu,y=1;
    int atas=24,bawah=25;
    int menutambah;
    char pil;

    system("mode con: cols=120 lines=30");
    system("color 0");
    system("cls");
    do{
    if(y==0){
         y++;
         continue;
    }
        if(y==6){
            y--;
            continue;
        }
    gotoxy(0,2);
    printf("   ===============================");
    printf("\n   Tugas Kalkulator\n");
    printf("   ===============================\n");
    printf("       1. PingPoroLanSudo            \n");
    printf("       2. SinCosTan                  \n");
    printf("       3. Hitung Keliling dan Luas   \n");
    printf("       4. Hitung Akar Kuadrat        \n");
    printf("       5. Exit                       \n");
    printf("   ===============================");
    gotoxy(3,4+y);printf("==>");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
    }
    }while((int)pil!=13);
    inMenu=y;
    system("cls");

    switch (inMenu){
    case 1:{
            menupingporolansudo();
        break;
    }
    case 2:{
            menusincostan();
        break;
    }
    case 3:{
            menukeliling();
        break;
    }
    case 4:{
            akar();
        break;
     }
    default : printf("\t\t\t\t\t\tS E L E S A I\n"); exit(0);
    }
}
main(){
    char username[MAX], password [MAX];
    user:
        system("cls");
    printf("Masukkan Username : ");
    scanf(" %[^\n]s", &username);
    printf("Masukkan Password : ");
    scanf(" %[^\n]s", &password);
    if(strcmp(username,"bral")==0 && strcmp(password,"123")==0){
        printf("Selamat anda berhasil Login\n");
        system("pause");
        menuutama();
    }
    else {
        printf("maaf username dan password anda salah\n");
        system("pause");
        goto user;
        }
}
