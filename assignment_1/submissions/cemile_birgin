#include <stdio.h> // Giris cikis islemleri için gerekli kütüphane

#define PI 3.14 // Pi sabiti tanimlaniyor
#define birim_fiyat 0.912857 // Su birim fiyati sabiti

int main() {
    printf("ODEV1 HAZIRLAYAN CEMİLE BİRGİN\n");
    printf("cozum 6.1\n");

    float yukseklik, cap, hacim;

    // Kullanicidan koninin çap ve yüksekligini al
    printf("cap ve yuksekligi giriniz lutfen :");
    scanf("%f %f", &yukseklik, &cap);

    // Koninin hacmini hesapla: (1/3)*PI*r*h
    hacim = 1 / 3.0 * yukseklik * cap * PI;

    // Hacmi ekrana yazdir
    printf("hacim=%.2f \n", hacim);

    // ASCII sanat bölümü
    printf("cozum 6.4\n");
    printf("    .-\"-, \n");
    printf("  / _  _   \\\n");
    printf("  \\ @  @   /\n");
    printf("  (_  =  _)\n");
    printf("    ')  (__\n");
    printf("    /(  (_ )_,\n");
    printf("    \\___(/-\"\n");
    printf("  ___| | |__\n");
    printf(" ( (__ | __) )\n");

    // Harmonik ortalama hesaplama
    printf("cozum 6.16\n");
    int sayi1, sayi2;
    float harmonik_ortalama;

    printf("sayi1 ve sayi2 degerlerini giriniz :");
    scanf("%d%d", &sayi1, &sayi2);

    // Sifir kontrolü
    if (sayi1 == 0 || sayi2 == 0) {
        printf("Hata:Sifirdan farkli iki tam sayi giriniz.\n");
        return 0;
    }

    // Harmonik ortalama formülü
    harmonik_ortalama = (2.0 * sayi1 * sayi2) / (sayi1 + sayi2);
    printf("harmonik ortalama=%.2f\n", harmonik_ortalama);

    // Su faturasi hesaplama
    printf("cozum 6.22\n");
    int ilk, son;
    float atiksu, tuketim_tutari, tuketim, fatura;

    printf("ilk gostergeyi giriniz  :");
    scanf("%d", &ilk);

    printf("son gostergeyi giriniz  :");
    scanf("%d", &son);

    // Tüketim ve fatura hesaplamalari
    tuketim = (son - ilk);
    tuketim_tutari = (tuketim * birim_fiyat);
    atiksu = tuketim_tutari * 0.5;
    fatura = tuketim_tutari + atiksu;

    printf("kullanilan su miktari=%.2f\n", tuketim);
    printf("tuketim tutari=%.2f\n", tuketim_tutari);
    printf("atiksu degeri=%.2f\n", atiksu);
    printf("gelen fatura=%.2f TL\n", fatura);

    // Orta nokta hesaplama
    printf("cozum 6.27\n");
    float x1, x2, y1, y2;
    float xo, yo;

    printf("x1,x2,y1,y2 degerlerini giriniz:");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);

    xo = (x1 + x2) / 2;
    yo = (y1 + y2) / 2;

    printf("x'in orta noktasi=%.f\n", xo);
    printf("y'nin orta noktasi=%.f\n", yo);

    return 0;
}
