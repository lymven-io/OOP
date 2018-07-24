#include <iostream>
#include <string.h>

using namespace std;

class Teacher
{
    char tname[10];

  public:
    Teacher()
    {
        setTname("None");
    }
    Teacher(char *n)
    {
        setTname(n);
    }
    void setTname(char *n)
    {
        strcpy(tname, n);
    }
    char *getTname()
    {
        return tname;
    }
    ~Teacher()
    {
        cout << "delete" << tname << endl;
    }
};

class Faculty
{
    char fname[20];
    Teacher **listTeacher;

  public:
    Faculty()
    {
        setFname("Node");
        listTeacher = 0;
    }
    Faculty(char *n, Teacher **t)
    {
        setFname(n);
        listTeacher = t;
    }
    void setFname(char *n)
    {
        strcpy(fname, n);
    }
    char *getFname()
    {
        return fname;
    }
    char *getTeacher(int i)
    {
        return listTeacher[i]->getTname();
    }
    ~Faculty()
    {
        cout << "delete " << fname << endl;
    }
};

int main()
{

    Teacher *t[3] = {new Teacher("Pawalai"),
                     new Teacher("Sathit"),
                     new Teacher("Ratchanee")};
    Faculty *sci = new Faculty("Science", t);

    cout << "-- Teacher in Faculty --" << endl;
    for (int i = 0; i < 3; i++)
        cout << sci -> getTeacher(i) << endl;
    cout << "-- delete Faculty --" << endl;
    delete sci;

    cout << "-- Teacher still exist --" << endl;
    for (int i = 0; i < 3; i++)
        cout << t[i] -> getTname() << endl;
    cout << "-- delete Teacher --" << endl;
    for (int i = 0; i < 3; i++)
        delete t[i];
    return 0;
}