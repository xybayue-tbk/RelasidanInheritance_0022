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

void dokter::tambahpasien(pasien* ppasien) {
    daftar_pasien.push_back(ppasien);
    ppasien->tambahdokter(this);
}

void dokter::cetakpasien() {
    cout << "Daftar pasien yang dirawat Dokter \"" << this->nama << "\":\n";
    for (auto& a : daftar_pasien) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

int main() {
    dokter* vardokter1 = new dokter("dr. budi");
    dokter* vardokter2 = new dokter("dr. tono");
    pasien* varpasien1 = new pasien("andi");
    pasien* varpasien2 = new pasien("lia");

    vardokter1->tambahpasien(varpasien1);
    vardokter1->tambahpasien(varpasien2);
    vardokter2->tambahpasien(varpasien1);

    vardokter1->cetakpasien();
    vardokter2->cetakpasien();
    varpasien1->cetakdokter();
    varpasien2->cetakdokter();

    delete vardokter1;
    delete vardokter2;
    delete varpasien1;
    delete varpasien2;

    return 0;
}