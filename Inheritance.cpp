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

class pelajar : public orang {
public:
    string sekolah;

    pelajar(string pnama, string psekolah) : orang(pnama), sekolah(psekolah) {
        cout << "pelajar di buat\n" << endl;
    }

    ~pelajar() {
        cout << "pelajar dihapus\n" << endl;
    }

    string perkenalan() {
        return "nama saya " + nama + " dan saya sekolah di " + sekolah;
    }
};

int main() {

    pelajar siswa1("andi laksono", "SMA 1 Bantul");
    cout << siswa1.perkenalan() << endl;
    cout << "hasil = " << siswa1.jumlah(10, 90) << endl;

    return 0;
}