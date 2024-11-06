#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int permutasiDenganPengulangan(const string& str) {
    int n = str.length();
    unordered_map<char, int> frekuensi;

    // Hitung frekuensi setiap karakter
    for (char c : str) {
        frekuensi[c]++;
    }

    int pembilang = faktorial(n);
    int penyebut = 1;

    // Hitung penyebut berdasarkan frekuensi karakter dan tampilkan panjang frekuensi
    for (auto& pair : frekuensi) {
        penyebut *= faktorial(pair.second);
        cout << "Karakter '" << pair.first << "' muncul " << pair.second << " kali." << endl;
    }

    return pembilang / penyebut;
}

int main() {
    string kata;    
    int pilih;
    do{
        cout << "Pilih Menu\n";
        cout << "1. Contoh soal 1\n";
        cout << "2. Contoh soal 2\n";
        cout << "3. Contoh soal 3\n";
        cin >> pilih;
        switch(pilih)
            case 1: 
                switch(pilih)
                    case 1:
                        string kata = "MISSISSIPPI";
                        int jumlahHuruf[4] = {1, 4, 4, 2}; // Jumlah pengulangan M, I, S, P
                        int totalHuruf = kata.length();
                        int jumlahJenisHuruf = 4;

                        int hasil = permutasiDenganPengulangan(totalHuruf, jumlahHuruf, jumlahJenisHuruf);
                        cout << "Jumlah string yang dapat dibentuk dari kata MISSISSIPPI: " << hasil << endl;
                        break;
                    case 2: 
                        cout << "Masukkan sebuah kata: ";
                        cin >> kata;

                        int hasil = permutasiDenganPengulangan(kata);
                        cout << "Jumlah permutasi unik dari kata " << kata << " adalah " << hasil << endl;
                        system("pause");
                        break;
                break;
    }
    while(pilih != 0);
}