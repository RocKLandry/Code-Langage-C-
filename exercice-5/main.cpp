#include <iostream>

using namespace std;
int a, b, c, d;
int main()
{
    cout << "Donner la valeur du dividende " ;
    cin>>a ;
    cout << "Donner la valeur du diviseur " ;
    cin>>b;
    c=a/b;
    d=a%b;
    cout<<endl;
    cout << "Le quotient de la division de "<<a<<" par "<<b<<" est :  " <<c;
    cout<<endl;
    cout<<endl;
    cout << "Le reste de la division de "<<a<<" par "<<b<<" est :  " <<d;
    cout<<endl;


    return 0;
}
