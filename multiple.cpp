//multiple inheritance : In this we have more then one base class that inherits only one child class.
#include<iostream>
using namespace std;
class Mom{   // base1 class
    protected:
        int get_m_money;
    public:
        void get_m(){
            cout<<"Enter mother money:";
            cin>>get_m_money;
        }
        void show_m(){
            cout<<"Mom money:"<<get_m_money<<endl;
        }
};
class Dad{   // base 2 class
    protected:
        int get_d_money;
    public:
        void get_d(){
            cout<<"Enter dad money:";
            cin>>get_d_money;
        }
        void show_d(){
            cout<<"Dad money:"<<get_d_money<<endl;
        }
};
class child :public Mom,public Dad{  // child class
    public:
        int total_m;
    public:
        int total(){
            get_m();
            get_d();
            total_m=get_m_money+get_d_money;
        }
        void show(){
            show_m();
            show_d();
            cout<<"Total Money="<<total_m<<endl;
        }
};
int main(){
    child ch;
    ch.total();
    ch.show();
}