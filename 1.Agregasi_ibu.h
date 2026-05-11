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

void ibu::cetakanak() {
    cout << "Daftar anak dari Ibu \"" << this->nama << "\":\n";
    /*for (auto& a : daftar_anak) {
        cout << a->nama << "\n";
    }*/
    for (int i = 0; i < daftar_anak.size(); i++) {
        cout << "- " << daftar_anak[i]->nama << "\n";
    }
    cout << endl;
}
#endif