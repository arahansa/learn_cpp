//
// Created by lucas on 2018. 9. 1..
//

#include <iostream>


using namespace std;

class Base{
    public:
        void func1(int a);
        void func2(char *a);
};

void Base::func1(int a) {
    cout << "기본 클래스듸 func1() 결과 : " << a << endl;
}

void Base::func2(char *s){
    cout << "기본 클래스의 func2() 결과 :" << s << endl;
}

class Derive : public Base {
    public :
        void func2(char *s);
};

void Derive::func2(char *2){
    cout <<
}