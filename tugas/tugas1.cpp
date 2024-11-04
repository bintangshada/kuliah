#include <iostream>
using namespace std;

float hasil;
int pilih;
int tahun;
bool kabisat(int tahun) {
    system("cls");
    if(tahun % 4 == 0 ) {
        if (tahun % 100 == 0) {
            if (tahun % 400 == 0) {
                return true;
            } else {
                return false;
            } 
        } else {
            return true;
        }
    } else {
        return false;
    }
}


float rupiahToDollar(float rupiah){
    hasil = rupiah / 15000;
    cout << "Hasil dari " << rupiah << " rupiah ke dalam dollar adalah " << hasil << " dollar\n";
    return hasil;
}

float dollarToRupiah(float dollar){
    int hasil = dollar * 15000;
    cout << "Hasil dari " << dollar << " dollar ke dalam rupiah adalah " << hasil << " rupiah\n";
    return hasil;
}

float bmi(float tinggi, float beratBadan) {
    float hasil = beratBadan / (tinggi * tinggi);
    cout << "Hasil BMI adalah " << hasil;
    if(hasil >= 30){
        cout << " (Obesitas)\n";
    } else if (hasil >= 25){
        cout << " (Gemuk)\n";
    } else if (hasil >= 18.5){
        cout << " (Normal)\n";
    } else {
        cout << " (Kurus)\n";
    }
    return hasil;
}

int main() {
    do {
        system("cls");
        cout << "1. Cek kabisat \n2. Konversi mata uang \n3. BMI \n0. Keluar\n";
        cout << "Masukkan pilihan : ";
        cin >> pilih;
        if (pilih == 0) {
            system("cls");
            cout << "Terima kasih, program selesai";
            exit(0);
        }
        switch (pilih) {
            case 1:
                system("cls");
                cout << "Masukkan tahun : ";
                cin >> tahun;
                kabisat(tahun);
                if(kabisat(tahun)) {
                    cout << "Tahun kabisat\n";
                } else {
                    cout << "Bukan tahun kabisat\n";
                }
                system("pause");
                break;
            case 2:
                int pilih;
                do {
                    system("cls");
                    cout << "1. Rupiah ke Dollar \n2. Dollar ke Rupiah \n0. Kembali\n";
                    cout << "Masukkan pilihan : ";
                    cin >> pilih;
                    switch(pilih) {
                        case 1:
                            float rupiah;
                            system("cls");
                            cout << "Masukkan rupiah : ";
                            cin >> rupiah;
                            rupiahToDollar(rupiah);
                            break;
                        case 2:
                            float dollar;
                            system("cls");
                            cout << "Masukkan dollar : ";
                            cin >> dollar;
                            dollarToRupiah(dollar);
                            break;
                        default:
                            cout << "Gaada pilihan " << pilih << " kocak \n";
                            break;
                    }
                    system("pause");
                } while (pilih != 0);
                system("cls");
                break;
            case 3:
                float tinggi, beratBadan;
                system("cls");
                cout << "Masukkan tinggi badan dalam meter : ";
                cin >> tinggi;
                cout << "Masukkan tinggi badan dalam kilogram : ";
                cin >> beratBadan;
                bmi(tinggi, beratBadan);
                break;
                system("exit");
                break;
            default:
                system("cls");
                cout << "Gaada pilihan " << pilih << " kocak\n";
                break; 
        }
        system("pause");
    } while (pilih != 0);
}