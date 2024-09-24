// function overloading : function having same name but parameter different ar having different datatypes.
#include<iostream>
using namespace std;
int add_fun(int a,int b){
    return a+b;
}
int add_fun(int a,int b,int c){
    return a+b+c;
}
int add_fun(double a,double b){
    return a+b;
}
int main(){
    int a,b,c;
    cout<<"Enter values:";
    cin>>a>>b>>c;
    cout<<"Function with 2 integer parameter:"<<add_fun(a,b)<<endl;
    cout<<"Function with double datatype:"<<add_fun(12.3,52.4);
    cout<<"Function with 3 parameters:"<<add_fun(a,b,c);
}