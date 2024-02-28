#include <iostream>

using namespace std;
int a;

int main()
{
    cout << "Donner un nombre" << endl;
    cin>>a;
    if((a%3==0)&&(a%13==0))
    {
        cout<<" Le nombre : "<<a<<" est divisible par 3 et par 13 "<<endl;
    }
    else
    {
        cout<<" Le nombre : "<<a<<" n'est pas divisble par 3 et par 13"<<endl;

    }
    return 0;
}
