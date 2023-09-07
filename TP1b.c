//MHD. AL-HAFIDZ ABD. AZIZ KURNIAWAN
//2702369882
#include <stdio.h>

int main(){
    int i=0;
    char Loop ='y';
    unsigned int TotalMasuk = 0, HargaAkhir = 0, DiskonBelanja = 0, DiskonTransaksi = 0, HargaAsli = 0;

    puts("=========================================");
    puts("Tugas menghitung total belanja dan diskon");
    puts("=========================================");

    printf("\n");

    while (Loop == 'y'){
        i++;
        printf("Inputkan total belanja %d: Rp.", i);
        scanf("%u", &TotalMasuk);
        printf("apakah ingin belanja lagi? (y/n) ");
        scanf(" %c", &Loop);

        HargaAsli = HargaAsli + TotalMasuk;

    if(TotalMasuk > 200000 && TotalMasuk <= 500000){
        DiskonBelanja = DiskonBelanja + TotalMasuk * 0.1;
        TotalMasuk = TotalMasuk * 0.9;
    } else if (TotalMasuk > 500000 && TotalMasuk <= 1000000){
        DiskonBelanja = DiskonBelanja + TotalMasuk * 0.2;
        TotalMasuk = TotalMasuk * 0.8;
    } else if (TotalMasuk > 1000000){
        DiskonBelanja = DiskonBelanja + TotalMasuk * 0.3;
        TotalMasuk = TotalMasuk * 0.7;
    }

    if(i%4 == 0) {
        DiskonTransaksi = DiskonTransaksi + TotalMasuk * 0.2;
        TotalMasuk = TotalMasuk * 0.8;
    }
    HargaAkhir += TotalMasuk;
    }
    
    printf("\n");
    
    puts("Detail Transaksi");
    puts("=========================================");

    printf("\nTotal belanja sebelum di diskon       : Rp.%u", HargaAsli);
    printf("\nTotal diskon dari total belanja       : Rp.%u", DiskonBelanja);
    printf("\nTotal diskon dari total transaksi     : Rp.%u", DiskonTransaksi);
    printf("\nHarga akhir                           : Rp.%u\n\n", HargaAkhir);
    puts("=========================================");
    printf("\n\nTerima kasih sudah berbelanja :)");
}