#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers:\n";
    cin>>a>>b>>c;
    if(a>b && a>c){
        if(b>c){
            cout<<b<<" is second Maximum";
        }
        else{
            cout<<c<<" is second Maximum";
        }
    }
    if(b>a && b>c){
        if(a>c){
            cout<<a<<" is second Maximum";
        }
        else{
            cout<<c<<" is second Maximum";
        }
    }
    else{
        if(a>b){
            cout<<a<<" is second Maximum";
        }
        else{
            cout<<b<<" is second Maximum";
        }

    }
    
}