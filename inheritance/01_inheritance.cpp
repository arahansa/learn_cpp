#include <iostream>
#include <string>
using namespace std;


class Student{
public:
    int no;
    char name[10];

protected:
    void showData();
};

void Student::showData() {
    cout << " 번호 : " << no << endl;
    cout << " 이름  : " << name << endl;
}

class Mathtest : public Student{
public:
    int math;
    void showAllData();
};

void Mathtest::showAllData() {
    showData();
    cout << "수학 " << math << endl;
}


int main(){
    Mathtest kim;
    kim.no = 1;
    strcpy(kim.name, "김성주");
    kim.math = 90;
    kim.showAllData();
    return 0;
}