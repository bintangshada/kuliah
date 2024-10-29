#include <iostream>
using namespace std;
// do while perulangan
int main() {
    int angka;
    cout << "Masukkan deret angka : " << endl;
    cin >> angka;
    int jumlah = 0;
    int i = 0;
    do { 
        cout << i;
        i++;
        if ( i <= angka) {
            cout << " + ";
            jumlah += i;
        }
    } while (i <= angka);
    if (i > angka) {
        cout << " = " << jumlah;
    };
 }