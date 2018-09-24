//
// Created by lucas on 2018. 8. 17..
//

#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1 = "string";
    string str2 = "문자열";

    cout << "str 1 + str2 = " << str1 + str2 << endl;

    str1 = str2;

    cout << "새로운 str2 =  " << str2 << endl;

    str1.replace(6,6, "string");

    cout << "교체 후의 str1  = " << str1 << endl;

    return 0;


}

