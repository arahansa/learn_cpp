//
// Created by lucas on 2018. 8. 17..
//


#include <iostream>

using namespace std;

typedef struct Person{
    int age;
    char name[10];
} CHILD;

int main(){


    CHILD cs[3] = {
            {8, "이동준",},
            {22, "이지하",},
            {23, "이문하",}
    };

    for(int j=0;j<3;j++){
        cout << "나이  : " << cs[j].age << " , \t 이름 : " << cs[j].name << endl;
    }

    return 0;


}
