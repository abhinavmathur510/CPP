#include<iostream>
using namespace std;
int main(){
    int base,pow;
    cout<<"Enter Base number and the power :\n";
    cin>>base>>pow;
    int baseo=base;
    for(int i=1;i<pow;i++){
        base=base*baseo;
    }
    cout<<"The value of "<<baseo<<" raised to the power "<< pow<<" is "<<base; 
    
}