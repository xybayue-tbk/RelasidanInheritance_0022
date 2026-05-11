#include <iostream>
#include <vector>
using namespace std;

class member;
class user {
protected:
    static int globalId;
public:
    int id;
    string nama;
    string email;

    user(string pnama, string pemail) : nama(pnama), email(pemail)
    {
        id = generateId();
    }

    int generateId() {
        return ++globalId;
    }
};

int user::globalId = 0;

class member : public user {
public:
    bool status;
    member(string pnama, string pemail) : user(pnama, pemail)
    {
        status = true;
    }

    void showProfile() {
        cout << "===== PROFILE MEMBER =====" << endl;
        cout << "ID     : " << id << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Email  : " << email << endl;
        cout << "Status : ";

        if (status)
            cout << "Aktif" << endl;
        else
            cout << "Nonaktif" << endl;

        cout << endl;
    }
};