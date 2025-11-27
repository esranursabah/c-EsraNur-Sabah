#include <stdio.h>

int main()
{
/* 6.1 SORUSUNUN COZUMU */
    float pi=3.1419;
    float yukseklik,cap,alan,hacim;

      printf("6.1 cozumu = \n");

      printf("yukseklik degeri =  \n");
       scanf("%f", &yukseklik);

      printf("cap deger = \n");
      scanf("%f",&cap);

      alan=pi*(cap/2)*(cap/2);
      hacim=(alan*yukseklik)/3;

      printf("koninin hacmi = %2.2f \n",hacim);


/*6.16 SORUSUNUN COZUMU*/
     printf("6.16 SORU COZUMU = \n");
     int sayi1;
     sayi1 !=0;
       printf("ilk sayiyı giriniz = \n ");
       scanf("%d",&sayi1);
     int sayi2;
     sayi2 !=0;
       printf("ikinci sayiyı giriniz = \n");
       scanf("%d",&sayi2);
     float harmonik_ort;
     harmonik_ort=(2.0*sayi1*sayi2)/ (sayi1+sayi2);
       printf("HARMONİK ORTALAMA = %2.2f \n",harmonik_ort);



/*6.22 SORU COZUMU */
     printf("6.22 SORUMU COZUMU = \n");
     float ilk_gosterge;
       printf("ilk gosterge giriniz = \n");
       scanf("%f",&ilk_gosterge);
     float son_gosterge;
        printf("ikinci gostergeyi giriniz = \n");
        scanf("%f",&son_gosterge);
        float tuketim_miktari;
        tuketim_miktari = son_gosterge - ilk_gosterge ;
        float su_m3_fiyati ;
        su_m3_fiyati = 0.912857 ;
        float tuketim_tutari ;
      tuketim_tutari = tuketim_miktari * su_m3_fiyati;
// atık su bedeli tuketim miktarının yarısıdır.//
float atik_su_bedeli;
atik_su_bedeli = tuketim_tutari / 2;
float su_faturasi;
su_faturasi = tuketim_tutari + atik_su_bedeli;

printf("odemeniz gereken fatura tutari : %f\n",su_faturasi);

//6.27 soru çözümü//
printf("6.27 soru cozumu\n");
int x1,y1;
int x2,y2;
float ortnokx,ortnoky;
printf("baslangic noktasinin koordinatlari:");
scanf("%d %d",&x1 , &y1);
printf("bitis noktasinin koordinatlarini giriniz :");
scanf("%d %d",&x2 , &y2);
ortnokx = (x1 + x2) / 2;
ortnoky = (y1 + y2) / 2;
printf("orta noktanin koordinatlari : %f , %f\n",ortnokx , ortnoky);

//6.4 Soru Cozumu
printf("6.4 Soru Cozumu = \n");
printf("    .-''-,       \n");
printf("   / _  _ \\     \n");
printf("   \\ @  @ /     \n");
printf("    (_= _)       \n");
printf("     ')  (_      \n");
printf("     / ( ('),    \n");
printf("     \\ __(/-''   \n");
printf("      __|||__        \n");
printf("   ( (__|__) )     \n");


    return 0;
}
