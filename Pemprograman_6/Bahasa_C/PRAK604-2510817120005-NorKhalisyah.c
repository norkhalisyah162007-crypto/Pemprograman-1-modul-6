#include <stdio.h>
#include <string.h>

int main() {
    char kode[1000], pesan[1000];

    printf("Masukkan kode Shikamaru: ");
    if (fgets(kode, sizeof(kode), stdin) == NULL) return 1;
    kode[strcspn(kode, "\n")] = 0;

    printf("Masukkan pesan yang diterima: ");
    if (fgets(pesan, sizeof(pesan), stdin) == NULL) return 1;
    pesan[strcspn(pesan, "\n")] = 0;

    int panjang_kode = strlen(kode);
    int panjang_pesan = strlen(pesan);

    if (panjang_kode != panjang_pesan) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    char hasil[panjang_kode + 1];
    int jumlah_bintang = 0;
    int jumlah_pagar = 0;

    for (int i = 0; i < panjang_kode; i++) {
        if (kode[i] == pesan[i]) {
            hasil[i] = '*';
            jumlah_bintang++;
        } else {
            hasil[i] = '#';
            jumlah_pagar++;
        }
    }
    hasil[panjang_kode] = '\0';

    printf("%s\n", hasil);
    printf("*=%d\n", jumlah_bintang);
    printf("#=%d\n", jumlah_pagar);

    if (jumlah_bintang >= jumlah_pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}
