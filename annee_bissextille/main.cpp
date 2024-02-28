#include <iostream>


using namespace std;
int a;

int main()
{
    cout << "Donner l'annee : "  ;
    cin>>a;
    if((a%4==0)&&(a%100!=0)||(a%4==0)&&(a%100==0)&&(a%400==0))
    {
        cout<<endl;
        cout<<"L'annee est bissextille";
    }
    else
    {
         cout<<endl;
         cout<<"L'annee n'est pas  bissextille";
    }
    cout<<endl;
    return 0;
}
