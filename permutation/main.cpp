#include <iostream>

using namespace std;
int a,b,c;

int main()
{
    cout << "Donner le premier nombre" << endl;
    cin>>a;
    cout << "Donner le deuxieme nombre" << endl;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout << "La valeur de a devient : " << a;
    cout<<endl;
    cout << "La valeur de b devient : " << b;
    return 0;
}
