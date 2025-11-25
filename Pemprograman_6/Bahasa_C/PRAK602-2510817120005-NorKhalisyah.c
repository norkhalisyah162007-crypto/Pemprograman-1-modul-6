#include <stdio.h>

int main() {
    int n;

    printf("Masukkan jumlah ruangan: ");
    scanf("%d", &n);

    int zetsu[1000];

    printf("Masukkan jumlah zetsu di setiap ruangan: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }

    printf("Hasil setelah membelah diri:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", zetsu[i] * (i + 1));
    }

    return 0;
}
