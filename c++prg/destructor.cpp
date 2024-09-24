//destructor is used to destroyed the memory allocated by the object of thr constructor.
#include<iostream>
using namespace std;
class add_fun{
    public:
    int num,num2,res;
    public:
    add_fun(){
        cout<<"Enter numbers:";
        cin>>num>>num2;
    }
    int add(){
        int res=num+num2;
        cout<<"Result="<<res<<endl;
    }
    ~add_fun(){
        cout<<"destructor is called."<<endl;
    }
};
int main(){
    add_fun af;
    af.add();
    cout<<"Calling destructor"<<endl;
}