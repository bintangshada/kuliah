#include <iostream>
using namespace std;

int login(){
    string nama,password;
    int count = 0;
    do{
        cout << "Masukkan nama : ";
        cin >> nama;
        cout << "Masukkan password : ";
        cin >> password;
        if (nama != "shada" && password != "123") {
            cout << "Password atau Username salah\n";
            count++;
            if (count == 3){
                cout << "Sudah 3 kali salah, keluar program aja\n";
                system("exit");
            } else {
                cout << "sudah salah " << count << " kali.\n"; 
            }
        }
        return 0;
    }
    while(count != 3);
    return 0;

}

int menu(){
    cout << "kode\tJenis Barang\tHarga(Rp)\n";
    cout << "1.1001\tAyam Goreng\t18.750";
    cout << 
    return 0;
}

int main(){
    login();
    menu();
}