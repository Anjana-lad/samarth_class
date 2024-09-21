//exception handling
#include<iostream>
using namespace std;
int main(){
 int age;
 cout<<"Enter age:";
 cin>>age;
 try{
    if(age>20){
        cout<<"can drive a car"<<endl;
    }
    else{
        throw(age);
    }
 }
 catch (int ag){
    cout<<" you entered age="<<ag;
 }    
}