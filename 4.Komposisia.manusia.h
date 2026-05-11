#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
    string nama;
    jantung varjantung;
    manusia(string pnama) :nama(pnama) {
        cout << nama << "hidup\n"
    }
    ~manusia() {
        cout << nama << "mati\n"
    }
};
#endif