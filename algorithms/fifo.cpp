#include<bits/stdc++.h>
using namespace std;

void print_queue(queue<int> q) { // fungsi untuk melihat isi queue
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main() {
    queue<int> q; //object
    for (int i=0;i<5;i++){
        q.push(i); // untuk mengisi object queue dgn bilangan 0-4
    }

    cout << "Isi queue-";
    print_queue(q);

    // untuk menghapus kepala/head dari object
    // object 0 dihapus
    int hapus = q.front();
    q.pop();
    cout << "Menghapus elemen-" << hapus << endl;

    // untuk melihat kepala dari object yang telah melakukan proses hapus
    int kepala = q.front();
    cout << "Kepala elemen-" << kepala << endl;

    //untuk melihat besar/jumlah yang ada di object
    int size = q.size();
    cout << "Besar object-" << size << endl;

    //melihat isi object
    cout << "Isi queue sekarang-";
    print_queue(q);

    return 0;
}