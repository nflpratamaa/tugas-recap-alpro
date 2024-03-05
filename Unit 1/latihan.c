#include<stdio.h>

int main(){
    int v, s, t;

    printf("Masukkan jarak dan waktu (pake spasi): ");
    scanf("%d %d", &s, &t);

    float kecepatan = (float) s / t;

    printf("Masukkan kecepatan dan waktu (pake spasi): ");
    scanf("%d %d", &v, &s);

    float jarak = (float) v * s;

    printf("Masukkan jarak dan kecepatan (pake spasi): ");
    scanf("%d %d", &s, &v);

    float waktu = (float) s / v;

    printf("%.2f\n", kecepatan);
    printf("%.2f\n", jarak);
    printf("%.2f\n", waktu);

    return 0;
    
}