//
// Created by lucas on 2018. 8. 17..
//

#include <iostream>
#include <string>


using namespace std;

int main(){

    string str1 = "ABCDEFG";
    cout << str1 << endl;

    str1[2] = '?';
    cout << str1 << endl;

    if(str1.at(2) == '?'){
        str1.at(2) = 'C';
    }
    cout << str1 << endl;

    string str2 = "4530123635012354620123";
    cout << str2 << endl;

    cout << "find() 의 '0123' 검출 위치 = " << str2.find("0123") <<endl;
    cout << "rfind() 의 '0123' 검출 위치 = " << str2.rfind("0123") <<endl;

    string str3 = "1234567890123";
    cout << str3 << endl;

    cout << str3.substr(5,3) << endl;
    return 0;

}

