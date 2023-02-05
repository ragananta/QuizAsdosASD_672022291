#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main()
{
    int k, i, j, simpan, input, angka;
    int masuk;
    int bilangan, isi, tampung, tampung2, batas, spasi1, spasi2, segi31, segi32, segi33, segi34, tghkir, tghkan;
    int inputan,y=1;
    char pil;

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
    printf("   ");
    for(int a=0;a<16;a++){printf("=");}
    printf("\n    Tugas Quiz ASD     \n   ");
    for(int a=0;a<16;a++){printf("=");}
    printf("\n       1. Level 1            \n");
    printf("       2. Level 2            \n");
    printf("       3. Level 3            \n");
    printf("       4. Exit               \n");
    printf("   ================");
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
    }
while((int)pil!=13);
    input=y;
    system("cls");
    switch(input){
    case 1 : {}
        system("cls");
        printf("Masukkan angka : ");
        scanf("%d", &angka);
            for(i=0; i<=angka; i++){
            simpan=i;
            for(j=0; j<=i; j++){
        printf("%d",simpan);
        simpan++;
    }
    printf("\n");
    }
    break;

    case 2 :
    system("cls");
    int masuk;
    printf("Masukkan angka : ");
    scanf("%d", &masuk);
        for(int i=1; i<=masuk; i++){
        for(int j=1; j<=i; j++){
        printf (" %d", i*j);
    }
    printf("\n");
    }
    break;

    case 3 :
    system("cls");
    printf("Masukan Bilangan (max 9) : ");
    scanf("%d",&bilangan);
    isi=bilangan-1;
    tampung=isi;
    tampung2=isi;
    for (batas=1;batas<=isi;batas++){
    //SEGITIGA KIRI ATAS/
    for (spasi1=isi;spasi1>=batas;spasi1--)
    printf("%s"," ");
    for (segi31=1;segi31<=batas;segi31++)
    printf("%d",segi31);
    //SEGITIGA KANAN ATAS/
    for (segi32=batas-1;segi32>=1;segi32--)
    printf("%d",segi32);
    printf("\n");
}
    //TENGAH/
    for(tghkir=1;tghkir<=bilangan;tghkir++)
    printf("%d",tghkir);
    for(tghkan=bilangan-1;tghkan>=1;tghkan--)
    printf("%d",tghkan);
    printf("\n");
    for (batas=1;batas<=isi;batas++){
    //SEGITIGA KIRI BAWAH/
    for (spasi2=1;spasi2<=batas;spasi2++)
    printf("%s"," ");
    for (segi33=1;segi33<=tampung;segi33++)
    printf("%d",segi33);tampung=tampung-1;
    //SEGITIGA KANAN BAWAH/
    for (segi34=tampung2-1;segi34>=1;segi34--)
    printf("%d",segi34);tampung2=tampung2-1;
    printf("\n");

}
    break;

    case 4 :{
    printf("Anda Keluar"); system("pause > null"); exit(0);
    }
    default : break;
    }
system("pause > null");
system("pasue");
goto*main();
}

