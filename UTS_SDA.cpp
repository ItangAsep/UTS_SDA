#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    // menu dan harga makana
    string namamenu[] = { "Soto", "Rawon", "Pecel", "Bakso", "Siomay" };
    int harga[] = { 15000, 20000, 10000, 12500, 25000 };
    int jumlahmenu = 10;

    // Input data dari pembeli
    string input;
    cout << "masukan nama serta jumlah makanan yang ingin anda pesan: ";
    getline(cin, input);

    // parsing
    stringstream ss(input);
    string makanan;
    int porsi, totalHarga = 0;

    cout << "Total Harga:" << endl;

    while (ss >> makanan >> porsi) {
        bool found = false;
        for (int i = 0; i < jumlahmenu; ++i) {
            if (namamenu[i] == makanan) {
                int itemTotal = harga[i] * porsi;
                cout << " # " << namamenu[i] << " @ "<< harga[i] << " * " << porsi << " = "  << itemTotal << endl;
                totalHarga += itemTotal;
                found = true;
                break;
            }
        }
    }

    cout << "Total = " << totalHarga << endl;

    return 0;
}
