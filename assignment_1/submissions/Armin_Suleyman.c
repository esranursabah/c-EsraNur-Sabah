#include <stdio.h>
#define PI (3.1419)

int main () {
    printf("Soru 6.1 çozum:\n");

//yükseklik ve çap değeri virilen bir dairesel koninin hacmini hesaplayan program//
float r,h;    //r:yarıçap uzunluğu , h: koninin yüksekliği//
//Hacim=(1/3)πr 2 h//
float hacim;   
 printf("Tabanin yaricapini giriniz:\n");
 scanf("%f",&r);
 printf("Koninin yuksekligini giriniz:\n");
 scanf("%f",&h);
hacim=(1.0/3.0)*PI*r*r*h;
printf("Koninin hacmi:%2.2f cm küptür.\n\n\n",hacim);


printf("Soru 6.4 cozumu:\n\n");

printf("    .-\"-,    \n");
printf("   / _  _ \\   \n");
printf("   \\ @  @ /   \n");
printf("    (_= _)     \n");
printf("      ') (_     \n");
printf("      /  (  (_')_,  \n");
printf("      \\___(/-''    \n");
printf("     ___|||___     \n");
printf("    ( (__|__) )    \n\n\n");




printf("Soru 6.16 cozumu:\n"); //girilen iki sayının harmonik ortalamasını alan program//
 
//girilen sayılardan biri a, biri b olsun. bu sayıların harmonik ortalaması=(2ab) / (a+b) formülüyle hesaplanır. //
 float a,b;
 printf("sifirdan farkli bir tam sayi giriniz\n");
scanf("%f",&a); 
printf("sifirdan farkli bir tam sayi giriniz\n"); 
scanf("%f",&b);

 float harmonikOrtalama;
 

harmonikOrtalama=(2*a*b) / (a+b);
printf("girdiğiniz sayilarin harmonik ortalamasi: %2.2f \n\n\n\n",harmonikOrtalama);

printf("Soru 6.22 cozumu:\n");
//ilk gösterge ve son gösterge değerlerine göre su faturası bedelini hesaplayan program//

float ilkgosterge,songosterge,kullanimmiktari,kullanimtutari,atiksubedeli,fatura,metrekupfiyati;
printf("ilk göstergeyi giriniz:\n");
scanf("%f",&ilkgosterge);

printf("son göstergeyi giriniz:\n");
scanf("%f",&songosterge);
kullanimmiktari=songosterge  -ilkgosterge;
//su metreküp fiyatı=0,912857 olarak hesaplanmıştır//
metrekupfiyati=0.912857;
kullanimtutari= kullanimmiktari * metrekupfiyati;
atiksubedeli= kullanimtutari / 2 ;
fatura=atiksubedeli + kullanimtutari;

printf("faturna bedeli:%2.2f \n\n\n",fatura);


//iki uç noktasının koordinatları verilen doğru parçasının orta noktasını hesaplayan program //
printf("Soru 6.27 cozumu:\n\n");
int x1,x2,y1,y2;
float ortax,ortay;
printf("baslangic noktasinin koordinatlarini(x,y) giriniz:\n");
printf("x: ");
scanf("%d",&x1);
printf("\n");
printf("y: ");
scanf("%d",&y1);
printf("\n");

printf("bitiş noktasinin koordinatlarini (x,y) giriniz\n");
printf("x: ");
scanf("%d",&x2);
printf("\n");
printf("y: ");
scanf("%d",&y2); 
printf("\n");
/*Ortna noktanın koordinatları bulunurken başlangıç noktasının x koordinatı ile bitiş noktasının x koordinatının aritmetik ortalaması alınır.
Aynı şekilde başlangıç ve bitiş noktalarının y koordinatlarının aritmetik ortalaması alınır ve bulunan değerler (x,y) biçiminde yazılır*/

ortax=(x1 + x2) / 2;
ortay=(y1 + y2) / 2;

printf("orta noktanin koordinatlari:(%2.0f , %2.0f)",ortax,ortay);








return 0;

}
