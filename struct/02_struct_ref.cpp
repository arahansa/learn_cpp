//
// Created by lucas on 2018. 8. 7..
//

#include <iostream>
#include <string>
using namespace std;
struct Person{
    char name[10];
    int age;
};
int main(){
    Person per1;
    Person *pper;

    pper = &per1;

    cout << "이름은  ";

    cin >> pper -> name;
    cout << " 나이는 : ";
    cin >> pper -> age;

    cout << " 이름은 " << pper -> name << " , 나이는 : " << pper->age <<endl;
    return 0;

}

