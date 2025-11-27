#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Odevi Hazirlayan Eylul AYDOGAN\n\n");
    printf("SORU 6.1. COZUMU :");


    float yukseklik, cap, yaricap, hacim;
    const double PI = 3.1419;

    printf("Yuksekligi giriniz (cm): ");
    scanf("%f", &yukseklik);

    printf("Capi giriniz (cm): ");
    scanf("%f", &cap);

    yaricap = cap / 2.0;

    hacim = (PI * yaricap * yaricap * yukseklik) / 3.0;

    printf("\nGirdi Degerleri: yukseklik %.1f ve cap %.1f\n", yukseklik, cap);
    printf("Dairesel Koninin Hacmi: %.2f cm kuptur.\n\n", hacim);


    printf("SORU6.4. COZUMU :\n\n");

    printf("          .-\"-,          \n");
    printf("         /_ _  \\       \n");
    printf("         \\@ @  /         \n");
    printf("         (_= _)          \n");
    printf("           `)(_          \n");
    printf("           /((_`)_,      \n");
    printf("           \\__(/-\"       \n");
    printf("          __|||__        \n");
    printf("         ((__|__))       \n\n");

   printf("soru 6.16. cozumu :\n\n");

   int sayi1 , sayi2 , ort , carp , toplam ;

   printf("0`dan farkli harmonik ortalamasi alanacak iki tam sayi girin:");
   scanf("%d %d", &sayi1 , &sayi2);

   ort = (2*sayi1*sayi2)/(sayi1+sayi2);
   carp = (2*sayi1*sayi2);
   toplam = sayi1+sayi2;

   printf("Harmonik ortalamsi alanacak degerler : %d %d \n",sayi1,sayi2);
   printf("                     2 *%d * %d        %d\n",sayi1,sayi2,carp);
   printf("Harmonik ortalama = -------------  =  ------ = %d\n",ort);
   printf("                       %d + %d           %d \n\n",sayi1,sayi2,toplam);


   printf("SORU 6.22. COZUMU :\n\n");


    int ilk, son, tuketim;
    float tuketimTutari, atikSu, TOPLAM ;
    double suFiyati = 0.912857;


    printf("Ilk gostergeyi giriniz: ");
    scanf("%d", &ilk);

    printf("Son gostergeyi giriniz: ");
    scanf("%d", &son);

    tuketim = son - ilk;

    tuketimTutari = tuketim * suFiyati;

    atikSu = tuketimTutari * 0.5;

    TOPLAM = tuketimTutari + atikSu;


    printf("------------------------------\n");
    printf("Tuketim miktari       : %d\n", tuketim);
    printf("Tuketim tutari        : %.2f TL\n", tuketimTutari);
    printf("Atiksu bedeli (yuzde 50) : %.2f TL\n", atikSu);
    printf("TOPLAM              :%.2f TL\n\n", TOPLAM);


    printf("SORU 6.27. COZUMU :\n\n");


    float x1,y1,x2,y2,xort,yort,xtop,ytop;

    printf("Birinci noktanin x1 ve y1 degerlerini giriniz: ");
    scanf("%f%f", &x1, &y1);

    printf("İkinci noktanin x2 ve y2 degerlerini giriniz: ");
    scanf("%f%f", &x2, &y2);

    xort = (x1+x2)/2 ;
    yort = (y1+y2)/2 ;
    xtop =  x1+x2;
    ytop =  y1+y2;

    printf("--------------------------------------------------------");
    printf("        %.1f + %.1f    %.1f\n ",x1 , x2 , xtop);
    printf("xorta =  ----------- =  ----- = %.1f\n",xort);
    printf("              2           2  \n\n"   );
    printf("        %.1f + %.1f    %.1f\n",y1 , y2 , yort );
    printf("        ------------ = ------ = %.1f\n",yort);
    printf("               2          2   \n");




    return 0;
}
