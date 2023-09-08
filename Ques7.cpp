#include <iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"Enter two Numbers\n";
    cin>>a;
    cin>>b;
    cout<<"Before Swappping\n a="<<a<<"\n b="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter Swappping\n a="<<a<<"\n b="<<b;
}