#include <iostream>
using namespace std;
void fungsiKu();

// variabel global
int x = 10;
int y = 5;
int main() {
    cout << "Nilai variabel x global " <<x << endl;
    cout << "Nilai variabel x global " <<y << endl;
    fungsiKu();
    cout << "Nilai variabel x global " <<x << endl;
    cout << "Nilai variabel x global " <<y << endl;
}

void fungsiKu() {
    cout << "Nilai variabel x menggunakan x global " << x << endl;
    cout << "Nilai variabel y menggunakan y global " << y << endl;
    x = 5; //variabel lokal
    y = 10; //variabel lokal
    cout << "Nilai variabel x di dalam fungsi " << x << endl;
    cout << "Nilai variabel y di dalam fungsi " << y << endl;
}