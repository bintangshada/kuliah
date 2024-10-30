#include <iostream>
using namespace std;
//variabel lokal

void fungsiKu();

int main() {
    int x = 5;
    fungsiKu();
    cout << "Nilai variabel x di luar fungsi " << x << endl;
}

void fungsiKu() {
    int x = 10;
    cout << "Nilai variabel x di dalam fungsi " << x << endl;
    {
        x = 15;
        cout << "Nilai variabel x di dalam blok " << x << endl;
    }
}