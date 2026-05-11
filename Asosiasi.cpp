#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pnama) :nama(pnama) {
        cout << "Pasien \"" << nama << "\" ada\n";
    }
    ~pasien() {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }
    void tambahdokter(dokter*);
    void cetakdokter();
};

class dokter {
public:
    string nama;
    vector<pasien*> daftar_pasien;
    dokter(string pnama) :nama(pnama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }
    void tambahpasien(pasien*);
    void cetakpasien();
};

void pasien::tambahdokter(dokter* pdokter) {
    daftar_dokter.push_back(pdokter);
}

void pasien::cetakdokter() {
    cout << "Daftar dokter yang merawat Pasien \"" << this->nama << "\":\n";
    for (auto& a : daftar_dokter){
        cout << a->nama << "\n";
    }
    cout << endl;
}

