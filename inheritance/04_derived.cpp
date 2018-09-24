//
// Created by lucas on 2018. 9. 1..
//


#include <iostream>
using namespace std;

class Base{
public:
    int base_data;
    Base();
    Base(int m);
    ~Base();
};

Base::Base(){
    base_data= -1;
    cout << "기본 클래스의 인수 없는 생성자 실행 중 " << endl;
}

Base::Base(int m) {
    base_data = m ;
    cout << "기본 클래스의 인수 있는 생성자 실행 중 .. " << endl;
}

Base::~Base(){
    cout << " 기본 클래스의 소멸자 실행 중...  " << endl;
}

class Derive : public Base{
public:
    int derive_data;
    Derive();
    Derive(int n, int m);
    ~Derive();
};

Derive::Derive(){
    derive_data = -1;
    cout << "파생 클래스의 인수 없는 생성자 실행 중... " << endl;
}

Derive::Derive(int n, int m) : Base(m) {
    derive_data = n;
    cout << "파생 클래스의 인수 있는 생성자 실행 중 ... " << endl;
}

Derive::~Derive() {
    cout << " 파생 클래스의 소멸자 실행 중... " << endl;
}

int main(){
    Derive obj1;
    cout << obj1.base_data << endl;
    cout << obj1.derive_data << endl;
    cout << " ======== " << endl;
    Derive obj2(345, 789);
    cout << obj2.base_data << endl;
    cout << obj2.derive_data << endl;
    return 0;
}