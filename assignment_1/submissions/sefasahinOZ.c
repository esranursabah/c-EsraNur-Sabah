#include <stdio.h>
#include <stdlib.h>

int main(){
printf("Odevi Hazirlayan Sefa Sahin OZ\n\n");
printf("COZUM 6.1 :\n\n");
//6.1 numaralı sorunun çözümü
//formül 1/3 * taban alanı * yükseklik

double r, h, sonuc, PI ;
PI = 3.1419 ;
printf("Yuksekligi giriniz (cm) ");
scanf("%lf",&h);
printf("yaricapi giriniz (cm) ");
scanf("%lf",&r);
sonuc = (1.0/3.0)*(PI*r*r)*h ;
printf("Dairesel koninin hacmi : %.2lf cm kuptur\n\n", sonuc ) ;

//6.4 numaralı sorunun çözümü

printf("COZUM 6.4 :\n\n");

printf(" .-\"-, \n");
printf("/_ _  \\ \n");
printf("\\@ @  /\n");
printf("(_= _)\n");
printf("  `) (_\n");
printf("  / ((_`)_,\n");
printf("  \\__ (/-\" \n");
printf("  __|||__\n");
printf(" ((__|__))\n\n");  

// 6.16 numaralı sorunun çözümü :
// sayi1 ve sayi2 klavyeden girilen sayılar olmak üzere;
//formül = (2*sayi1*sayi2)/(sayi1+sayi2)

printf("COZUM 6.16 :\n");

int sayi1, sayi2, ort ,carp ,top;

printf("0'dan farkli olmak uzere harmonik ortalamasini almak istediginiz iki tam sayi giriniz?  ");
scanf("%d %d",&sayi1 ,&sayi2);
ort = (2*sayi1*sayi2)/(sayi1+sayi2);
carp = 2*sayi1*sayi2 ;
top = sayi1 + sayi2 ;
printf("Harmonik ortalamasi alinacak degerler : %d  %d \n",sayi1 ,sayi2);
printf("                      2 * %d * %d       %d\n",sayi1 ,sayi2 ,carp );
printf("Harmonik Ortalama = ---------------= -------- = %d\n",ort);
printf("                        %d  +  %d       %d \n\n",sayi1 ,sayi2 , top);

//6.22 numaralı sorunun çözümü :

printf("COZUM 6.22 \n\n");

double ilk ,son ,tmik ,ttut ,atbedel ,fatura ;
printf("Ilk gostergeyi giriniz: ");
scanf("%lf",&ilk);
printf("Son gostergeyi giriniz: ");
scanf("%lf",&son);
tmik = son - ilk ;
ttut = (tmik) * (0.912857) ;
atbedel = ttut / 2 ;
fatura = atbedel + ttut ;
printf("---------------------------\n");
printf("Tuketim miktari                 : %.0lf\n",tmik);
printf("Tuketim tutari                  : %.2lf\n",ttut);
printf("Atiksu bedeli (yuzde 50)        : %.2lf\n",atbedel);
printf("TOPLAM                          : %.2lf\n\n",fatura);

//6.27 nuramalı sorunun çözümü :
printf("COZUM 6.27 \n");
float x1 ,x2 ,y1 ,y2 ,xort ,yort ,xtop ,ytop ;
printf("Bu program iki uc noktasinin klavyeden girilen dogru parcasinin orta noktasini bulup ekrana yazdirir!!\n\n");
printf("ilk noktanin x1 ve y1 degerini giriniz: ");
scanf("%f%f", &x1, &y1);
printf("ikinci noktanin x2 ve y2 degerini giriniz: ");
scanf("%f%f", &x2, &y2);
xort = (x1+x2)/2 ;
yort= (y1+y2)/2 ;
xtop = x1+x2 ;
ytop = y1+y2;
printf("----------------------------------------------------\n "); 
printf("       %.1f + %.1f    %.1f\n",x1 ,x2 ,xtop );
printf("xorta = --------- = ---- = %.1f\n",xort);
printf("             2        2  \n\n" );
printf("       %.1f + %.1f    %.1f\n",y1 ,y2 ,ytop );
printf("yorta = --------- = ---- = %.1f\n",yort);
printf("             2        2  \n" );
}
