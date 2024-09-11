#include <iostream>
using namespace std;

int main() {
    char menu;
    int a,b;
    cout << "1. jumlah" << endl;
    cout << "2. kurang" << endl;
    cin >> menu;

    
    cout << "Masukkan nilai a : ";
    cin >> a;
    
    cout << "Masukkan nilai b : ";
    cin >> b;

    if(menu == '+'){
        cout << a + b << endl;
    } else {
        cout << a - b << endl;
    }
}