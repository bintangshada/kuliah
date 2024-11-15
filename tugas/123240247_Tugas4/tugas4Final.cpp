#include <iostream>
using namespace std;

string nama[5];
int nilai[5][4];
int rerata[5];
int tertinggi;
int terendah;
bool sudahAdaNilai;
bool sudahAdarataRata;
char ulang;

void inputMahasiswa();
int tinggi();
void lihatNilai();
int rataRata();
int rendah();

int main(){
    int pilih;
    do{
        system("cls");
        cout << "***Menu***\n";
        cout << "1. Input Mahasiswa\n";
        cout << "2. Lihat Nilai\n";
        cout << "3. Rata-rata\n";
        cout << "4. Nilai Tertinggi\n";
        cout << "5. Nilai Terendah\n";
        cout << "6. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        if(pilih == 6){
            cout << "Terima kasih\n";
            system("exit");
            break;
        }
        switch(pilih){
            case 1:
               inputMahasiswa();
               break;
            case 2:
                lihatNilai();
                break;
            case 3:
                rataRata();
                break;
            case 4:
                tinggi();
                break;
            case 5:
                rendah();
                break;
            default:
                cout << "Pilihan tidak tersedia";
                break;
        }
    } while (pilih != 6);
}

void inputMahasiswa(){
    do{
        system("cls");
        for(int i = 0; i < 5; i++){
            cout << "Masukkan nama Mahasiswa " << i+1 << " : ";
            cin.ignore();
            getline(cin, nama[i]);
            cout << "Masukkan  nilai untuk " << nama[i] << " : \n";
            for(int j = 0; j < 4; j++){
                cout << "Mata kuliah ke-" << j+1 << " : ";
                cin >> nilai[i][j];
            }
            cout << endl;
        }
        sudahAdaNilai = true;
        cout << "Apakah ingin menginputkan lagi? (y/n) : ";
        cin >> ulang;
    }while(ulang == 'y' || ulang == 'Y');

}

void lihatNilai(){
    if(!sudahAdaNilai){
        system("cls");
        cout << "Belum ada nilai yang dimasukkan\n";
        system("pause");
        return;
    }
    do {
        system("cls");
        cout << "*** Lihat Nilai ***\n";
        for(int i = 0; i < 5; i++){
            cout << nama[i] << " : \n";
            for(int j = 0; j < 4; j++){
                cout << "nilai ke " << j+1 << " adalah : " << nilai[i][j] << endl;
            }
            cout << endl;
        }
        cout << "Apakah ingin melihat nilai lagi? (y/n) : ";
        cin >> ulang;
    }while(ulang == 'y' || ulang == 'Y');
}

int rataRata(){
    if(!sudahAdaNilai){
        system("cls");
        cout << "Belum ada nilai yang dimasukkan\n";
        system("pause");
        return 0;
    }
    do{
        system("cls");
        cout << "*** Lihat rerata ***\n";
        for(int i = 0; i < 5; i++ ){
            int jumlah = 0;
            int ratarata = 0;
            cout << "Mahasiswa " << i+1 << " :" << endl;
            cout << " - Nama : " << nama[i] << endl;
            for(int j = 0; j < 4; j++){
                jumlah += nilai[i][j];
            }
            ratarata = jumlah / 4;
            rerata[i] = ratarata;
            cout << " - Rerata : " << rerata[i] << endl << endl;
        }
        sudahAdarataRata = true;
        cout << "Apakah ingin melihat rerata lagi? (y/n) : ";
        cin >> ulang;
    }while(ulang == 'y' || ulang == 'Y');
    return 0;
}

int tinggi() {
    if(!sudahAdarataRata){
        system("cls");
        cout << "Belum ada rerata yang dihitung\n";
        system("pause");
        return 0;
    }
    do{
        system("cls");
        int index = 0;
        tertinggi = 0;
        cout << "***Rerata Tertinggi***\n";
        cout <<"Mahasiswa dengan nilai tertinggi\n";
        for(int i = 0; i < 5; i++){
            if (tertinggi < rerata[i]){
                tertinggi = rerata[i];
                index = i;
            }
        }
        cout << " - Nama : " << nama[index] << endl;
        cout << " - Nilai : " << tertinggi << endl;
        cout << "Apakah ingin melihat nilai tertinggi lagi? (y/n) : ";
        cin >> ulang;
    }while(ulang == 'y' || ulang == 'Y');

    return tertinggi;
}

int rendah() {
    if(!sudahAdarataRata){
        system("cls");
        cout << "Belum ada rerata yang dihitung\n";
        system("pause");
        return 0;
    }
    do{
        system("cls");
        int index = 0;
        terendah = rerata[0];
        cout << "***Rerata Terendah***\n";
        cout <<"Mahasiswa dengan nilai terendah\n";
        for(int i = 0; i < 5; i++){
            if (terendah > rerata[i]){
                terendah = rerata[i];
                index = i;
            }
        }
        cout << " - Nama : " << nama[index] << endl;
        cout << " - Rerata : "<< terendah << endl;
        cout << "Apakah ingin melihat nilai terendah lagi? (y/n) : ";
        cin >> ulang;
    }while(ulang == 'y' || ulang == 'Y');
    return terendah;
}