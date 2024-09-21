// abstraction
#include<iostream>
using namespace std;
class sum{
    private:
    int x,y,z;
    public:
    void add(){
        cout<<"Enter numbers:";
        cin>>x>>y;
        z=x+y;
        cout<<"Z="<<z<<endl;
    }
};
int main(){
    sum s;
    s.add();
}