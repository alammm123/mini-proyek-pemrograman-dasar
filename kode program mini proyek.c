#include <stdio.h>

int main()
{
    // Deklarasi variabel untuk menyimpan input dan perhitungan
    int no, harga = 0, i = 1;
    int totalPembelian = 0, diskon, totalBayar, bayar, kembalian;
    char kar = 'y';
    
    // Menampilkan tampilan awal program
    printf("\t\t\t\t===============================================\n");
    printf("\t\t\t\t||         SELAMAT DATANG DI ALAM SPORT      ||\n");
    printf("\t\t\t\t===============================================\n");
    
    printf("\t~~\n\n");
    
    // Menampilkan menu produk yang tersedia
    printf("\tSEDIA: \n");
    printf("\t1. Bola voli\n\t2. Bola futsal\n\t3. Sepatu bola\n\t4. Sepatu voli\n\t5. Sepatu futsal\n\t6. Sepatu basket\n");
    printf("\tMASUKAN NO ITEM YANG INGIN BELI\n");
    
    // Loop utama untuk pemilihan produk
    while (kar == 'y')
    {
        // Meminta input nomor item dari user
        printf("\tITEM KE - %d : ", i);
        scanf("%d", &no);
        fflush(stdin);

        // Percabangan untuk menentukan harga berdasarkan item yang dipilih
        if (no == 1)
        {
            harga = 500000;
            printf("\tharga Bola voli = Rp. %d\n\n", harga);
        }
        else if (no == 2)
        {
            harga = 700000;
            printf("\tharga Bola futsal = Rp. %d\n\n", harga);
        }
        else if (no == 3)
        {
            harga = 1000000;
            printf("\tharga Sepatu bola = Rp. %d\n\n", harga);
        }
        else if (no == 4)
        {
            harga = 1000000;
            printf("\tharga Sepatu voli = Rp. %d\n\n", harga);
        }
        else if (no == 5)
        {
            harga = 1500000;
            printf("\tharga Sepatu futsal = Rp. %d\n\n", harga);
        }
        else if (no == 6)
        {
            harga = 2000000;
            printf("\tharga Sepatu basket = Rp. %d\n\n", harga);
        }
        else
        {
            printf("\tinput salah!\n");
        }

        // Menambahkan harga ke total pembelian
        totalPembelian += harga;
        
        printf("\tMAU TRANSAKSI LAGI? [y/t] = ");
        scanf(" %c", &kar);
        printf("\n");
        i++;
    }

    printf("\t~~\n");
    
    // Menampilkan total pembelian
    printf("\tTOTAL PEMBELIAN                     = Rp. %d\n", totalPembelian);
    
    // Menghitung diskon jika total pembelian > 3jt
    if (totalPembelian > 3000000)
    {
        diskon = 0.1 * totalPembelian;
        printf("\tANDA MENDAPAT DISKON SEBESAR        = Rp. %d\n", diskon);
        totalBayar = totalPembelian - diskon;
    }
    else
    {
        totalBayar = totalPembelian;
    }
    
    // Menampilkan total yang harus dibayar
    printf("\tTOTAL YANG HARUS DI BAYAR           = Rp. %d\n", totalBayar);
    
    // Meminta input uang pembayaran dari customer
    printf("\tMASUKAN UANG YANG ANDA BAYARKAN     = Rp. ");
    scanf("%d", &bayar);
    
    // Menghitung kembalian
    kembalian = bayar - totalBayar;
    
    // Memeriksa kecukupan uang pembayaran
    if (bayar > totalBayar)
    {
        printf("\tUANG KEMBALIAN ANDA                 = Rp. %d\n", kembalian);
    }
    else
    {
        printf("\tUANG ANDA KURANG                    = Rp. %d\n", totalBayar - bayar);
    }
    
    // Mengecek bonus kaos kaki untuk pembelian > 3jt
    if (totalPembelian > 3000000)
    {
        printf("\tSELAMAT ANDA MENDAPATKAN BONUS SEPASANG KAOS KAKI\n");
    }
    else
    {
        printf("\tANDA TIDAK MENDAPAT BONUS\n");
    }
    

    printf("\t\t\t~~\n");
    printf("         \t\t\tTERIMAKASIH SUDAH BELANJA DI ALAM SPORT\n");
    
    return 0;
}