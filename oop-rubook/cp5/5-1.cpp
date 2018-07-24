#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    char sname[20];

  public:
    Student()
    {
        setSname("None");
    }
    Student(char *n)
    {
        setSname(n);
    }
    void setSname(char *n)
    {
        strcpy(sname, n);
    }
    char *getSname()
    {
        return sname;
    }
    ~Student() { cout << sname << endl; }
};

class Course
{
    char id[20];

  public:
    Course()
    {
        setCourse("COSxxxx");
    }
    Course(char *n)
    {
        setCourse(n);
    }
    void setCourse(char *n)
    {
        strcpy(id, n);
    }
    char *getId()
    {
        return id;
    }
    ~Course() { cout << id << endl; }
};

class Enrollment
{
    Student *std;
    Course *cos;
    char term[10];

  public:
    Enrollment(Student *s, Course *c, char *t) : std(s), cos(c)
    {
        setTerm(t);
        printEnrollment();
    }
    void setTerm(char *n)
    {
        strcpy(term, n);
    }
    void printEnrollment()
    {
        cout << "Name: " << std->getSname() << " Course: " << cos->getId() << " Term: " << term << endl;
    }
};

int main()
{
    Student *s[2] = {new Student("Somkid"), new Student("Panda")};
    Course *c[3] = {new Course("COS2101"),
                    new Course("COS2102"),
                    new Course("COS2103")};

    Enrollment e1(s[0], c[0], "1/61");
    Enrollment e2(s[0], c[1], "1/61");
    Enrollment e3(s[1], c[0], "1/61");
    Enrollment e4(s[1], c[1], "2/61");
    Enrollment e5(s[1], c[2], "2/61");

    cout << endl << "--delete Student--" << endl;
    for (int i = 0; i < 2; i++) 
        delete s[i];

    cout << endl << "--delete Course--" << endl;
    for (int j = 0; j < 3; j++)
        delete c[j];
    return 0;
}