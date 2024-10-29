#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int menu, jumlah_tiket, nim, kondisi_bagus, harga, uang_diberikan;
    string nama, tgl, judul;
    float jumlah_bayar;
    cout << "WELCOME TO JAPARI PARK" << endl;
    cout << "1. Meminjam Buku" << endl;
    cout << "2. Mengembalikan Buku" << endl;
    cout << "3. Membeli Buku" << endl;

    cin >> menu;
    switch(menu) {
        case 1 :
        cout << "nama \t:";
        cin.ignore(); // membersihkan newline dari buffer
        getline(cin, nama);
        cout << "nim \t:"; cin >> nim;
        cout << "tanggal pinjam \t:"; 
        cin.ignore();
        getline(cin, tgl);
        cout << "nama \t:" << nama << endl;
        cout << "nim \t:" << nim << endl;
        break;
        ////////////////////////////////////////////////////////////
        case 2 :
        cout << "nama \t:";
        cin.ignore();
        getline(cin, nama);
        cout << "nim \t:"; cin >> nim;
        cout << "tanggal kembali \t:"; 
        cin.ignore();2

        getline(cin, tgl);
        cout << "Apakah Buku kondisi baik? 1=y 2=n" << endl;
        cin >> kondisi_bagus;
            // switch(kondisi_bagus) {
            //     case 1:
            //     cout << "terimakasih" << endl;
            //     break;
            //     case 2:
            //     cout << "anda membayar denda" << endl;
            //     break; 
            // }
            if (kondisi_bagus == 1) {
                cout << "terimakasih" << endl;
            } else {
                cout << "anda membayar denda" << endl;
            }
        break;
        case 3 :
        cout << "nama \t:";
        cin.ignore();
        getline(cin, nama);
        cout << "judul \t:";
        cin.ignore();
        getline(cin, judul);
        cout << "Harga \t:"; cin >> harga; 
        cout << "Uang diberikan \t:"; cin >> uang_diberikan;
        cout << "Uang kembali \t:" << uang_diberikan - harga;
        break;
        default :
        cout << "gajadi yaudah";
        return 0;
    }
}