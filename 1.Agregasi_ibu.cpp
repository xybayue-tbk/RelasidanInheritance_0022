#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu {
public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pnama) :nama(pnama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
    void tambahanak(anak*);
    void cetakanak();
};
void ibu::tambahanak(anak* panak) {
    daftar_anak.push_back(panak);
}