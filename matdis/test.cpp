#include <iostream>

using namespace std;



int main() {
    string kata;
    int pilih;
    do {
        cout << "Pilih Menu\n";
        cout << "1. Contoh soal 1\n";
        cout << "2. Contoh soal 2\n";
        cout << "3. Contoh soal 3\n";
        cout << "4. Keluar\n";
        cin >> pilih;
        switch(pilih) {
            case 1: 
                            cout << "Berapa banyak string yang dapat dibentuk dengan\n menggunakan huruf-huruf dari kata MISSISSIPPI?\n";
                cout << "\nPenyelesaian\n";
                cout << "S = {M,I,S,S,I,S,S,I,P,P,I}\n";
                cout << "\t huruf M muncul 1 kali\n";
                cout << "\t huruf I muncul 4 kali\n";
                cout << "\t huruf S muncul 4 kali\n";
                cout << "\t huruf P muncul 2 kali\n";
                cout << "Jumlah string yang dapat dibentuk = P(11; 1,4,4,2)\n";
                cout << "\nAda dua car yang dapat digunakan untuk menyelesaikan\n persoalan ini, keduanya memberikan hasil yang sama\n";
                cout << "Cara 1: Jumlah string =\n";
                cout << "P(11; 1,4,4,2) =\n";
                cout << "11! / (1! * 4! * 4! * 2!) =\n";
                cout << "39916800 / 1152 =\n";
                cout << "34650\n";
                cout << "Cara 2: Jumlah string =\n";
                cout << "C(11, 1) * C(10, 4) * C(6, 4) * C(2, 2) =\n";
                cout << "11! / (1! * 10!) * 10! / (4! * 6!) * 6! / (4! * 2!) * 2! / (2! * 0!) =\n";
                cout << "11! / (1!) (4!) (4!) (2!) =\n";
                cout << "34650\n\n";
                cout << "Masukkan kata: ";
                break;
        }
    } while(pilih != 4);
}