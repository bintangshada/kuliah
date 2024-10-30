#include <iostream>
using namespace std;

void penjumlahan();
void pengurangan();
void pembagian();
void perkalian();

int main() {
    cout << "Pilih operator : \n1. penjumlahan \n2. pengurangan \n3. pembagian \n4. perkalian \n";
    int pilih;
    cin >> pilih;

    do {
        switch (pilih) {
                case 1:
                    penjumlahan();
                break;
                case 2:
                    pengurangan();
                break;
                case 3:
                    pembagian();
                break;
                case 4:
                    perkalian();
                break;
                case 0:
                    exit(0);
                break;
                default:
                    cout << "Pilihan yang anda masukkan salah" << endl;
                break;
            }
    } while (pilih != 0);
}

void penjumlahan() {
    int a,b;
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;
    int hasil = a + b;
    cout << "Hasil penjumlahan = " << hasil << endl;
}

void pengurangan() {
    int a,b;
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;
    int hasil = a - b;
    cout << "Hasil penjumlahan = " << hasil << endl;
}

void pembagian() {
    int a,b;
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;
    int hasil = a / b;
    cout << "Hasil penjumlahan = " << hasil << endl;
}

void perkalian() {
    int a,b;
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;
    int hasil = a * b;
    cout << "Hasil penjumlahan = " << hasil << endl;
}