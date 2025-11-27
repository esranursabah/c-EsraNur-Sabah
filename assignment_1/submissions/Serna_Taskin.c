#include <stdio.h>
int main(){

//6.1 Soru Cozumu 
printf("6.1 Soru Cozumu = \n");
float PI = 3.1419;
float h1;
    printf("Yukseklik degeri = ");
    scanf("%f", &h1);
float r1;
    printf("Cap degeri = ");
    scanf("%f", &r1);
float alan;
alan = PI * (r1/2) * (r1/2);
float hacim;
hacim = (alan * h1) / 3;
    printf("Koninin hacmi = %2.2f \n", hacim);

//6.16 Soru Cozumu
printf("6.16 Soru Cozumu = \n");
int sayi_1;
sayi_1 != 0;
    printf("Birinci sayi degeri = ");
    scanf("%d", &sayi_1);
int sayi_2;
sayi_2 != 0;
    printf("İkikinci sayi degeri = ");
    scanf("%d", &sayi_2);
float ho;
ho = (2.0 * sayi_1 * sayi_2) / (sayi_1 + sayi_2);
    printf("Harmonik Ortalama = %2.2f \n", ho);

//6.22 Soru Cozumu
printf("6.22 Soru Cozumu = \n");
float gosterge_1;
    printf("İlk gösterge giriniz = ");
    scanf("%f", &gosterge_1);
float gosterge_2;
     printf("İkinci gösterge giriniz = ");
     scanf("%f", &gosterge_2);
float tuketim_miktari;
tuketim_miktari = gosterge_2 - gosterge_1;
    printf("Tüketim miktari = %2.2f \n", tuketim_miktari);
float su_m3_bedeli;
su_m3_bedeli = 0.912857;
float tuketim_tutari;
tuketim_tutari = tuketim_miktari * su_m3_bedeli;
    printf("Tüketim tutari = %2.2f \n", tuketim_tutari);
float atik_su_bedeli;
atik_su_bedeli = tuketim_tutari / 2;
    printf("Atik su bedeli = %2.2f \n", atik_su_bedeli);
float toplam_tutar;
toplam_tutar = tuketim_tutari + atik_su_bedeli;
    printf("Toplam = %2.2f \n", toplam_tutar);

//6.27 Soru Cozumu
printf("6.27 Soru Cozumu = \n");
int x1,x2,y1,y2;
float ortanoktax,ortanoktay;
    printf("baslangic noktasinin koordinatlarini giriniz = ");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("bitis noktasinin koordinatlarini giriniz = ");
    scanf("%d", &x2);
    scanf("%d", &y2);
ortanoktax= (x1 + x2) / 2;
ortanoktay= (y1 + y2) / 2;
printf("Orta noktanin koordinatlari = (%2.0f , %2.0f) \n", ortanoktax, ortanoktay);


//6.4 Soru Cozumu
printf("6.4 Soru Cozumu = \n");
printf("    .-''-,       \n");
printf("   / _  _ \\      \n");
printf("   \\ @  @ /      \n");
printf("    (_= _)       \n");
printf("     ')  (_      \n");
printf("     / ( (_')_,  \n");
printf("     \\ ___(/-''  \n");
printf("    ___|||___    \n");
printf("   ( (__|__) )   \n");

return 0;
}
