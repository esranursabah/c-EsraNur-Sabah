#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi = 3.14
   double yukseklik,cap,r,alan,hacim;

   printf("yuksekligi giriniz(cm)");
   scanf("%1f",&h);

   printf("capi giriniz(cm)");
   scanf("%1f",&cap);

   r=cap/2.0;
   alan=pi*r*r;
   hacim=(1.0/3.0)*alan*h;

   printf("/nGirdi Degerleri; yukseklik %.0f ve cap %.0f/n",yukseklik,cap);
   printf("Dairesel koninin Hacmi: %.2f cm kuptur./n",hacim);

}
{
    printf("         .-"-,            \n");
    printf("         /_ _ \\           \n");
    printf("         \@ @ /           \n");
    printf("         (_= _)           \n");
    printf("           ')(_           \n");
    printf("          /((_')_,        \n");
    printf("         \\__(/-\"         \n");
    printf("          __|||__         \n");
    printf("         (( __|__))       \n");

    } 
    
{
    int a,b `;
    double harmonik;

    printf("iki farkli sifirdan farkli tam sayi girin");
    scanf("%d %d", &a, &b);

    harmonik = (2.0 * a* b) / (double)(a+b);
    printf("harmonik ortalama = %.2f/n",harmonik);
}
 {
    int ilk,son,tuketim
    double birim_fiyat= 0.912857
    double tuketim_tutari, atiksu_bedeli,toplam;

     printf("ilk gostergeyi giriniz:");
     scanf("%d", &ilk);

     printf("son gostergeyi giriniz :");
     scanf("%d", &son);

     tuketim = son - ilk ;
     tuketim_tutari = tuketim * birim_fiyat ;
     atiksu_bedeli = tuketim_tutari * 0.5 ;
     toplam = tuketim_tutari + atiksu_bedeli ;

     printf("----------\n");
     printf("tuketim miktari : %d m3\n", tuketim);
     printf("tuketim tutari : %.2f TL\n",tuketim_tutari);
     printf("atiksu bedeli : %2.f TL\n", atiksu bedeli);
     printf("toplam       %2.f TL\n", toplam);

}
 {
    float x1,y1,x2,y2;
    float x0,y0 ;

    printf("birinci noktanin x1 ve y1 degerlerini giriniz:");
    scanf("%f %f", &x1 ,&y1);

    printf("ikinci noktanin x2 ve y2 degerlerini giriniz :");
    scanf("%f %f , &x2, &y2");

    x0 = (x1+x2) / 2 ;
    y0 = (y1+y2) / 2 ;

    printf("--------\n");
    printf("orta noktanin kordinatlari:\n");
    printf("x0 = %.2f\n", x0);
    printf("y0 = %2.f\n", y0);



    return 0;
}
