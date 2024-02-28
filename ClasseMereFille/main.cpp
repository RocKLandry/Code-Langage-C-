#include <iostream>

using namespace std;

class A
{ protected :
    int a;
    int b;
    public :
    A();
    A(int);
    A(int,int);
    ~A();
    int somme();



};

A::A()
{
     a=5;
     b=10;
    cout<<"Je suis le constructeur de A"<<endl;
}

A::A(int x)
{
     a=x;
     b=10;
    cout<<"Je suis le constructeur de A"<<endl;
}
A::A(int x,int y)
{
     a=x;
     b=y;
    cout<<"Je suis le constructeur de A"<<endl;
}
A::~A()
{
    cout<<"Je suis le destructeur de A"<<endl;
}
 int A::somme()
 {
     int S=a+b;
     return S;
 }

class B
{  protected :
    int d;
    public :
    B();
    B(int);
    ~B();
};
B::B()
{
     d=1;
      cout<<"Je suis le constructeur de B"<<endl;

}

B::B(int x)
{
     d=x;
    cout<<"Je suis le constructeur de B"<<endl;

}
B::~B()
{
    cout<<"Je suis le destructeur de B"<<endl;
}

class C : public A
{

    int c;
    public :
    C();
    C(int);
    C(int,int);
    C(int,int,int);
    ~C();
};

C::C():A() // ce constructeur C recois les configurations du constructeur A sans argument c'est à dire a=0 et b=0  et on initialise nous mm c=20; C sans argument y'a pas d'argument dans C et A sans argument est joint à C
{
   c=20;
   cout<<"Je suis le constructeur de C"<<endl;
}

C::C(int x):A(x)
{
   c=20;
   cout<<"Je suis le constructeur de C"<<endl;
}
C::C(int x,int y):A(x,y)
{
   c=20;
   cout<<"Je suis le constructeur de C"<<endl;
}
C::C(int x,int y,int z):A(x,y)
{
   c=z;
   cout<<"Je suis le constructeur de C"<<endl;
}
C::~C()
{
    cout<<"Je suis le destructeur de C"<<endl;
}
class D : public A,public B
{
    int e;
    public :
    D();
    D(int);
    D(int,int);
    D(int,int,int);
    D(int,int,int,int);
    ~D();
    int somme();
};

D::D():A(),B()
{
   e=100;
   cout<<"Je suis le constructeur de D"<<endl;
}

D::D(int x):A(x),B()
{
   e=100;
   cout<<"Je suis le constructeur de D"<<endl;
}
D::D(int x,int y):A(x,y),B()
{
   e=100;
   cout<<"Je suis le constructeur de D"<<endl;
}
D::D(int x,int y,int z):A(x,y),B(z)
{
   e=100;
   cout<<"Je suis le constructeur de D"<<endl;
}

D::D(int x,int y,int z,int m):A(x,y),B(z)
{
   e=m;
   cout<<"Je suis le constructeur de D"<<endl;
}
D::~D()
{
    cout<<"Je suis le destructeur de D"<<endl;
}
int D::somme()
{
    int S=a+b+d+e;
    return S;
}
int main()

{
    D D1(100,200,300,400);
    cout<<D1.somme()<<endl;


    return 0;
}
