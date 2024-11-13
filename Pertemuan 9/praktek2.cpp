#include <iostream>
using namespace std;

int main() {
    int array[3][3];

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            cout  << "["<<x<<"]["<<y<<"] | ";
            // cin >> array[x][y];
        }
        cout << "\n-------------------------";
        cout << endl;
    }
}