#include <iostream>
using namespace std;

int main() {
    int code(0);
    char carac;
    cout<<"Rentrez un caractère :";
    cin>>carac;
    code = int(carac);
    cout<<"Le code ASCII est : "<<code;
    return 0;
}