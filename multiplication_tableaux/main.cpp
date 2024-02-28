#include <iostream>

using namespace std;
int T[12][3];
int a=0;

int main()
{
    cout << "Donner un  nombre : " << endl;
    cin>>a;



    for (int i=0;i<=12;i++)
    {
        T[i][0]=a;
        T[i][1]=i;
        T[i][2]=a*i;
    }
    cout<<" La table de multiplication est :"<<endl;

    for (int i=0;i<=12;i++)
    {


        cout<<  T[i][0] <<" X "<<T[i][1]<<" = "<<T[i][2]<<endl;


    }
    return 0;
}
