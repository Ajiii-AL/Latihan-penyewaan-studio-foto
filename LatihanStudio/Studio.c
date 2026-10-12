#include <stdio.h>

int main(){

    int jenis_studio;
    int durasi_sewa = 0;
    int fotografer;
    int diskon = 0;
    int total_pembayaran = 0;
    int biaya_sewa = 0;
    int sewa_fotografer = 0;
    int harga_Akhir = 0;

    printf("================================================ \n");
    printf("1. studio reguler \n");
    printf("2. studio premium \n");
    printf("================================================ \n");
    printf("Masukkan jenis studio : ");
    scanf("\n %d", &jenis_studio);
    printf("Masukkan durasi sewa : ");
    scanf("\n %d", &durasi_sewa);
    printf("pakai fotografer atau tidak  (1 yes / 2 no): ");
    scanf("\n %d", &fotografer);

    printf("================================================ \n");

    if(jenis_studio == 1){
            biaya_sewa = 100000;
        }else if(jenis_studio == 2){
            biaya_sewa = 175000;
        }else{
            printf("jenis studio tidak ada \n");

            return 0;
        }

    if (fotografer == 1){
            sewa_fotografer = 150000;
        }else if(fotografer == 2){
            sewa_fotografer = 0;
        }else{
            printf("fotografer tidak valid \n");
            return 0;
        }
        
        biaya_sewa = biaya_sewa * durasi_sewa;

    if(durasi_sewa >= 1){
        if(durasi_sewa >= 3){

            diskon = (biaya_sewa * 10) / 100;
            harga_Akhir = biaya_sewa - diskon;

        }else{
            harga_Akhir = biaya_sewa;
            diskon = 0; 
        }

    }else{
        printf("durasi sewa tidak boleh kurang dari 1 \n");
        return 0;
  
    }

    total_pembayaran = harga_Akhir + sewa_fotografer;

    printf("================================================ \n");
    printf("biaya sewa : %d \n", biaya_sewa);
    printf("biaya fotografer : %d \n", sewa_fotografer);
    printf("diskon : %d \n", diskon);
    printf("total pembayaran : %d", total_pembayaran);

    return 0;
}