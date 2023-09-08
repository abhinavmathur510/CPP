#include <iostream>
#include<bitset>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:\n";
    cin>>num;
    cout<<"Binary equivalent = "<< bitset < sizeof(int)*8>(num);
    cout<<"\nOctal Equlivalent = "<<oct<<num;
}