#include <stdio.h>

int main(){

//SORU 6.1
printf("Soru 6.1 cozumu : \n ");
float R;
    printf("Cap degerini girin : ");    
    scanf("%f", &R);
float h;
    printf(" Yukseklik degerini girin : ");
    scanf("%f", &h);
float alan, koninin_hacmi, PI = 3.1419;
alan = PI * (R/2) * (R/2);
koninin_hacmi = (alan * h) / 3;
    printf(" Koninin hacmi : %2.2f \n", koninin_hacmi);

    
//Soru 6.16
printf("Soru 6.16 cozumu : \n ");
int sayi1;
sayi1 != 0;
    printf("Birinci sayiyi giriniz = ");
    scanf("%d", &sayi1);
int sayi2;
sayi2 != 0;
    printf(" Ikinci sayiyi giriniz = ");
    scanf("%d", &sayi2);
float harmonikOrtalama;
harmonikOrtalama = (2.0 * sayi1 * sayi2) / (sayi1 + sayi2);
    printf(" Harmonik ortalama = %2.2f \n", harmonikOrtalama);
    

//Soru 6.22
printf("Soru 6.22 cozumu : \n ");
float g1;
    printf("Gosterge 1'i giriniz : ");
    scanf("%f", &g1);
float g2;
    printf(" Gosterge 2'yi giriniz : ");
    scanf("%f", &g2);
float tuketimMiktari;
tuketimMiktari = g2 - g1;
    printf(" Tuketim miktariniz %2.2f \n ", tuketimMiktari);
float suM3Bedeli = 0.912857;
float tuketimTutari;
tuketimTutari = tuketimMiktari * suM3Bedeli;
    printf("Tuketim tutariniz : %2.2f \n ", tuketimTutari);
float atikSuBedeli;
atikSuBedeli = tuketimTutari / 2;
    printf("Atik su bedeliniz : %2.2f \n ", atikSuBedeli);
float toplamTutar;
toplamTutar = tuketimTutari + atikSuBedeli;
    printf("Toplam tutariniz : %2.2f \n", toplamTutar);


//Soru 6.27
printf("Soru 6.27 cozumu : \n ");
int x1, x2, y1, y2;
    printf("Baslangic notasinin koordinatlarini x,y seklinde giriniz : ");
    scanf("%d, %d", &x1, &y1);
    printf("Bitis noktasinin koordinatlarini x,y seklinde giriniz : ");
    scanf("%d, %d", &x2, &y2);
float ortaNoktaX, ortaNoktaY;
ortaNoktaX = (x1 + x2) / 2;
ortaNoktaY = (y1 + y2) / 2;
    printf(" Orta noktanin koordinatlari : (%2.1f, %2.1f) \n", ortaNoktaX, ortaNoktaY);

//Soru 6.4
printf("Soru 6.4 cozumu : \n");
printf("   .-\"-,         \n");
printf("  / _  _\\        \n");
printf("  \\ @ @ /        \n");
printf("  (_ = _)         \n");
printf("    ')  (_        \n");
printf("    / ( (_')_,    \n");
printf("    \\___(/-''    \n");
printf("  ___|||___       \n");
printf(" ( (__|__) )      \n");
    
return 0;
}
