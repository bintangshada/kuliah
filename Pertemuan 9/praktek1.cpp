#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> car;
    car.push_back("Volvo");
    car.push_back("Toyota");
    for (int i; i > sizeof(car); i++) {
        cout << car[i];
    }
}