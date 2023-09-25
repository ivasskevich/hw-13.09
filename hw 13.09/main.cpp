
#include <iostream>
#include <fstream>
using namespace std;

class Contact{
private:
    char* name;
    char* surname;
    char* lastname;
    char* homeNum;
    char* mobNum;
    char* workNum;
    char* othInfo;
public:
    Contact(){
        name = nullptr;
        name = nullptr;
        lastname = nullptr;
        homeNum = nullptr;
        mobNum = nullptr;
        workNum = nullptr;
        othInfo = nullptr;
    }
    Contact(char* n, const char* s, const char* l, const char* h, const char* m, const char* w, const char* o) {
        name = new char[strlen(n) + 1];
        strcpy_s(name, strlen(n) + 1, n);

        surname = new char[strlen(s) + 1];
        strcpy_s(surname, strlen(s) + 1, s);

        lastname = new char[strlen(l) + 1];
        strcpy_s(lastname, strlen(l) + 1, l);

        homeNum = new char[strlen(h) + 1];
        strcpy_s(homeNum, strlen(h) + 1, h);

        mobNum = new char[strlen(m) + 1];
        strcpy_s(mobNum, strlen(m) + 1, m);

        workNum = new char[strlen(w) + 1];
        strcpy_s(workNum, strlen(w) + 1, w);

        othInfo = new char[strlen(o) + 1];
        strcpy_s(othInfo, strlen(o) + 1, o);
    }
    void Input() {
        char buff[120];
        cout << "Enter name: ";
        cin >> buff;
        if (name != nullptr) {
            cout << "Delete..." << name << endl;
            delete[] surname;
        }
        name = new char[strlen(buff) + 1];
        strcpy_s(name, strlen(buff) + 1, buff);
        cout << "Enter name: ";
        cin >> buff;
        if (name != nullptr) {
            cout << "Delete..." << name << endl;
            delete[] name;
        }
        surname = new char[strlen(buff) + 1];
        strcpy_s(name, strlen(buff) + 1, buff);
        cout << "Enter surname: ";
        cin >> buff;
        if (surname != nullptr) {
            cout << "Delete..." << surname << endl;
            delete[] surname;
        }
        lastname = new char[strlen(buff) + 1];
        strcpy_s(lastname, strlen(buff) + 1, buff);
        cout << "Enter home number: ";
        cin >> buff;
        if (homeNum != nullptr) {
            cout << "Delete..." << homeNum << endl;
            delete[] homeNum;
        }
        homeNum = new char[strlen(buff) + 1];
        strcpy_s(homeNum, strlen(buff) + 1, buff);
        cout << "Enter mobile number: ";
        cin >> buff;
        if (mobNum != nullptr) {
            cout << "Delete..." << mobNum << endl;
            delete[] mobNum;
        }
        mobNum = new char[strlen(buff) + 1];
        strcpy_s(mobNum, strlen(buff) + 1, buff);
        cout << "Enter work number: ";
        cin >> buff;
        if (workNum != nullptr) {
            cout << "Delete..." << workNum << endl;
            delete[] workNum;
        }
        workNum = new char[strlen(buff) + 1];
        strcpy_s(workNum, strlen(buff) + 1, buff);
        cout << "Enter other info: ";
        cin >> buff;
        if (othInfo != nullptr) {
            cout << "Delete..." << othInfo << endl;
            delete[] othInfo;
        }
        othInfo = new char[strlen(buff) + 1];
        strcpy_s(othInfo, strlen(buff) + 1, buff);
    }
    void Print() {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Last name: " << lastname << endl;
        cout << "Home Number: " << homeNum << endl;
            cout << "Mobile Number: " << mobNum << endl;
        cout << "Work Number: " << workNum << endl;
        cout << "Other INformation: " << othInfo << endl;
    }
    int GetName() {
        return*name;
    }
    int GetSurname() {
        return*surname;
    }
    int GetLastname() {
        return*lastname;
    }
    int GetHomeNumber() {
        return*homeNum;
    }
    int GetMobileNumber() {
        return*mobNum;
    }
    int GetWorkNumber() {
        return*workNum;
    }
    int GetOthInfo() {
        return*othInfo;
    }
    void SetName(const char* n) {
        if (name != nullptr) {
            cout << "Delete..." << name << endl;
            delete[] name;
        }
        name = new char[strlen(n) + 1];
        strcpy_s(name, strlen(n) + 1, n);
    }
    void SetSurname(const char* s) {
        if (surname != nullptr) {
            cout << "Delete..." << surname << endl;
            delete[] surname;
        }
        surname = new char[strlen(s) + 1];
        strcpy_s(surname, strlen(s) + 1, s);
    }
    void SetLastname(const char* l) {
        if (lastname != nullptr) {
            cout << "Delete..." << lastname << endl;
            delete[] lastname;
        }
        lastname = new char[strlen(l) + 1];
        strcpy_s(lastname, strlen(l) + 1, l);
    }
    void SetHomeNum(const char* h) {
        if (homeNum != nullptr) {
            cout << "Delete..." << homeNum << endl;
            delete[] homeNum;
        }
        homeNum = new char[strlen(h) + 1];
        strcpy_s(homeNum, strlen(h) + 1, h);
    }
    void SetMobNum(const char* m) {
        if (mobNum != nullptr) {
            cout << "Delete..." << mobNum << endl;
            delete[] mobNum;
        }
        mobNum = new char[strlen(m) + 1];
        strcpy_s(mobNum, strlen(m) + 1, m);
    }
    void SetWorkNum(const char* w) {
        if (workNum != nullptr) {
            cout << "Delete..." << workNum << endl;
            delete[] workNum;
        }
        workNum = new char[strlen(w) + 1];
        strcpy_s(workNum, strlen(w) + 1, w);
    }
    void SetOthInfo(const char* o) {
        if (othInfo != nullptr) {
            cout << "Delete..." << othInfo << endl;
            delete[] othInfo;
        }
        othInfo = new char[strlen(o) + 1];
        strcpy_s(othInfo, strlen(o) + 1, o);
    }
    void DeleteCaller() {
        delete[] name;
        delete[] surname;
        delete[] lastname;
        delete[] homeNum;
        delete[] mobNum;
        delete[] workNum;
        delete[] othInfo;

        name = nullptr;
        surname = nullptr;
        lastname = nullptr;
        homeNum = nullptr;
        mobNum = nullptr;
        workNum = nullptr;
        othInfo = nullptr;

        cout << "Caller deleted." << endl;
    }
    bool SearchBySNP(const char* a) {
        return strcmp(surname, a) == 0;
    }

    void LoadFf(const char* fileName) {
        ifstream file(fileName);

        if (!file) {
            cout << "Error when opening a file." << endl;
            return;
        }
    }
    void SaveToFile(const char* fileName) {
        ofstream file(fileName);

            if (!file) {
                cout << "Error when opening a file." << endl;
                return;
            };
 
    }
    ~Contact(){
        delete[] name;
        delete[] surname;
        delete[] lastname;
        delete[] homeNum;
        delete[] mobNum;
        delete[] workNum;
        delete[] othInfo;
    }
};

int main() {
    
    const int MAX_CALLERS = 100;
    Contact x[MAX_CALLERS];
    int count = 0;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add caller" << endl;
        cout << "2. Delete caller" << endl;
        cout << "3. Search by SNP" << endl;
        cout << "4. Show all contacts" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cout << "Select this menu option: ";
        cin >> choice;

        switch (choice) {
        
        case 1:
            if (count < MAX_CALLERS) {
                x[count].Input();
                count++;
            }
            else {
                cout << "Maximum callers reached!" << endl;
            }
            break;
        case 2:
            if (count > 0) {
                char deleteSurname[255];
                cout << "Enter surname to delete: ";
                cin >> deleteSurname;

                bool contactDeleted = false;
                for (int i = 0; i < count; i++) {
                    if (x[i].SearchBySNP(deleteSurname)) {
                        x[i].DeleteCaller();
                        count--;
                        for (int j = i; j < count; j++) {
                            x[j] = x[j + 1];
                        }
                        contactDeleted = true;
                        break;
                    }
                }

                if (!contactDeleted) {
                    cout << "No matching caller found!" << endl;
                }
            }
            else {
                cout << "No callers to delete!" << endl;
            }
            break;
        case 3:
            char searchSurname[255];
            cout << "Enter surname to search: ";
            cin.ignore();
            cin.getline(searchSurname, sizeof(searchSurname));
            for (int i = 0; i < count; i++) {
                if (x[i].SearchBySNP(searchSurname)) {
                    x[i].Print();
                }
            }
            break;
        case 4:
            for (int i = 0; i < count; i++) {
                x[i].Print();
            }
            break;
        
        case 5:
            return 0;
        default:
            cout << "Wrong input!!!" << endl;
            break;
        }
    }
}