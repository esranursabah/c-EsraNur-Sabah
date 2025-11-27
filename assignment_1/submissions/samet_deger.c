#include <stdio.h>
#include <stdlib.h>
#define PI 3.1419
int main()
{
  printf("odevi hazırlayan : samet deger") ; 
    
int yukseklik, yaricap;

printf("cozum 6.1\n");

 printf("yuksekligi giriniz (cm)\n");
  scanf("%d",&yukseklik);
   printf("yaricapi giriniz (cm)\n");
   scanf("%d",&yaricap);

    double hacim = (1/ 3.0) * (PI * yaricap * yaricap * yukseklik);
    printf ("KONININ HACMI %.2lf kuptur. \n",hacim);


printf("cozum 6.4\n");
printf(" .-\"-, \n");
printf("/_ _  \\ \n");
printf("\\@ @  /\n");
printf("(_= _)\n");
printf("  `) (_ \n");
printf("  / ((_`)_,\n");
printf("  \\__ (/-\" \n");
printf("  __|||__\n");
printf(" ((__|__))\n\n");


printf("cozum 6.16\n");

 int a,b,top,carp;

 printf ("a sayisini giriniz.\n");
 scanf("%d",&a);
 printf("b sayisini giriniz.\n");
 scanf(" %d",&b);
 float harmonikortalama = (2.0* a *b)/(a+b);
 top=a+b ;
 carp=2*a*b;
 printf("HARMONIK ORT ALINACAK DEGERLER:%d %d\n",a,b);
 printf("----------------------------------------------\n");
 printf("                     2*%d*%d       %d \n",a,b,carp);
 printf("Harmonik ortalama = ----------= ------------- = %.2f \n",harmonikortalama);
 printf("                     %d+%d         %d \n\n",a,b,top);


printf("cozum 6.22\n");
int ilk, son;

printf("ilk gostergeyi gir.\n\n");
scanf(" %d",&ilk);
printf("son gostergeyi gir.\n");
scanf(" %d",&son);

printf("-----------------\n");
printf("Tuketim miktari = %d\n",(son-ilk));
printf("Tuketim tutari = %.2f\n",(son-ilk) * (0.912858));
printf("Atiksu bedeli = %.2f\n",(son-ilk) * (0.912858)*0.5);
printf("TOPLAM   = %.2f\n",(son-ilk) * (0.912858)*1.5);


printf("cozum 6.27\n");
float a1, a2, b1, b2, ao, bo;

printf("ilk noktanin x1 ve y1 noktalarini gir.");
scanf ("%f %f",&a1, &b1);

printf("ikinci noktanin x2 ve y2 değerini gir.");
scanf("%f %f",&a2, &b2);

printf("---------------------------------------------\n");

ao = (a1 + a2) / 2;
bo = (b1 + b2) / 2;

 printf("  %.1f + %.1f        %.1f\n", a1, a2, a1 + a2);
printf("xo = ----------- = ------------ = %.lf\n",ao);
printf("         2             2\n\n");

printf("   %.1f + %.1f        %.1f\n", b1, b2, b1 + b2);
printf("yo = ----------- = ------------- = %.lf\n",bo);
printf("         2             2\n\n");


return 0;
}
