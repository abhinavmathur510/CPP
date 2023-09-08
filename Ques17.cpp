#include <iostream>
using namespace std;
int main(){
    int num,sum=0,digit ;
    cout<<"Enter a number:\n";
    cin>>num;
    while(num>0){
        digit=num%10;
        num=num/10;
        sum=sum+digit;
    }
    cout<<"The sum of the digits is "<<sum;
}