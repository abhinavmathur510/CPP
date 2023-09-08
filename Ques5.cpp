#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a three digit number:";
    cin>>num;
    if (num<100||num>999){
        cout<<"Invalid";
    }
    int digit1=num/100;
    int digit2=(num/10)%10;
    int digit3=num%10;
    cout<<"The Reverse of the num "<<num<<"is "<<digit3<<digit2<<digit1;
}