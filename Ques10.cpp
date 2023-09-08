#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter 2 numbers\n";
    cin>>num1;
    cin>>num2;
    if(num1%num2==0){
        cout<<num2<<"is a perfect divisor\n";
    }
    else{
        cout<<"not a perfect divisor\n";
    }
}