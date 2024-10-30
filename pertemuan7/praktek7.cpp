#include <iostream>
using namespace std;

void opsi1();
void opsi2();
int jariJari;
double phi = 22/7;

int main() {
    cout << "Pilih operator : \n1. opsi 1 \n2. opsi 2 \n";
    int pilih;
    cin >> pilih;

    do {
        switch (pilih) {
                case 1:
                    opsi1();
                break;
                case 2:
                    opsi2();
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

void opsi1() {
    void keliling();
    void luas();
    int pilih;
    cout << "Masukkan jari-jari lingkaran : ";
    cin >> jariJari;
    cout << "Pilih operator : \n1. keliling \n2. luas \n";
    cin >> pilih;
    switch (pilih) {
        case 1: 
            keliling();
        break;
        case 2:
            luas();
        break;
        case 0:
            exit(0);
        break;
        default:
            cout << "Pilihan yang anda masukkan salah" << endl;
        break;
    }
}


void opsi2() {
    int a;
    cout << "Masukkan angka : ";
    cin >> a;
    if (a % 2 == 1) {
        cout << "Bilangan Ganjil" << endl;
    } else {
        cout << " Bilangan Genap" << endl;
    }
}

void keliling() {
   int hasil = phi * jariJari * 2;
   cout << hasil << endl;
}

void luas() {
   int luas = phi * jariJari * jariJari;
   cout << luas << endl;
}