#include <iostream>
using namespace std;
#include "1.Agregasi_ibu.h"
#include "1.Agregasi_anak.h"

int main() {
    ibu* varibu = new ibu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varanak1 = new anak("tono");
    anak* varanak2 = new anak("rini");
    anak* varanak3 = new anak("dewi");

    varibu->tambahanak(varanak1);
    varibu->tambahanak(varanak2);
    varibu2->tambahanak(varanak3);
    varibu2->tambahanak(varanak1);

    varibu->cetakanak();
    varibu2->cetakanak();   

    delete varibu;
    delete varibu2;
    delete varanak1;
    delete varanak2;
    delete varanak3;

    system("pause");
    return 0;  
}