#include <iostream>
using namespace std;
// do while perulangan
int main() {

    system("cls"); // untuk membersihkan layar
    
    int jml_mhs, nilai;
    int jumlahNilai = 0;
    float rataRata;
    cout << "masukkan jumlah mahasiswa : " ;
    cin >> jml_mhs;


    for (int i = 1; i <= jml_mhs; i++) {
        cout << "masukkan nilai mahasiswa ke " << i << " : ";
        cin >> nilai;
        if (nilai > 100) {
            cout << "Nilai harus di bawah 100" << endl;
            continue;
        }
        jumlahNilai += nilai;
    }

    rataRata = jumlahNilai / jml_mhs;
    cout << "Total nilai semua mahasiswa " << jumlahNilai << endl;
    cout << "Total rata rata nilai mahasiswa " << rataRata << endl;

    system("pause"); // untuk menahan program

    // exit(0); // untuk keluar dari program
 }