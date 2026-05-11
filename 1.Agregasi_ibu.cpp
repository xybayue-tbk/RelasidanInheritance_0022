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
};