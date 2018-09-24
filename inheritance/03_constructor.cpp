//
// Created by lucas on 2018. 8. 31..
//

#include <iostream>
using namespace std;
class Base{
public:
    Base(){
        cout << "Base::Base()";
    }
    ~Base(){
        cout << "Base::~Base()";
    }
};

class Derive : public Base{
    public :
        Derive(){
            cout << "Derive::Derive()";
        }
        ~Derive(){
            cout << "Derive::~Derive(:)";
        }
};

int main(){
    Derive d;
    cout << "==== " << endl;
    return 0;
}
