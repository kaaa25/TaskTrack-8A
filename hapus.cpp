#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void hapusSemuaTugas() {
    bool valid = false;
    string konfirmasi;

    while (!valid) {
        cout << "Apakah kamu ingin menghapus semua tugas? [y/n]: ";
        cin >> konfirmasi;

        if (konfirmasi == "y") {
            ofstream file("tugas.txt", ios::trunc);
            file.close();
            cout << "Semua tugas berhasil dihapus!\n";
            valid = true;
        }
        else if (konfirmasi == "n") {
            cout << "Penghapusan dibatalkan.\n";
            valid = true;
        }
        else {
            cout << "Input tidak valid!\n\n";
        }
    }
}
