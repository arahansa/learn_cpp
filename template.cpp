//
// Created by lucas on 2018. 8. 6..
//

#include <iostream>
#include <string>
using namespace std;

template <typename T>

T maxt(T x, T y)
{
    return x = x > y ? x : y;
}

int main(){

    int a,b;

    cout << " 2개의 정수 입력 : " << endl;

    cin >> a >> b;

    double da, db;


    cout << " 2개의 소수 입력 : " << endl;

    cin >> da >> db;

    int c = maxt(a,b);

    double dc = maxt(da, db);

    cout << " 정수의 최대 값 : " << c << endl;
    cout << " 소수의 최대 값 : " << dc << endl;
    return 0;


}