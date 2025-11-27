#include <stdio.h>
#include <stdlib.h>

int main() {
int yaricap, yukseklik;

printf("ODEVI HAZIRLAYAN : SERDAR KACMAZ\n");

printf("COZUM 6.1");

printf("yuksekligi giriniz (cm) : ");
scanf("%d",&yukseklik);
double PI = 3.1419 , hacim ;
printf("yaricapi giriniz (cm) : ");
scanf("%d",&yaricap);

hacim = (1/3.0)*(PI*yaricap*yaricap*yukseklik); 

printf("Girdi degerleri: yukseklik %d ve yaricap %d\n",yukseklik,yaricap);
printf("Dairesel koninin hacmi : hacim %.2lf kuptur. \n\n", hacim);

printf("COZUM 6.4\n");
printf(" .-\"-, \n");
printf("/_ _  \\ \n");
printf("\\@ @  /\n");
printf("(_= _)\n");
printf("  `) (_\n");
printf("  / ((_`)_,\n");
printf("  \\__ (/-\" \n");
printf("  __|||__\n");
printf(" ((__|__))\n\n");  

printf("COZUM 6.16 :\n");

int a ,b,to,carp;

printf("Harmonik ortlamasi alinmak istenen 0'dan farkli iki deger giriniz. ");
scanf("%d %d",&a,&b);
float harmonikortalama = (2.0* a *b)/(a+b);
to=a+b ;
carp=2*a*b;
printf("Harmonik ortalamasi alinacak degerler: %d %d\n",a,b);
printf("----------------------------------------------------------\n");
printf("                      2*%d*%d              %d \n",a,b,carp);
printf("Harmonik Ortalama = -------------= ------------------ = %.2f \n",harmonikortalama);
printf("                       %d+%d              %d \n\n",a,b,to);

printf("COZUM 6.22\n");
int ilk, son;
    printf("Ilk gostergeyi giriniz: ");
    scanf("%d", &ilk);
    printf("Son gostergeyi giriniz: ");
    scanf("%d", &son);

    printf("-----------------------------\n");
    printf("Tuketim miktari     : %d\n", son - ilk);
    printf("Tuketim tutari      : %.2f\n", (son - ilk) * 0.912857);
    printf("Atiksu bedeli (yuzde 50) : %.2f\n", (son - ilk) * 0.912857 * 0.5);
    printf("TOPLAM              : %.2f TL\n\n", (son - ilk) * 0.912857 * 1.5);
    printf("COZUM 6.27\n");
    
    float k1, l1, k2, l2, ko, lo;

    printf("Ilk noktanin x1 y1 degerini giriniz: ");
    scanf("%f %f", &k1, &l1);

    printf("Ikinci noktanin x2 y2 degerini giriniz: ");
    scanf("%f %f", &k2, &l2);

    printf("-------------------------------------------\n");

    ko = (k1 + k2) / 2;
    lo = (l1 + l2) / 2;

    printf("   %.0f + %.0f       %.0f\n", k1, k2, k1 + k2);
    printf("xo = ----------- = ----------- = %.1f\n",ko);
    printf("       2              2\n\n");

    printf("   %.0f + %.0f       %.0f\n", l1, l2, l1 + l2);
    printf("yo = ----------- = ----------- = %.1f\n",lo);
    printf("       2              2\n");

    return 0;
   //ODEVI YAPTIM
   
}
