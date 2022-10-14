#include <iostream>
using namespace std;

int main() {
    int a(0), b(0);
    int quotient(0), reste(0);

    cout<<"Entrez deux nombres à diviser: ";
    cin>>a>>b;
    quotient=a/b;
    reste=a%b;
    cout<<a<<"/"<<b<<endl;
    cout<<"Quotient:"<<quotient<<"  Reste:"<<reste<<endl;



    return 0;
}