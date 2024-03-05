#include <stdio.h>

int main() {
    int n;

    printf("Masukan jumlah elemen: ");
    scanf("%d", &n);

    int array[n];

    printf("Masukan elemen: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }

    int total = 0;

    for(int j=0;j<n;j++){
        total += array[j];
    }

    printf("Hasil penjumlahan seluruh elemen: %d\n", total);

    return 0;
}
