// exception handling: divide by 0.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    float result;
    cout<<"Enter x,y,z";
    cin>>x>>y>>z;
    try{
        if((x-y)!=0){
        result=z/(x-y);
        cout<<"result="<<result<<endl;
        }
        else{
            throw(x-y);
        }
    }
    catch(int r){
        cout<<"R is"<<r<<endl;;
    }

}