#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ODEV2 Hazirlayan Efsun Ruzgar BAYIK\n");
    printf("------------------------------\n\n");

    // COZUM 6.1
    printf("COZUM 6.1:\n");
    printf("----------\n");
    {   // Tanımlamalar
        float yukseklik, cap;
        const double PI = 3.1419;

        // Giriş, girdiler
        printf("Yuksekligi giriniz (cm)  : ");
        scanf("%f", &yukseklik);
        
        printf("Capi giriniz (cm)        : ");
        scanf("%f", &cap);
        
        //Hesaplamalar
        float yaricap = cap / 2.0;
        float hacim = (PI * yaricap * yaricap * yukseklik) / 3.0;
        
        // Sonuç Çıktısı
        printf("Girdi degerleri : yukseklik %.0f ve cap %.0f\n", yukseklik, cap);
        printf("Dairesel koninin hacmi   : %.2f cm kupun\n\n", hacim);
    }

    // COZUM 6.4
    printf("COZUM 6.4:\n");
    printf("----------\n");
    {
        /*printf kullanarak yazdığım bu kodlar terminal kısmnda bize tam bir şekil olarak gelecektir.
        Kullandığım printf("...") içine yazdığım girdilerde boşluklara ve alt sıraya sorunsuz geçmelerine dikkat ettim.*/
        printf("    .- \" -,\n");
        printf("   / _  _   \\\n");
        printf("   \\ @  @   /\n");
        printf("    (_ =   _)\n");
        printf("       ')  (_\n");
        printf("       / ( (_ ')_ ,\n");
        printf("       \\__  (/-\"\n");
        printf("       __| | |___ \n");
        printf("     ((___ | ___))\n\n");
    }

    // COZUM 6.16
    printf("COZUM 6.16:\n");
    printf("-----------\n");
    {
        // Tanımlamalar
        int a, b;

        // Giriş, girdiler
        printf("0'dan farkli harmonik ortalamasi alinacak iki tam sayi giriniz: ");
        scanf("%d %d", &a, &b);
        
        // Hesaplamalar
        int carpim = 2 * a * b;
        int toplam = a + b;
        double ort = (double)carpim / toplam;
        
        // Sonuç Çıktısı
        printf("Harmonik ortalamasi alinacak degerler: %d %d\n", a, b);
        printf("---------------------------------------------------\n");
        printf("                      2 * %d * %d           %d\n", a, b, carpim);
        printf("Harmonik ortalama = ------------------ = ------- = %.2f\n", ort);
        printf("                         %d + %d            %d\n\n", a, b, toplam);
    }

    // COZUM 6.22
    printf("COZUM 6.22:\n");
    printf("-----------\n");
    {
        // Tanımlamalar
        int ilk, son, tuketim;
        double fiyat = 0.912857;
        double tutar, atiksu, toplam;
        
        // Giriş, girdiler
        printf("ilk gostergeyi giriniz : ");
        scanf("%d", &ilk);
        
        printf("son gostergeyi giriniz : ");
        scanf("%d", &son);
        
        // Hesaplamalar
        tuketim = son - ilk;
        tutar = tuketim * fiyat;
        atiksu = tutar * 0.5;
        toplam = tutar + atiksu;
        
        // Sonuç Çıktısı
        printf("----------------------------\n");
        printf("Tuketim miktari              : %d\n", tuketim);
        printf("Tuketim tutari               : %.2f\n", tutar);
        printf("Atiksu bedeli ( yuzde 50)    : %.2f\n", atiksu);
        printf("TOPLAM                       : %.2f TL\n\n", toplam);
    }

    // COZUM 6.27
    printf("COZUM 6.27:\n");
    printf("-----------\n");
    {
        // Tanımlamalar
        float x1, y1, x2, y2, x_Ort, y_Ort, x_Top, y_Top;

       // Giriş, girdiler
        printf("Birinci noktanin x1 ve y1 degerlerini giriniz: ");
        scanf("%f %f", &x1, &y1);

        printf("Ikinci noktanin x2 ve y2 degerlerini giriniz: ");
        scanf("%f %f", &x2, &y2);

       // Hesaplamalar
        x_Top = x1 + x2;
        y_Top = y1 + y2;
        x_Ort = x_Top / 2;
        y_Ort = y_Top / 2;

        printf("\n"); // Rahat okunsun diye çıktıdan önce bir satır boşluk.

        // x koordinat çıktısı
        printf("        %.0f + %.0f            %.0f\n", x1, x2, x_Top);
        printf("x0 =  ----------   =  ----------   =  %.1f\n", x_Ort);
        printf("          2               2\n");

        printf("\n"); // x ve y arasında bir satır boşluk.

        // y koordinat çıktısı
        printf("        %.0f + %.0f              %.0f\n", y1, y2, y_Top);
        printf("y0 =  ----------   =  ----------   =  %.1f\n", y_Ort);
        printf("          2                2\n");
    }

    return 0;

}
