#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    cout << "원주율 : " << 3.1415 << endl;

    char s[15] = "We1come to C++";
    cout << s << endl;
    strcpy (s, "Good bye C++");
    cout << s << endl;
    cout << "---------" << endl;

    cout << setw(10) << "상품 A " << setw(10) << "상품 B" << endl;
    cout << setw(10) << setfill('0') << 16  << " " << setw(10) << 246 << endl;
    cout << fixed << setw(10) << setprecision(4) << 76.3;


    // ---

    int n;
    string str;
    cout << "\n정수와 열을 입력하시오.  : ";
    cin >> n >> str;
    cout << "입력 결과 : " << n  << " " <<  str << endl;


    return 0;
}