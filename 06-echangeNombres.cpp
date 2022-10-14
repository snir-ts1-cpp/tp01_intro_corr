#include <iostream>
using namespace std;

int main() {
    int a,b,temp(0);
    cout<<"Rentrez 2 nombres :";
    cin>>a>>b;
    cout<<"Avant permutation : a="<<a<<" b="<<b<<endl;

    /* Solution avec variable tampon "temp"
    temp=a;
    a=b;
    b=temp;
    */

    //Solution sans variable tampon
    b=a+b;
    a=b-a;
    b=b-a;

    cout<<"Apres permutation : a="<<a<<" b="<<b<<endl;
    return 0;
}