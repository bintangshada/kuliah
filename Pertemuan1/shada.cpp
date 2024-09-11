#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int nim;
    string nama, plug;

    cout << "Masukkan:\n";
    cout << "Nama: ";
    getline(cin, nama, '\n'); // Batasi input hingga karakter newline
    cout << "NIM: ";
    cin >> nim;
    cin.ignore();
    cout << "Plug: ";
    getline(cin, plug, '\n');

    cout << "\nInilah data Anda:\n";
    cout << "Nama: " << nama << "\nNIM: " << nim << "\nPlug: " << plug << "\n\n";
    cout << "Dalam Bentuk Tabel:\n";
    cout << setw(30) << setfill('=') << "" << endl;
    cout << setfill(' ') << left << setw(10) << "NIM" << "|" << setw(20) << "Nama" << "|" << "Plug" << endl;
    cout << setw(30) << setfill('=') << "" << endl;
    cout << setfill(' ') << left << setw(10) << nim << "|" << setw(20) << nama << "|" << plug << endl;

    return 0;
}
