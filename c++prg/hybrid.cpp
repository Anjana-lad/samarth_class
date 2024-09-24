// hybrid inheritance.
#include<iostream>
using namespace std;
class P{
    public:
    int p;
    public:
    int getp(){
        cout<<"enter P:";
        cin>>p;
    }
    void showp(){
        cout<<"P="<<p<<endl;
    }
};
class Q:public P{
       public:
    int q;
    public:
    int getq(){
        getp();
        cout<<"enter Q:";
        cin>>q;
    }
    void showq(){
        showp();
        cout<<"Q="<<q<<endl;
    }
};
class R{
    public:
    int r;
    public:
    int getr(){
        cout<<"enter R:";
        cin>>r;
    }
    void showr(){
        cout<<"R="<<r<<endl;
    }
};
class S:public Q,public R{
    public:
    int result;
    public:
    void get(){
     getq();
     getr();
     result=p+q+r;
    }
    void display(){
        showq();
        showr();
        cout<<"Result="<<result<<endl;
    } 
};
int main(){
    S ss;
    ss.get();
    ss.display();
}