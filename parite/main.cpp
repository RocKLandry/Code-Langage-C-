#include <iostream>
int a;
using namespace std;

int main()
{
    cout << "Donner un nombre " << endl;
    cin>>a;
    if(a%2==0)
    {
        cout<<"Le nombre lu est pair";
    }
    else
    {
        cout<<"Le nombre lu est impair";
    }
    return 0;
}
