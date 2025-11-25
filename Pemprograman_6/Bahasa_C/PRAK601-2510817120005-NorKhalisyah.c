#include <stdio.h>

int main() {
    int baris, kolom;

    printf("Masukkan jumlah baris dan kolom: ");
    scanf("%d %d", &baris, &kolom);

    int total = baris * kolom;
    int data[1000];

    printf("Masukkan angka-angkanya: ");
    for(int i = 0; i < total; i++) {
        scanf("%d", &data[i]);
    }

    printf("Hasil:\n");
    int index = 0;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            printf("%d ", data[index]);
            index++;
        }
        printf("\n");
    }

    return 0;
}
