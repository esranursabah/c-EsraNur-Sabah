#include <stdio.h>
#include <stdlib.h>
#define PI (3.1419)
#define SU_METREKUP_FİYATİ (0.912857)

int main()
{   
   printf("Algoritma ve Programlama Odevi , Hazirlayan : Umay ERYİLMAZ \n");

   {  /*Yükseklik ve Çap değerleri klavyeden girilen dairesel bir koninin hacmini hesaplayan bir program
yazılmıştır.*/

    int yukseklik;          // Girilen Yükseklik değişkeni
    int cap;                // Girilen Çap değişkeni
    double yaricap;         // Hesaplanan Yarıçap değişkeni
    double hacim;           // Hesaplanan Hacim değişkeni
    double tabanAlani;     // Hesaplanan Taban Alanı değişkeni

    printf("COZUM 6.1: \n");
    
    printf("yukseklik degerini girin: ");
    scanf("%d",&yukseklik);

    printf("cap degerini girin: ");
    scanf("%d",&cap);

    printf("Girdi degerleri = yukseklik (%d) ve cap (%d)\n",yukseklik,cap);

    yaricap = cap / 2.0;                           // Yarıçap değerinin hesaplanması
    printf("yaricap degeri = %.2lf cm\n",yaricap);

    tabanAlani = PI * yaricap * yaricap;         // Taban Alanı formülü
    printf("Hesaplanan Taban Alani değeri = %.2lf\n",tabanAlani);

    hacim = 1 / 3.0 * (tabanAlani * yukseklik);  // Hacim formülü
    printf("Dairesel Koninin Hacimi = %.2lf cm kuptur\n",hacim);

     }

     {      
    /*Yazılan program printf çıktılarından ve klavyeden girilen girişlerden yararlanarak ekrana bir 
görsel çıktı vermektedir. */

     printf("COZUM 6.4: \n");
     
     printf("     .- \"-,     \n");
     printf("    /_ _   \\     \n");
     printf("    \\@ @   /      \n ");
     printf("    (_= _)         \n");
     printf("       ')(_     \n");
     printf("       /((_')_,    \n");
     printf("       \\__(/-\"   \n  ");
     printf("    __|||__     \n");
     printf("     ((__|__))    \n "); 

      }

      { 
    /*Klavyeden verilen iki adet sıfırdan farklı tamsayının Harmonik ortalamasını hesaplayıp ekrana
 yazan bir program yazılmıştır.*/

    int ilkSayi;                   // Girilen ilk sayı değişkeni
    int ikinciSayi;                // Girilen ikinci sayı değişkeni
    double harmonikOrtalama;       // Hesaplanan Harmonik ortalama değişkeni
    
    printf("COZUM 6.16: \n");

    printf("sifirdan farkli bir ilkSayi degeri girin: ");
    scanf("%d",&ilkSayi);

    printf("sifirdan farkli bir ikinciSayi degeri girin: ");
    scanf("%d",&ikinciSayi);

    printf("Harmonik ortalamasi hesaplanacak girdi degerleri = ilkSayi (%d) ve ikinciSayi (%d)\n",ilkSayi,ikinciSayi);

    if((ilkSayi == 0) || (ikinciSayi == 0) || (ilkSayi + ikinciSayi == 0))
    {
        printf("Hatali sayi girisi veya payda = 0 , Harmonik ortalama hesaplanamadi\n");
    }
    else
    {
        printf("Dogru sayi girisi\n");

        harmonikOrtalama = 2.0 * (ilkSayi * ikinciSayi) / (ilkSayi + ikinciSayi);   // Harmonik ortalama formülü
        printf("Harmonik ortalama = %.2lf\n",harmonikOrtalama);
    }
      }

      {   
    /*Klavyeden girilen ilk gösterge ve son gösterge değerlerine göre su fatura bedelini ekrana yazan 
bir program yazılmıştır.*/

    int ilkGosterge;              // Girilen İlk gösterge değişkeni
    int sonGosterge;              // Girilen Son gösterge değişkeni
    int tuketimMiktari;           // Hesaplanan Tüketim miktarının değişkeni
    double tuketimTutari;         // Hesaplanan Tüketim tutarının değişkeni
    double atiksuBedeli;         // Hesaplanan Atıksu bedelinin değişkeni
    double toplam;               // Hesaplanan Toplam değişkeni

    printf("COZUM 6.22: \n");

    printf("ilk göstergeyi girin: ");
    scanf("%d",&ilkGosterge);

    printf("son göstergeyi girin: ");
    scanf("%d",&sonGosterge);

    tuketimMiktari = sonGosterge - ilkGosterge;                 // Tüketim miktarının hesaplanması
    tuketimTutari = tuketimMiktari * SU_METREKUP_FİYATİ;        // Tüketim tutarının hesaplanması
    atiksuBedeli = tuketimTutari / 2.0;                        // Atıksu bedelinin hesaplanması
    toplam = tuketimTutari + atiksuBedeli;                     // Toplam kaç TL olduğunun hesaplanması

    printf("Tuketim miktari = %d\n",tuketimMiktari);
    printf("Tuketim tutari = %.2lf\n",tuketimTutari);
    printf("Atiksu bedeli = %.2lf\n",atiksuBedeli);
    printf("Toplam = %.2lf TL\n",toplam);

      }

      {   
    /*İki uç noktasının koordinatları klavyeden girilen doğru parçasının orta noktasını hesaplayıp 
ekrana yazdıran bir program yazılmıştır.*/

    int x1;         // İlk noktanın x1 değişkeni
    int y1;         // İlk noktanın y1 değişkeni
    int x2;         // İkinci noktanın x2 değişkeni
    int y2;         // İkinci noktanın y2 değişkeni
    double xo;      // Orta noktanın x orta değişkeni
    double yo;      // Orta noktanın y orta değişkeni

    printf("COZUM 6.27: \n");

    printf("x1 degerini girin: ");
    scanf("%d",&x1);

    printf("y1  degerini girin: ");
    scanf("%d",&y1);

    printf("x2  degerini girin: ");
    scanf("%d",&x2);

    printf("y2  degerini girin: ");
    scanf("%d",&y2);

    printf("ilk noktanin girdi degerleri = x1 (%d) ve y1 (%d)\n",x1,y1);
    printf("ikinci noktanin girdi degerleri = x2 (%d) ve y2 (%d)\n",x2,y2);

    xo = (x1 + x2) / 2.0;                 // Orta x değeri formülü
    yo = (y1 + y2) / 2.0;                 // Orta y değeri formülü
    printf("Dogru parcasinin orta noktasi =(%.1lf , %.1lf)\n",xo,yo);
    
      } 

     return 0;

}
