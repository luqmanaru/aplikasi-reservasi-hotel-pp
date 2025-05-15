#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char input_npm[15], input_kelas[10], input_kode, kode_kamar[1];
    char jenis_kamar[10], fasilitas[30], input_nama[30], input_traselanjutnya;
    long harga, total_bayar, uang_bayar, uang_kembalian;
    int input_lamainap;

    cout << "\t\t\tHOTEL FOUR SEASON" << endl;
    cout << "===========================================================" << endl;

awal:
    cout << "\nNama Anda\t\t : "; cin >> input_nama;
    cout << "NPM Anda\t\t : "; cin >> input_npm;
    cout << "Kelas\t\t\t : "; cin >> input_kelas;
    cout << "Kode Kamar [V/R/F]\t : "; cin >> input_kode;
    cout << "Lama Inap\t\t : "; cin >> input_lamainap;

    if (input_kode == 'V' || input_kode == 'v') {
        strcpy(kode_kamar, "V");
        strcpy(jenis_kamar, "VIP");
        strcpy(fasilitas, "AC, Wifi, TV Cable, Breakfast");
        harga = 1500000;
    } else if (input_kode == 'R' || input_kode == 'r') {
        strcpy(kode_kamar, "R");
        strcpy(jenis_kamar, "Reguler");
        strcpy(fasilitas, "AC, Wifi, Room Service");
        harga = 800000;
    } else {
        strcpy(kode_kamar, "F");
        strcpy(jenis_kamar, "Family");
        strcpy(fasilitas, "AC, Wifi, Extra Bed, Breakfast");
        harga = 1000000;
    }

    total_bayar = input_lamainap * harga;

    cout << "\n\t\t\tHOTEL FOUR SEASON" << endl;
    cout << "============================================================" << endl;
    cout << "\nNama Anda\t\t : " << input_nama << endl;
    cout << "NPM Anda\t\t : " << input_npm << endl;
    cout << "Kelas\t\t\t : " << input_kelas << endl;
    cout << "Kode Kamar\t\t : " << kode_kamar << endl;
    cout << "Jenis Kamar\t\t : " << jenis_kamar << endl;
    cout << "Fasilitas\t\t : " << fasilitas << endl;
    cout << "Lama Inap\t\t : " << input_lamainap << " hari" << endl;
    cout << "Harga\t\t\t : RP." << harga << endl;
    cout << "\nTotal Bayar \t\t : RP." << total_bayar << endl;
    cout << "\n==========================================================" << endl;

    cout << "\nUang Bayar\t\t : RP."; cin >> uang_bayar;
    uang_kembalian = uang_bayar - total_bayar;
    cout << "Uang Kembalian\t\t : RP." << uang_kembalian << endl;

    cout << "\nApakah Anda Ingin Ke Transaksi Selanjutnya PILIH [Y/T] : ";
    cin >> input_traselanjutnya;

    cout << "\nPROGRAM TELAH DI TUTUP" << endl;
    return 0;
}
