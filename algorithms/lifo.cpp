#include<bits/stdc++.h>
using namespace std;

int main () {
    stack<string> stack;
    stack.push("Satu");
    stack.push("Dua");
    stack.push("Tiga");
    stack.push("Empat");
    stack.push("Lima");

    while (!stack.empty()) {
        cout << "Pop top element : " << stack.top() << endl;
        stack.pop();
    }
}