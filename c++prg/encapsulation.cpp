//encapsulation :
#include<iostream>
using namespace std;
class temp_value{
    private:
        int a,b;  
    public:
    int solve(int input){
        a=input;
        b=a/2;
        return b;
    }
};
int main(){
    temp_value tv;
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"answer of temp_value:"<<tv.solve(n)<<endl;
}