#include <iostream>
using namespace std;

int main (){
   string nama;
   string jurusan;
   string nim;
   string semester;
   string angkatan;
   string status;
   char jawab = 'n';
   int menu;

    do{
        cout << "==================" << endl;
        cout << "|   Pilih Menu   |" << endl;
        cout << "==================" << endl;
        cout << " 1. Input Data" << endl;
        cout << " 2. Lihat Data" << endl;
        cout << " 3. Hapus Data" << endl;
        cout << "------------------" << endl;
        cout << " 0. Keluar" << endl;
        cout << "Pilih Menu : ";
        cin >> menu;
        system ("cls");

        switch (menu){
        case 1 :
   
        cout << "==================" << endl;
        cout << "|   Input Data   |" << endl;
        cout << "==================" << endl;
        cout << "Masukkan Nama : ";
        cin.ignore();
        getline (cin, nama);
        cout << "Masukkan Nim 3 digit terakhir anda : ";
        cin >> nim;
        cin.ignore();
        cout << "Masukkan Semester : ";
        cin >> semester;
        cin.ignore();
        if ( semester == "1" || semester == "2" ) {
            angkatan = "24"; 
        }else if (semester == "3" || semester == "4") { 
            angkatan = "23";
        }else if (semester == "5" || semester == "6") {
            angkatan = "22";
        }else if ( semester == "7" || semester == "8") {
            angkatan = "21";
        }
        cout << "Masukkan Jurusan (IF, SI, TI, Tekim) : ";
        cin >> jurusan;
        if (jurusan == "IF"){
            jurusan = "123";
        }else if (jurusan == "SI"){
            jurusan = "124";
        }else if (jurusan == "TI"){
            jurusan = "122";
        }else if (jurusan == "Tekim"){
            jurusan = "121";
        }
        
        break;

        case 2 :

        if (nama == null){
            cout << "Data Data Anda Kosong" << endl;
        }else if (nama == ""){
            cout << "Data Anda Belum Terisi" << endl;
        }else {
        cout << "====================" << endl;
        cout << "|    Lihat Data    |" << endl;
        cout << "===================="<< endl;
        cout << "Nama Anda : " << nama << endl;
        cout << "Semester : " << semester << endl;
        cout << "Status  : Angkatan " << angkatan << endl; 
        cout << "Nim Anda : " << jurusan << angkatan << 0 << nim << endl;}
        break;

        case 3 :
    
        cout << "====================" << endl;
        cout << "|    Hapus Data    |" << endl;
        cout << "====================" << endl;
        cout << "Nama Anda : " << nama << endl;
        cout << "Status : Angkatan " << angkatan << endl;
        cout << "Nim anda : " << nim << endl;
        cout << "Semester : " << semester << endl;
        
        cout << "Apakah Anda Ingin Menghapus Data? (y/n) : ";
        cin >> jawab;
        if (jawab == 'y'){
        nama = null;
        semester = "";
        nim = "";
        jurusan = "";
        status = "";
        cout << "Data sudah dihapus" << endl;
        }
        
        break;
        default:
        cout << "Menu Tidak Ada" << endl;
        break;
    } 
        cout << "Apakah anda ingin keluar? (y/n) : ";
        cin >> jawab;
        }while (jawab == 'n');
        system ("cls");

        return 0;
}