#include <stdio.h>

int main() {
    int n1, n2;

    printf("Masukkan n1 dan n2: ");
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama");
        return 0;
    }

    int baris1[1000], baris2[1000];

    printf("Masukkan angka baris pertama: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &baris1[i]);
    }

    printf("Masukkan angka baris kedua: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &baris2[i]);
    }

    printf("Hasil: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", baris1[i] * baris2[i]);
    }

    return 0;
}