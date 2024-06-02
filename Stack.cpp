#include <iostream>
#include <stack>
using namespace std;

// Fungsi untuk memeriksa apakah dua stack memiliki nilai yang sama
bool cekstack(stack<int> stak1, stack<int> stak2) {
    // Jika ukuran kedua stack tidak sama, mereka tidak mungkin sama
    if (stak1.size() != stak2.size()) {
        return false;
    }

    // Bandingkan elemen satu per satu
    while (!stak1.empty()) {
        if (stak1.top() != stak2.top()) {
            return false;
        }
        stak1.pop();
        stak2.pop();
    }

    return true;
}

int main() {
    // Inisialisasi dua stack
    stack<int> stak1;
    stack<int> stak2;

    // Mengisi stack1 dengan nilai
    stak1.push(1);
    stak1.push(2);
    stak1.push(3);
    stak1.push(4);

    // Mengisi stack2 dengan nilai yang sama dengan stack1
    stak2.push(1);
    stak2.push(2);
    stak2.push(3);
    stak2.push(4);

    // Periksa apakah kedua stack memiliki nilai yang sama
    if (cekstack(stak1, stak2)) {
        cout << "Kedua stack memiliki nilai yang sama." <<endl;
    }
    else {
        cout << "Kedua stack tidak memiliki nilai yang sama." <<endl;
    }

    return 0;
}
