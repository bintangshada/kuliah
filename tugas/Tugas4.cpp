#include <iostream>
#include <string>
using namespace std;

int lihatNilai();
int inputMahasiswa();
int x,y,pilih;

int main(){
    cout << "Masukkan banyak mahasiswa: ";
    cin >> x;
    cout << "Masukkan banyak mata kuliah: ";
    cin >> y;

    cout << "Masukkan Menu\n";
    cout << "1. Input Mahasiswa\n";
    cout << "2. Lihat Nilai\n";
    cout << "Pilih: ";
    cin >> pilih;
    switch(pilih){
        case 1:
            inputMahasiswa();
            break;
        case 2:
            // lihatNilai();
            break;
        default:
            cout << "Pilihan tidak tersedia";
            break;
    }

}
int inputMahasiswa(){
    string names[x];
    int grades[x][y];

    for(int i = 0; i < x; i++){
        cout << "Masukkan nama mahasiswa: ";
        cin >> names[i];
        for(int j = 0; j < y; j++){
            cout << "Masukkan nilai mata kuliah ke-" << j+1 << ": ";
            cin >> grades[i][j];
        }
    }

    for(int i = 0; i < x; i++){
        cout << "Nama mahasiswa: " << names[i] << endl;
        for(int j = 0; j < y; j++){
            cout << "Nilai mata kuliah ke-" << j+1 << ": " << grades[i][j] << endl;
        }
    }
    return names[x], grades[x][y];
}

// int lihatNilai(){
//     for(int i = 0; i < x; x++){
//       cout << "trst";  
//     } 
// }