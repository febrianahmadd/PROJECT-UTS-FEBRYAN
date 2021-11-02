#include <stdio.h>
#include <stdlib.h>

int zodiak, infozodiak;

int main ()
//program utama pemilihan zodiak
{

    int zodiak;
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t      ...Mbah Febryan akan meramal karakteristik kamu... \n");
    printf("\t\t\t\t...Meramal karakteristik dan sifat 5 zodiak... \n");
    printf("\t\t__Kalau ada yang sama dengan karakteristik kamu itu cuman kebetulan wkwkwkwk__\n");
    printf("\t\t\t\t........Ini seru seruan aja ya gaes.......... \n");
    printf("\t\t\t\t______________________________________________\n");
    printf ("\t\t\t\t\t........Pilihan zodiak..........\n");
    printf ("\t\t\t\t\t\t1. Pisces\n");
    printf ("\t\t\t\t\t\t2. Sagitarius\n");
    printf ("\t\t\t\t\t\t3. Taurus\n");
    printf ("\t\t\t\t\t\t4. Gemini\n");
    printf ("\t\t\t\t\t\t5. Libra\n");
    printf("\t\t\t\t\t.......Masukkan zodiak....... \n");
    printf ("\t\t\t\t\t\t      ");
    scanf("%d", &zodiak);


    switch(zodiak)
    {
        case 1:
              printf("\t\t\t\t\t  ..........Pisces..........\n");
              info_pisces();break;
        case 2:
              printf("\t\t\t\t\t..........Sagitarius.........\n");
              info_sagitarus();break;
        case 3:
              printf("\t\t\t\t\t ..........Taurus...........\n");
              info_taurus ();break;
        case 4:
              printf("\t\t\t\t\t...........Gemini............\n");
              info_gemini();break;
        case 5:
              printf("\t\t\t\t\t...........Libra.............\n");
              info_libra();break;
        default : printf ("Maaf tidak ada pilihan\n");break;
    }

}


void info_pisces()
//program informasi karakteristik zodiak

{
    while(infozodiak <3){
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t   Informasi karakteristik dan sifat zodiak\n");
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t      1.|Pasangan yang cocok untuk pisces|\n \t\t\t\t\t|Dimana zodiak ketemu jodoh?|\n  \t\t\t\t\t|Masalah cinta zodiak|\n \t\t\t\t\t|Hobi zodiak pisces|\n \t\t\t\t\t|Makanan favorit pisces|\n");
    printf("\t\t\t\t      2.|Sifat baik pisces|\n \t\t\t\t\t|Hiburan zodiak kalau lagi stress|\n \t\t\t\t\t|Yang ditakuti zodiak|\n");
    printf("\t\t\t    Masukkan Angka Pilihan Anda |1||2| Saya akan meramalnya : \n"); printf ("\t\t\t\t\t\t     "); scanf ("%d", &infozodiak);

    switch (infozodiak)
    {
    case 1 : printf ("\t\t   |Cancer,Taurus,Capricorn Karena pisces suka yang sempurna dalam kedewasaan| \n \t\t\t\t\t|Pas beli mie ayam perempatan|\n \t\t\t\t|Dia lebih menyukai wajahmu dari pada hatimu|\n \t\t\t\t\t\t|Berenang| \n \t\t\t\t\t|Ikan,Kepiting,Cumi Cumi| \n");break;
    case 2 : printf ("\t\t\t\t|Pintar menjaga rahasia dan pendengar yang baik| \n\t\t\t\t     |Makan es krim wadah besar sendirian| \n \t\t\t\t\t\t\   |Hantu| \n");break;
    default : printf ("Tidak ada pilihan \n");break;

    }
    printf("\n");
    printf("\t\t    Peringatan keras : Ini hanyalah ramalan , belum tentu 100 persen benar hehe \n");
    printf("\t\t    ____________________________________________________________________________\n");
    infozodiak++;

}
}

void info_sagitarus()
//program informasi karakteristik zodiak
{
    while(infozodiak <3){
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t   Informasi karakteristik dan sifat zodiak\n");
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t      1.|Pasangan yang cocok untuk sagitarius|\n \t\t\t\t\t|Dimana zodiak ketemu jodoh?|\n \t\t\t\t\t|Masalah cinta zodiak|\n  \t\t\t\t\t|Hobi zodiak sagitarius|\n \t\t\t\t\t|Makanan favorit sagitarius|\n");
    printf("\t\t\t\t      2.|Sifat baik sagitarius|\n \t\t\t\t\t|Hiburan zodiak kalau lagi stress|\n \t\t\t\t\t|Yang ditakuti zodiak|\n");
    printf("\t\t\t    Masukkan Angka Pilihan Anda |1||2| Saya akan meramalnya : \n"); printf ("\t\t\t\t\t\t     "); scanf ("%d", &infozodiak);
    switch (infozodiak)
    {
    case 1 : printf ("\t\t   |Aries,Leo,Libra,Aquarius. sagitarius suka pasangan yang punya sisi positif| \n \t\t\t\t\t\t|Di Kampus|\n \t\t\t\t\t|Dia tidak mau mengakui kesalahannya|\n \t\t\t\t\t\t|Berpetualang| \n \t\t\t\t\t  |Pecel,Ayam geprek,Indomie| \n");break;
    case 2 : printf ("\t\t\t\t\t|Pandai mengontrol emosi dan pemaaf| \n\t\t\t\t\t    |Minum kopi hitam manis| \n \t\t\t\t\t\t\   |Mantan| \n");break;
    default : printf ("Tidak ada pilihan \n");break;

    }
    printf("\n");
    printf("\t\t    Peringatan keras : Ini hanyalah ramalan , belum tentu 100 persen benar hehe \n");

    printf("\t\t    ____________________________________________________________________________\n");
    infozodiak++;
    }
}

void info_taurus()
//program informasi karakteristik zodiak
{
    while(infozodiak <= 2){
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t   Informasi karakteristik dan sifat zodiak\n");
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t      1.|Pasangan yang cocok untuk taurus|\n \t\t\t\t\t|Dimana zodiak ketemu jodoh?|\n  \t\t\t\t\t|Masalah cinta zodiak|\n  \t\t\t\t\t|Hobi zodiak taurus|\n \t\t\t\t\t|Makanan favorit taurus|\n");
    printf("\t\t\t\t      2.|Sifat baik taurus|\n \t\t\t\t\t|Hiburan zodiak kalau lagi stress|\n \t\t\t\t\t|Yang ditakuti zodiak|\n");
    printf("\t\t\t    Masukkan Angka Pilihan Anda |1||2| Saya akan meramalnya : \n"); printf ("\t\t\t\t\t\t     "); scanf ("%d", &infozodiak);

    switch (infozodiak)
    {
    case 1 : printf ("\t\t   |Virgo,Pisces,Capricorn. taurus suka pasangan yang humoris dan cerdas| \n \t\t\t\t\t\t|Di Restoran|\n \t\t\t\t\t|Dia lebih menyukai sahabatmu|\n       \t\t\t\t\t\t|Memasak| \n \t\t\t\t   |Ayam penyet pedas,Oseng Mercon,Seblak| \n");break;
    case 2 : printf ("\t\t\t\t      |Lemah lembut,suka mengalah,setia| \n\t\t\t\t\t    |Makan permen lolipop| \n \t\t\t\t\t\t\   |Cicak| \n");break;
    default : printf ("Tidak ada pilihan \n");break;

    }
    printf("\n");
    printf("\t\t    Peringatan keras : Ini hanyalah ramalan , belum tentu 100 persen benar hehe \n");
    printf("\t\t    ____________________________________________________________________________\n");
    infozodiak++;
    }

}


void info_gemini()
//program informasi karakteristik zodiak
{
    while(infozodiak <= 2){
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t   Informasi karakteristik dan sifat zodiak\n");
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t      1.|Pasangan yang cocok untuk gemini|\n \t\t\t\t\t|Dimana zodiak ketemu jodoh?|\n \t\t\t\t\t|Masalah cinta zodiak|\n \t\t\t\t\t|Hobi zodiak gemini|\n \t\t\t\t\t|Makanan favorit gemini|\n");
    printf("\t\t\t\t      2.|Sifat baik gemini|\n \t\t\t\t\t|Hiburan zodiak kalau lagi stress|\n \t\t\t\t\t|Yang ditakuti zodiak|\n");
    printf("\t\t\t    Masukkan Angka Pilihan Anda |1||2| Saya akan meramalnya : \n"); printf ("\t\t\t\t\t\t     "); scanf ("%d", &infozodiak);

    switch (infozodiak)
    {
    case 1 : printf ("\t\t\t      |Aquarius. gemini suka pasangan yang Unik dan kreatif| \n \t\t\t\t\t\t|Di Gunung|\n       \t\t\t\t|Dia selalu mempermasalahkan hal hal kecil|\n \t\t\t\t\t\t|Mendaki gunung| \n\t\t\t\t\t  |Seafood,Ikan asin,bubur ayam| \n");break;
    case 2 : printf ("\t\t\t\t\t |Optimis,cerdas,mudah bergaul| \n\t\t\t\t\t    |Nonton bioskop sendirian| \n \t\t\t\t\t\t\   |Kecoak| \n");break;
    default : printf ("Tidak ada pilihan \n");break;

    }
    printf("\n");
    printf("\t\t    Peringatan keras : Ini hanyalah ramalan , belum tentu 100 persen benar hehe \n");
    printf("\t\t    ____________________________________________________________________________\n");
    infozodiak++;
    }
}



void info_libra()
//program informasi karakteristik zodiak
{
    while(infozodiak <= 2){
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t   Informasi karakteristik dan sifat zodiak\n");
    printf("\t\t\t\t______________________________________________\n");
    printf("\t\t\t\t      1.|Pasangan yang cocok untuk libra|\n \t\t\t\t\t|Dimana zodiak ketemu jodoh?|\n \t\t\t\t\t|Masalah cinta zodiak|\n  \t\t\t\t\t|Hobi zodiak libra|\n \t\t\t\t\t|Makanan favorit libra|\n");
    printf("\t\t\t\t      2.|Sifat baik libra|\n \t\t\t\t\t|Hiburan zodiak kalau lagi stress|\n \t\t\t\t\t|Yang ditakuti zodiak|\n");
    printf("\t\t\t    Masukkan Angka Pilihan Anda |1||2| Saya akan meramalnya : \n"); printf ("\t\t\t\t\t\t     "); scanf ("%d", &infozodiak);

    switch (infozodiak)
    {
    case 1 : printf ("\t\t\t   |Cancer,Capricorn,Pisces. libra suka pasangan yang penyabar| \n \t\t\t\t\t\t|Diparkiran|\n   \t\t\t\t\t|Dia kurang memikirkan perasaanmu|\n   \t\t\t\t\t\t|Suka makan| \n \t\t\t\t\t  |Sushi,Mie ramen,ikan salmon| \n");break;
    case 2 : printf ("\t\t\t\t\t  |Tegas,teliti,sopan,adil| \n\t\t\t\t    |Tidur terus dan tidak ngapa ngapain| \n \t\t\t\t\t\t\  |Katak| \n");break;
    default : printf ("Tidak ada pilihan \n");break;

    }
    printf("\n");
    printf("\t\t    Peringatan keras : Ini hanyalah ramalan , belum tentu 100 persen benar hehe \n");
    printf("\t\t    ____________________________________________________________________________\n");
    infozodiak++;
    }
    getch();


}

