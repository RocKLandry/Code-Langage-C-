#include <iostream>

using namespace std;
int factoriel(int a);
void afficher(int n,int m);
int T[10][2];

int main()
{
    for ( int i=0;i<=4;i++)
    {
          cout << " Donner un nombre positif: " << endl;
          cin>>T[i][0];
    }




    for ( int i=0;i<=4;i++)
    {

        T[i][1]=factoriel(T[i][0]);

    }
    cout<<endl;
    cout<<" Les factoriels des nombres lus sont: "<<endl;
    cout<<endl;

    for( int i=0;i<=4;i++)
    {
       afficher(T[i][0],T[i][1]);
    }


    return 0;
}



int factoriel(int a)
{
    int f=1;
    if(a==0)
    {
        f=1;
    }
    else if(a<0)
    {
         f=-1;
    }
    else
    {
       for(int i=1;i<=a;i++)
         {
           f=f*i;
         }
    }

    return f;

}



void afficher(int n,int m)
{

    if(n>0)
    {
        cout<<" Le factoriel de : "<<n<<" est : "<<m<<endl;
        cout<<endl;
    }
    else
    {
        cout<<" Le factoriel de "<<n<<" n'existe pas"<<endl;
        cout<<endl;
    }

}


