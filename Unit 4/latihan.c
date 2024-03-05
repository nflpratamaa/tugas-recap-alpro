#include<stdio.h>

int s;

void keliling(){
    int kelpersegi = 4*s;
    printf("%d\n", kelpersegi);
}

void luas(){
    int luaspersegi = s * s;
    printf("%d\n", luaspersegi);
}

void volume(){
    int volkubus = s*s*s;
    printf("%d\n", volkubus);
}

int main(){
    printf("Masukkan sisi: ");
    scanf("%d", &s);

    keliling();
    luas();
    volume();

    return 0;

}