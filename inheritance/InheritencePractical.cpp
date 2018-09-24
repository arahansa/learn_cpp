//
// Created by lucas on 2018. 8. 31..
//

#include <iostream>

using namespace std;

class Student {
public:
    int no;
    char name[10];
};

class Mathtest : public Student {
public:
    int math;
};

class Engtest : public Student {
public:
    int eng;
};

class Kortest : public Student {
public:
    int kor;
};

int main() {

    Mathtest kim;
    kim.no = 1;

    strcpy(kim.name, "김성주");
    kim.math = 90;

    cout << "번호 " << kim.no << " , 이름 : " << kim.name << ", 수학 : " << kim.math << endl;

    Engtest lee;
    lee.no = 5;
    strcpy(lee.name, "이성철");
    lee.eng = 93;
    cout << "번호 " << lee.no << " , 이름 : " << lee.name << ", 영어 : " << lee.eng << endl;

    Kortest park;
    park.no = 7;
    strcpy(park.name, "박성의");
    park.kor = 92;
    cout << "번호 " << park.no << " , 이름 : " << park.name << ", 국어 : " << park.kor << endl;

    return 0;


}