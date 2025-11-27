odev6.1

#include <stdio.h>
#include <math.h>

int main() {
    double h, d, r, hacim;
    const double PI = 3.14;

    printf("koninin yuksekligini giriniz (h): ");
    scanf("%lf", &h);

    printf("koninin capini giriniz (d): ");
    scanf("%lf", &d);

    r = d / 2.0;                // yarýçap hesaplama
    hacim = (PI * r * r * h) / 3.0; // hacim formülü

    printf("\nkoninin hacmi: %.2lf birim\n", hacim);

    return 0;
}


odev6.4

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" .-\"-, \n");
printf("/_ _  \\ \n");
printf("\\@ @  /\n");
printf("(_= _)\n");
printf("  `) (_\n");
printf("  / ((`),\n");
printf("  \\__ (/-\" \n");
printf("  _|||_\n");
printf(" ((|))\n\n");
    return 0;
}


odev6.16

#include <stdio.h>
#include <stdio.h>

int main() {
    int a, b;
    double harmonik_ortalama;

    printf("Iki adet sifirdan farkli tamsayi giriniz: ");
    scanf("%d %d", &a, &b);

    // Sifir kontrolu
    if (a == 0 || b == 0) {
        printf("Hata: Sifir girmeyiniz!\n");
        return 1; // programi hatayla sonlandirir
    }

    // Harmonik ortalama formulu: H = 2ab / (a + b)
    harmonik_ortalama = (2.0 * a * b) / (a + b);

    printf("Harmonik ortalama: %.2f\n", harmonik_ortalama);

    return 0;
}


odev6.22


#include <stdio.h>
#include <stdio.h>

int main() {
    int ilk, son, tuketim;
    float su_fiyati = 0.912857;
    float tutar, atiksu, toplam;

    printf("Ilk gostergeyi giriniz: ");
    scanf("%d", &ilk);

    printf("Son gostergeyi giriniz: ");
    scanf("%d", &son);

    // Tüketim miktarý hesaplama
    tuketim = son - ilk;

    // Tüketim tutarý
    tutar = tuketim * su_fiyati;

    // Atýksu bedeli (%50)
    atiksu = tutar * 0.50;

    // Toplam bedel
    toplam = tutar + atiksu;

    // Sonuçlarý ekrana yazdýr
    printf("\nTuketim miktari : %d\n", tuketim);
    printf("Tuketim tutari  : %.2f\n", tutar);
    printf("Atiksu bedeli (yuzde 50) : %.2f\n", atiksu);
    printf("TOPLAM          : %.2f TL\n", toplam);

    return 0;
}


odev6.27


#include <stdio.h>
#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    float xm, ym;

    printf("birinci noktanin koordinatlarini giriniz (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("ikinci noktanin koordinatlarini giriniz (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Orta nokta formülü: M = ((x1 + x2)/2 , (y1 + y2)/2)
    xm = (x1 + x2) / 2;
    ym = (y1 + y2) / 2;

    printf("dogru parcasinin orta noktasi: (%.2f , %.2f)\n", xm, ym);

    return 0;
}
