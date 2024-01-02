#include <stdio.h>

int main() {
    char tus;
    double sayi;

    while (1) {
        // Kullanıcıdan bir tuşa basmasını bekleyin
        printf("w tusuna basin veya cikmak icin 'q' tusuna basin: ");
        scanf(" %c", &tus);

        // Eğer 'q' tuşuna basılırsa döngüden çıkın
        if (tus == 'q') {
            break;
        }

        // 'w' tuşuna basıldığında devam edin, başka bir tuşa basıldığında atla
        if (tus != 'w') {
            continue;
        }

        // Kullanıcıdan bir sayı al
        printf("Bir sayi girin: ");
        scanf("%lf", &sayi);

        // Girilen sayıyı 4 ile çarp
        sayi = sayi * 4;

        // Sonucu ekrana yazdır
        printf("%.2f\n", sayi);
    }

    return 0;
}