#include <iostream>
#include <string.h>

using namespace std;

class Department {
    char dname[20];
    public:
        Department() {
            setDname("None");
        }
        Department(char *n) {
            setDname(n);
        }
        void setDname(char* n) {
            strcpy(dname, n);
        }
        char* getDname() {
            return dname;
        }
        ~Department() {
            cout << "delete" << dname << endl;
        }
};

class Faculty {
    char fname[20];
    int num;
    Department *listDepartment;
    public:
        Faculty() {
            setFname("None");
            num = 0;
            listDepartment = 0;
        }
        Faculty(char *n, int k, char d[3][20]) {
            setFname(n);
            num = k;
            listDepartment = new Department[num];
            for (int i = 0; i < num; i++) {
                listDepartment[i].setDname(d[i]);
            }
        }
        void setFname(char* n) {
            strcpy(fname, n);
        }
        char* getFname() {
            return fname;
        }
        char *getDepartment(int i) {
            return listDepartment[i].getDname();
        }
        ~Faculty() {
            delete[] listDepartment;
            cout << "detele " << fname << endl;
        }
};

int main() {
    char d[3][20];

    strcpy(d[0], "Computer Science");
    strcpy(d[1], "Mathematics");
    strcpy(d[2], "Chemistry");

    Faculty *sci = new Faculty("Science", 3, d);

    cout << "-- Department in Faculty --" << endl;
    for (int i = 0; i < 3; i++)
        cout << sci -> getDepartment(i) << endl;
    
    cout << "-- delete Faculty --" << endl;
    delete sci;
    return 0;
}