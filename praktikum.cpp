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