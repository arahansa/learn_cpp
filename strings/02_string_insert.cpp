//
// Created by lucas on 2018. 8. 17..
//

#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1 = "문자열의 ";
    string str2 = "추가";
    string str3 = "교체";


    str1.append(str2);
    cout<<str1<<endl;

    str1.swap(str3);
    cout<<str1<<endl; // 교체

    string str4("문자열의");
    str4.insert(9, "삽입");
    cout << str4 << endl; // 문자열삽입의

    string str5("문자열의 부분 삭제 ");
    str5.erase(9,4);
    cout<< str5 << endl; // 문자열부분삭제 : 의 사라짐

    string str6("문자열의 부분 삭제 ");
    str6.replace(9,8, "삽입");
    cout << str6 << endl;

    cout << str6.length() << endl;
    return 0;


}


