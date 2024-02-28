#include <iostream>
int a,b,c,maxi;

using namespace std;

int main()
{
    cout << "Donner le premier nombre : " ;
    cin>>a;
    maxi=a;
    cout<<"Donner le deuxieme nombre : ";
    cin>>b;
    cout<<"Donner le troisieme nombre : ";
    cin>>c;
    if(a>b)
    {
        maxi=a;
    }
    else
    {
        maxi=b;
    }
    if(maxi<c)
    {
        maxi=c;
    }
    cout<<" Le max est :"<<maxi;
    return 0;
}
