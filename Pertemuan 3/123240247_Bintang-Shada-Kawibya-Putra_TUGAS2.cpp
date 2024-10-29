#include <iostream>
using namespace std;

int belanja, harga, hargaakhir, umur;
int pilihan;
int pinjambuku;
int setelahdiskon, jumlahbbuku, totalharisewa, hargasewa, biayasewa;
int harisewa;
float diskon;

int main(){
    do {
        cout << "\n=========================" << endl;
        cout << "|          MENU          | "   << endl;
        cout << "==========================" << endl;
        cout << "|      1. Beli Buku      |" << endl;
        cout << "|      2. Pinjam Buku    |" << endl;
        cout << "|      3. Exit           |" << endl;
        cout << "==========================" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan)
        { 
            case 1: // Membeli Buku
            cout << "Masukkan Usia Anda: ";
            cin >> umur;
            cout << "Masukkan Total belanja: ";
            cin >> belanja;

            // Generasi X
            if (2024 - umur >= 1965 && 2024 - umur <= 1979) {
                if(belanja >= 300000) {
                    diskon = 15;
                } else if (belanja >= 200000) {
                    diskon = 10;
                } else if (belanja >= 100000) {
                    diskon = 5;
                } else {
                    diskon = 0;
                }
                setelahdiskon = belanja * ( diskon / 100 );
                hargaakhir = belanja - setelahdiskon;
                cout << "Total belanja akhir anda: " << hargaakhir << " setelah diskon " << diskon << "%" << endl;   
            }
            // Generasi Y
            else if (2024 - umur >= 1980 && 2024 - umur <= 1994) {
                if (belanja >= 300000) {
                    diskon = 20;
                } else if (belanja >= 200000) {
                    diskon = 15;
                } else if (belanja >= 100000) {
                    diskon = 10;
                } else {
                    diskon = 0;
                }
                setelahdiskon = belanja * (diskon / 100);
                hargaakhir = belanja - setelahdiskon;
                cout << "Total belanja akhir anda: " << hargaakhir << " setelah diskon " << diskon << "%" << endl;
            }
            // Generasi Z
            else if (2024 - umur >= 1995 && 2024 - umur <= 2009) {
                if ( 2024 - umur >= 2003 && 2024 - umur <= 2007) {
                if(belanja >= 300000) {
                    diskon = 25;
                }
                else if(belanja >= 200000) {
                    diskon = 20;
                }
                else if(belanja >= 100000) {
                    diskon = 15;
                } else {
                    diskon = 0;
                }
                setelahdiskon = belanja * (diskon / 100);
                hargaakhir = belanja - setelahdiskon;
                hargaakhir = hargaakhir - ( hargaakhir * 0.05);
                cout << "Total belanja akhir anda: " << hargaakhir << " setelah diskon " << diskon << "%" << " + 5% "<< endl;
                } else {
                    if(belanja >= 300000) {
                        diskon = 25;
                    }
                    else if(belanja >= 200000)
                    {
                        diskon = 20;
                    }
                    else if(belanja >= 100000)
                    {
                        diskon = 15;
                    } else {
                        diskon = 0;
                    }
                    setelahdiskon = belanja * (diskon / 100);
                    hargaakhir = belanja - setelahdiskon;
                    cout << "Total belanja akhir anda: " << hargaakhir << " setelah diskon " << diskon << "%" << endl;
                }

            } else {
                hargaakhir = belanja - setelahdiskon;
                cout << "Total belanja akhir anda: " << hargaakhir << " setelah diskon " << diskon << "%" << endl;
            }
            break;

            case 2: // Meminjam Buku
            cout << "Masukkan Usia Anda: "; 
            cin >> umur;
            cout << "Masukkan hari sewa (1-7): "; 
            cin >> harisewa;
            cout << "Masukkan Jumlah Buku: "; 
            cin >> jumlahbbuku;
            cout << "Lama sewa (dalam minggu): "; 
            cin >> totalharisewa;

            // Generasi X 
            if  (2024 - umur >= 1965 && 2024 - umur <= 1979) {
                if (harisewa >= 1 && harisewa <= 5){
                    hargasewa = jumlahbbuku * totalharisewa  * 10000;;
                }
                else if (harisewa == 6 || harisewa == 7){
                    hargasewa = jumlahbbuku * totalharisewa * 20000;
                }
                cout << "Biaya sewa anda: " << hargasewa << endl;
            }

            // Generasi Y
            else if (2024 - umur >= 1980 && 2024 - umur <= 1994) {
                if (harisewa >= 1 && harisewa <= 5){
                    hargasewa = jumlahbbuku * totalharisewa * 7500;
                }
                else if (harisewa == 6 || harisewa == 7){
                    hargasewa = jumlahbbuku * totalharisewa * 15000;
                }
                cout << "Biaya sewa anda: " << hargasewa << endl;
            }
            // Generasi Z
            else if (2024 - umur >= 1995 && 2024 - umur <= 2009) 
            {
                if (harisewa >= 1 && harisewa <= 5){
                    hargasewa = jumlahbbuku * totalharisewa * 5000;
                }
                else if (harisewa == 6 || harisewa == 7){
                    hargasewa = jumlahbbuku * totalharisewa * 10000;;
                }
                cout << "Biaya sewa anda: " << hargasewa << endl;
            } else {
                hargasewa = jumlahbbuku * totalharisewa * 2000;
                cout << "Total sewa anda: " << hargasewa << endl;
            }
            break;

            // Exit case
            case 3:
                cout << "Anda meninggalkan Menu" << endl;
                break;

            default:
                cout << "Pilihan tidak Sesuai, silakan coba lagi." << endl;
                break;
        }
    } while (pilihan != 3);

    return 0;
}