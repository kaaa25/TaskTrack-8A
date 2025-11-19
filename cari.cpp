#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void cariTugas()
{
    ifstream file("tugas.txt");
    string keyword, baris;
    bool ditemukan = false;

    cout << "Masukkan kata kunci pencarian: ";
    cin.ignore();
    getline(cin, keyword);

    cout << "\nHasil pencarian:\n";

    if (!file.is_open())
    {
        cout << "File tidak ditemukan.\n";
        return;
    }

    while (getline(file, baris))
    {
        if (baris.find(keyword) != string::npos)
        {
            cout << baris << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan)
    {
        cout << "Tidak ada tugas yang cocok.\n";
    }

    file.close();
}