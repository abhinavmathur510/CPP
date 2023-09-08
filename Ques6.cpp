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
    int sum=digit1+digit2+digit3;
    cout<<"The sum of the digits is "<<sum;
}