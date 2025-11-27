#include <stdio.h>
#include <stdlib.h>
#define PI (3.1419)

int main()
{
    //SORU 6.1
    printf("soru 6.1 cozum:\n");
    double hacim,yaricap,tabanalani,yukseklik;

    printf("yaricap giriniz:");
    scanf("%lf",&yaricap);
    printf("yaricap: %.2lf\n",yaricap);

    printf("yukseklik giriniz:");
    scanf("%lf",&yukseklik);
    printf("yukseklik: %.2lf\n",yukseklik);

    tabanalani=PI*yaricap*yaricap;
    printf("hacim: %.2lf",hacim=(tabanalani*yukseklik)/3);

    return 0;


    //SORU 6.4
    printf("soru 6.4 cozum:\n");
    printf("semboller girip resim olusturun:\n");
    printf("  .-''-,\n");
    printf(" /_ _   \\ \n");
    printf(" \\@ @   /\n");
    printf(" (_=__)\n");
    printf("   )(_\n");
    printf("  /((_ )_,\n");
    printf("  \\__(/-''\n");
    printf(" __|||__\n");
    printf("((__|__))\n");

    return 0;



    //SORU 6.16
    printf("soru 6.16 cozum:\n");
    double harmonikort,sayi1,sayi2;     //sayi≠0 ve sayi2≠0
    printf("sayi1 giriniz:");
    scanf("%lf",&sayi1);

    printf("sayi2 giriniz:");
    scanf("%lf",&sayi2);

    harmonikort=(2*sayi1*sayi2)/(sayi1+sayi2);
    printf("harmonik ort: %.2lf",harmonikort);

    return 0;


    //SORU 6.22
    printf("soru 6.22 cozum:\n");
    double a,b,c,d,e,total;   //a=ilk gösterge,b=son gösterge,c=tüketim miktarı,d=tüketim tutarı,e=atıksu bedeli,f=su metreküp fiyatı
    const double f=0.912857;
    printf("a degeri giriniz:");
    scanf("%lf",&a);

    printf("b degeri giriniz:");
    scanf("%lf",&b);
    c=b-a;

    printf("c degeri: %.0lf\n",c);
    d=c*f;

    printf("d degeri: %.2lf\n",d);
    e=d/2;

    printf("e degeri: %.2lf\n",e);
    total=d+e;
    printf("TOTAL: %.2lf",total);

    return 0;


    //SORU 6.27
    printf("soru 6.27 cozum:\n")
    int x1,x2,y1,y2;        //x1 ve y1 doğru parçasının 1.uç nokta koordinatları,y1 ve y2 doğru parçasının 2.uç nokta koordinatları
    double xo,yo;           //xo ve yo bu doğru parçasının orta nokta koordinatları
    printf("x1 ve y1 degerlerini sirayla girin:");
    scanf("%d %d",&x1,&y1);

    printf("x2 ve y2 degerlerini sirayla girin:");
    scanf("%d %d",&x2,&y2);

    xo=(x1+x2)/2;
    yo=(y1+y2)/2;

    printf("orta nokta x: %.1lf\t ",xo);
    printf("orta nokta y: %.1lf ",yo);

   return 0;



}
