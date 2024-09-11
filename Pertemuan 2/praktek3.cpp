#include <iostream>
using namespace std;

int main() {
    int poin;
    cout << "Masukkan poin : ";
    cin >> poin;

    if (poin >= 85) {
        int nilai;
        cout << "Masukkan nilai : ";
        cin >> nilai;
        if (nilai >= 85){
            cout << "nilai a+";
        } else {
            cout << "nilai a-";
        }
    } else if(poin >= 75) {
        cout << "nilai a";        
    } else if (poin >= 60){
        cout << "nilai b";
    } else {
        cout << "Nilai c";
    }
}