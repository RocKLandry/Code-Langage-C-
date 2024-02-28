#include <iostream>

using namespace std;
int T[10];

int main()
{
    for(int i=0;i<=9;i++)
    {
        T[i]=i*i;
    }

    for(int i=0;i<=9;i++)
    {
        cout<<T[i]<<endl;
    }

    return 0;
}
