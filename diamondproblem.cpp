// diamond problem: combination of multiple and multilevel inheritance.
// which can be resolve using virtual keyword.
/*
     A
   B   C
     D
*/
#include<iostream>
using namespace std;
int a,b,c,d;
class A{
    public:
    int getab(){
        cout<<"Enter a :";
        cin>>a;
        cout<<"Enter b:";
        cin>>b;
    }
};
class B:virtual public A{
    public:
    int getc(){
        cout<<"Enter c:";
        cin>>c;
    }
};
class C:  public virtual A{
    public:
    int getd(){
        cout<<"Enter d:";
        cin>>d;
    }
};
class D:public B ,public C{
    public:
    int total;
    public:
    int result(){
        getab();
        getc();
        getd();
        total=a+b+c+d;
        cout<<"Total ="<<total<<endl;
    }
};
int main(){
    D d;
    d.result();
}
