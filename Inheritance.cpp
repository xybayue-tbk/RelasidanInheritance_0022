#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pnama) : nama(pnama) {
        cout << "orang di buat\n" << endl;
    }

    ~orang() {
        cout << "orang dihapus\n" << endl;
    }

    int jumlah(int a, int b) {
        return a + b;
    }
};