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

class admin : public user {
public:

    admin(string pnama, string pemail): user(pnama, pemail)
    { }

    void showAllMember(vector<member*>& daftarMember) {
        cout << "===== DAFTAR MEMBER =====" << endl;
        for (auto& m : daftarMember) {
            cout << "ID     : " << m->id << endl;
            cout << "Nama   : " << m->nama << endl;
            cout << "Email  : " << m->email << endl;
            cout << "Status : ";
            if (m->status)
                cout << "Aktif";
            else
                cout << "Nonaktif";
            cout << endl;
            cout << "-------------------" << endl;
        }
        cout << endl;
    }
    void toggleActivationMember(member* m) {
        m->status = !m->status;
        cout << "Status member "
             << m->nama
             << " berhasil diubah menjadi ";
        if (m->status)
            cout << "Aktif\n";
        else
            cout << "Nonaktif\n";
        cout << endl;
    }
};

int main() {

    admin admin1("super admin", "admin@gmail.com");

    member* member1 = new member("yanto", "yantoganteng@gmail.com");
    member* member2 = new member("yanti", "yantiajahh@gmail.com");

    vector<member*> daftarMember;

    daftarMember.push_back(member1);
    daftarMember.push_back(member2);

    admin1.showAllMember(daftarMember);

    member1->showProfile();

    admin1.toggleActivationMember(member1);

    member1->showProfile();

    delete member1;
    delete member2;

    return 0;
}