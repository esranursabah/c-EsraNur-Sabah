#include <stdio.h>
#include <stdlib.h>
#define PI 3.1419
#define SU_BIRIM_FIYAT 0.912857

int main()
{

    printf("\t********ESRA NUR SABAH****24301020******\n");
    printf("\t6.Unite Konu Sonu Sorulari ODEV1\n");

    printf("SORU 6.1\n");

    double yukseklik;
    double cap;
    double yaricap;
    double hacim;

    printf("Lutfen yuksekligi (cm) giriniz: ");
    scanf("%lf", &yukseklik);

    printf("Lutfen capi (cm) giriniz: ");
    scanf("%lf", &cap);

    yaricap = cap / 2.0;

    hacim = (1.0 / 3.0) * PI * (yaricap * yaricap) * yukseklik;

    printf("Yukseklik (h) : %.2lf cm\n", yukseklik);
    printf("Cap (d)       : %.2lf cm\n", cap);
    printf("Yaricap (r)   : %.2lf cm\n", yaricap);

    printf("\nDairesel koninin hacmi: %.2lf cm kuptur.\n", hacim);
    printf("-----------------------------------------\n");

    printf("SORU 6.4\n");

    printf("    .-''-,\n");
    printf("   / - - \\ \n");
    printf("   \\ @-@  / \n");
    printf("   ( _ =_ )\n");
    printf("       ) (_\n");
    printf("      /((_ )_'\n");
    printf("      \\ ___(/-''\n");
    printf("       ___|||___\n");
    printf("      ((__ |__ ))\n");

    printf("SORU 6.16\n");

    int a, b;

    double harmonikOrtalama;

    printf("Lutfen birinci tam sayiyi (a) giriniz: ");
    scanf("%d", &a);

    printf("Lutfen ikinci tam sayiyi (b) giriniz: ");
    scanf("%d", &b);

    int  pay = 2 * a * b;

    int payda = a + b;

    harmonikOrtalama = (double)pay / payda;

    printf("Harmonik ortalamasi alinacak degerler: %d %d\n", a, b);

    printf("\n");
    printf("                    %d * %d * %d       %d\n", 2, a, b,pay);
    printf("Harmonik Ortalama = ------------ = ------- = %.2lf\n",(2*a*b)/(a+b), harmonikOrtalama);
    printf("                      %d + %d          %d\n", a, b,payda);

    printf("SORU 6.22\n");

    int ilkGosterge, sonGosterge;
    int tuketimMiktari;
    double tuketimTutari;
    double atiksuBedeli;
    double toplamFatura;

    printf("Ilk gostergeyi giriniz: ");
    scanf("%d", &ilkGosterge);

    printf("Son gostergeyi giriniz: ");
    scanf("%d", &sonGosterge);

    tuketimMiktari = sonGosterge - ilkGosterge;

    tuketimTutari = (double)tuketimMiktari * SU_BIRIM_FIYAT;

    atiksuBedeli = tuketimTutari * 0.50;

    toplamFatura = tuketimTutari + atiksuBedeli;

    printf("Tuketim miktari     : %d\n", tuketimMiktari);

    printf("Tuketim tutari      : %.2lf TL\n", tuketimTutari);

    printf("Atýksu bedeli (yuzde 50): %.2lf TL\n", atiksuBedeli);

    printf("TOPLAM              : %.2lf TL\n", toplamFatura);

    printf("SORU 6.27\n");

    double x1, y1, x2, y2;
    double xo, yo;

    printf("Ilk noktanin x1 y1 degerini giriniz : ");
    scanf("%lf %lf", &x1, &y1);

    printf("Ikinci noktanin x2 y2 degerini giriniz : ");
    scanf("%lf %lf", &x2, &y2);

    xo = (x1 + x2) / 2.0;
    yo = (y1 + y2) / 2.0;

    printf("Hesaplanan Orta Nokta Koordinatlari (xo, yo):\n");

    printf("   %.0lf + %.0lf\t  %.0lf\n", x1, x2, x1 + x2);
    printf("xo = ----------- = ------ = %.1lf\n", (x1 + x2) / 2.0, xo);
    printf("        2           2\n");

    printf("\n");

    printf("   %.0lf + %.0lf\t  %.0lf\n", y1, y2, y1 + y2);
    printf("yo = ----------- = ------ = %.1lf\n", (y1 + y2) / 2.0, yo);
    printf("        2           2\n");

    printf("\nOrta Nokta C(xo, yo) = (%.1lf, %.1lf)\n", xo, yo);




    return 0;

}
