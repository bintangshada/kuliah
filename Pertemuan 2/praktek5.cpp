#include <iostream>
using namespace std;

int main() {
    float ipk;
    float tahun;            
    cout << "Masukkan ipk : ";
    cin >> ipk;

    if(ipk > 4) {
        cout << "IPK tidak wajar";
        return 0;
    }

    if (ipk >= 3.51) {
        cout << "Masukkan tahun : ";
        cin >> tahun;
        if (tahun <= 4){
            if (ipk >= 4) {
                cout << "summa cumlaude ";
            } else if (ipk >= 3.80){
                cout << "Magna cumlaude";
            }else {
                cout << "cumlaude";
            }
        } else if(tahun <= 6) {
            cout << "IPK anda " << ipk << " namun tidak berpredikat";
        }  else {
            cout << "artefak kampus";
        }
    } else if(ipk >= 3) {
        cout << "sangat baik";        
    } else if (ipk >= 2.5){
        cout << "baik";
    } else if (ipk >= 2) {
        cout << "cukup";
    } else {
        cout << "kurang";
    }
}