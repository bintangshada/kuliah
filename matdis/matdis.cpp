#include <iostream>
#include <string>
#include <map>

using namespace std;

// Fungsi untuk menghitung faktorial
int faktorial(int x) {
    if (x <= 1) return 1;
    return x * faktorial(x - 1);
}

int permutasiDenganPengulangan(const string& str) {
    map<char, int> frekuensi;
    std::size_t n = str.length(); // Menggunakan std::size_t untuk menghindari peringatan konversi

    cout << "Menghitung frekuensi setiap karakter dalam string \"" << str << "\"\n";
    for (char c : str) {
        frekuensi[c]++;
    }

    for (auto& pair : frekuensi) {
        cout << "Karakter '" << pair.first << "' muncul " << pair.second << " kali.\n";
    }

    int pembilang = faktorial(static_cast<int>(n));
    cout << "Pembilang (faktorial dari panjang string " << n << "): " << pembilang << endl;
    cout << "Rumus: " << n << "! = " << pembilang << endl;

    int penyebut = 1;

    cout << "Menghitung penyebut berdasarkan frekuensi karakter\n";
    for (auto& pair : frekuensi) {
        penyebut *= faktorial(pair.second);
        cout << "Faktorial dari frekuensi karakter '" << pair.first << "' (" << pair.second << "): " << faktorial(pair.second) << endl;
        cout << "Rumus: " << pair.second << "! = " << faktorial(pair.second) << endl;
    }

    cout << "Penyebut (hasil kali faktorial dari frekuensi karakter): " << penyebut << endl;

    int hasil = pembilang / penyebut;
    cout << "Rumus: " << pembilang << " / " << penyebut << " = " << hasil << endl;
    cout << "Hasil permutasi dengan pengulangan: " << hasil << endl;
    return hasil;
}

int main() {
    string kata;
    int pilih;
    do {
        system("cls");
        cout << "Pilih Menu\n";
        cout << "1. Contoh soal 1\n";
        cout << "2. Contoh soal 2\n";
        cout << "3. Contoh soal 3\n";
        cout << "4. Keluar\n";
        cin >> pilih;
        switch(pilih) {
            case 1: {
                system("cls");
                cout << "Contoh soal 1: \n";
                cout << "Berapa banyak string yang dapat dibentuk dengan\n menggunakan huruf-huruf dari kata MISSISSIPPI?\n";
                system("pause");
                system("cls");
                cout << "Penyelesaian\n";
                cout << "S = {M,I,S,S,I,S,S,I,P,P,I}\n";
                cout << "\t huruf M muncul 1 kali\n";
                cout << "\t huruf I muncul 4 kali\n";
                cout << "\t huruf S muncul 4 kali\n";
                cout << "\t huruf P muncul 2 kali\n";
                cout << "n = 1 + 4 + 4 + 2 = 11 buah = jumlah elemen himpunan S\n";
                system("pause");
                system("cls");
                cout << "Ada dua car yang dapat digu1nakan untuk menyelesaikan\n persoalan ini, keduanya memberikan hasil yang sama\n";
                cout << "\nCara 1: Jumlah string =\n";
                cout << "P(11; 1,4,4,2) =\n";
                cout << "11! / (1! * 4! * 4! * 2!) =\n";
                cout << "39916800 / 1152 =\n";
                cout << "34650\n";
                system("pause");
                system("cls");
                cout << "Cara 2: Jumlah string =\n";
                cout << "C(11, 1) * C(10, 4) * C(6, 4) * C(2, 2) =\n";
                cout << "11! / (1! * 10!) * 10! / (4! * 6!) * 6! / (4! * 2!) * 2! / (2! * 0!) =\n";
                cout << "11! / (1!) (4!) (4!) (2!) =34650\n";
                system("pause");
                cout << "Masukkan kata: ";
                cin >> kata;
                int hasil = permutasiDenganPengulangan(kata);
                cout << "Hasil: " << hasil << endl;
                break;
            }
            case 2: {
                // Contoh soal 2
                cout << "Masukkan kata: ";
                cin >> kata;
                int hasil = permutasiDenganPengulangan(kata);
                cout << "Hasil: " << hasil << endl;
                break;
            }
            case 3: {
                // Contoh soal 3
                cout << "Masukkan kata: ";
                cin >> kata;
                int hasil = permutasiDenganPengulangan(kata);
                cout << "Hasil: " << hasil << endl;
                break;
            }
            case 4: {
                cout << "Keluar dari program.\n";
                break;
            }
            default: {
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
            }
        }
    } while (pilih != 4);

    return 0;
}