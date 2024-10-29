#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int nomor_acak = 1+ (rand() % 100);
    int angka_tebakan = 0;
    
    while(angka_tebakan != nomor_acak ) {
        cout << nomor_acak;
        cout << "Masukkan angka tebakan : ";
        cin >> angka_tebakan;
        if ( angka_tebakan > nomor_acak ){
            cout << "Angka terlalu besar" << endl;
        } else if ( angka_tebakan < nomor_acak ) {
            cout << "angka terlalu kecil" << endl;
        } else {
            cout << "nomor benar : " << nomor_acak << endl;
        }
    }
}