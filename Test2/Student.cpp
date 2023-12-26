#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
  public:
    int number;
    char name[50];
    float gpa;

      Student()
      {

      }
    Student(int number, string _name, float gpa)
{
    this->number = number;
    strcpy(name, _name.c_str());
    this->gpa = gpa;
}
    void save(ofstream& of);
    void load(ifstream& inf);
};
void Student::save(ofstream& of)
{
  of.write((char*)&number, sizeof(number));
  of.write(name, sizeof(name));
  of.write((char*)&gpa, sizeof(gpa));
}

void Student::load(ifstream& inf)
{
  inf.read((char*)&number, sizeof(number));
  inf.read(name, sizeof(name));
  inf.read((char*)&gpa, sizeof(gpa));
}

main()
{
  Student me(11321, "Tran Ha Bao Thi", 4.3);
  ofstream myfile("thi.dat", ios::binary | ios::out);
  me.save(myfile);
  myfile.close();

    ifstream infile("thi.dat", ios::binary | ios::in);
    Student s;
    s.load(infile);
    infile.close();
    cout << s.name << "\n" << s.number << "\n" << s.gpa << endl;
    return(0);
}

