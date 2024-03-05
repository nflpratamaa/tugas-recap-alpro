#include<stdio.h>

int main(){
    int jmltransaksi;

    printf("Masukkan banyaknya transaksi: ");
    scanf("%d", &jmltransaksi);

    int transaksi[jmltransaksi];

    if(jmltransaksi <=0){
        printf("Tidak ada transaksi hari ini.\n");
    } else{
        for(int i=0;i<jmltransaksi;i++){
        printf("Masukkan nominal transaksi ke-%d: ", i+1);
        scanf("%d",&transaksi[i]);
        }
    }

    int totpengeluaran = 0;
    for(int i=0;i<jmltransaksi;i++){
        totpengeluaran += transaksi[i];
    }

    printf("Total pengeluaran hari ini: %d\n", totpengeluaran);

    return 0;
}