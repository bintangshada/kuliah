#include <iostream>
using namespace std;
// switch case

int main() {
    int menu, jumlah_tiket, harga;
    float jumlah_bayar;
    cout << "WELCOME TO JAPARI PARK" << endl;
    cout << "Paket 1 Singa 50K" << endl;
    cout << "Paket 2 Rusa 500k" << endl;
    cout << "Paket 3 Zootopia 750K" << endl;

    cin >> menu;
    switch(menu) {
        case 1 :
        cout << "Paket singa keren bikin puas" << endl;
        harga = 50000;
        break;
        case 2 :
        cout << "Paket Rusa keren bikin keren" << endl;
        harga = 500000;
        break;
        case 3 :
        cout << "Paket Zootopia keren bikin puas" << endl;
        harga = 750000;
        break;
        default :
        cout << "gajadi yaudah";
        return 0;
    }
    cout << "Masukkan Jumlah tiket :";
    cin >> jumlah_tiket;
    jumlah_bayar = jumlah_tiket*harga;
    cout << "Jadi total Jumlah bayar adalah : Rp" << jumlah_bayar;
}