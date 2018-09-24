//
// Created by lucas on 2018. 8. 7..
//

#include <iostream>
#include <string>
using namespace std;

struct Student{
    int n;
    char name[10];
    int eng;
    int math;
};

int main(){

    Student kim;

    kim.n = 5;

    strcpy(kim.name, "kimDJ");

    kim.eng = 87;
    kim.math = 94;

    cout << "구조체 변수 kim 데이터 : " << kim.n << kim.name << kim.eng << kim.math << endl;

    return 0;





}

