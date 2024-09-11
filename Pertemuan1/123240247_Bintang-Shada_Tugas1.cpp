#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // deklarasi untuk setiap variabel
    string nim, nama, plug;

    // deskripsi untuk input variabel nim, nama dan plug

    cout << "Masukkan : \n";
    cout << "Nama \t: ";
    getline(cin, nama);
    cout << "NIM \t: ";
    getline(cin, nim);
    cout << "Plug \t: ";
    getline(cin, plug);

    // deskripsi output sederhana dari variabel
    cout << "\n Inilah data Anda : \n";
    cout <<  "Nama \t: " << nama << "\n NIM \t: " << nim << "\n Plug \t: " << plug;
    cout << "\n \n";
    cout << "Dalam Bentuk tabel : \n";

    // deskripsi output dalam bentuk
    cout << setw(40) << setfill('=') << "" << endl;
    cout << setfill(' ') << left << setw(10) << "NIM" << "|" << setw(20) << "Nama" << "|" << "Plug" << endl;
    cout << setw(40) << setfill('=') << "" << endl;
    cout << setfill(' ') << left << setw(10) << nim << "|" << setw(20) << nama << "|" << plug << endl;    
    cout << setw(40) << setfill('-') << "" << endl;
    
    cin.get();
    return 0;
}

