#include <iostream>

using namespace std;

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int permutasiDenganPengulangan(int totalHuruf, int* jumlahPengulangan, int jumlahJenisHuruf) {
    int pembilang = faktorial(totalHuruf);
    int penyebut = 1;
    for (int i = 0; i < jumlahJenisHuruf; i++) {
        penyebut *= faktorial(jumlahPengulangan[i]);
    }
    return pembilang / penyebut;
}

int main() {
    string kata = "MISSISSIPPI";
    int jumlahHuruf[4] = {1, 4, 4, 2}; // Jumlah pengulangan M, I, S, P
    int totalHuruf = kata.length();
    int jumlahJenisHuruf = 4;

    int hasil = permutasiDenganPengulangan(totalHuruf, jumlahHuruf, jumlahJenisHuruf);
    cout << "Jumlah string yang dapat dibentuk dari kata MISSISSIPPI: " << hasil << endl;

    return 0;
}