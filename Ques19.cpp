#include <iostream>
using namespace std;
int main(){
    int num,digit;
    int max=0,smax=0;
    cout<<"Enter a number:\n";
    cin>>num;
    while(num>0){
        digit=num%10;
        if(digit>max){
            max=digit;
        }
        else if(digit>smax && digit<max){
            smax=digit;
        }
        num=num/10;
    }
    cout<<"The max is "<<max<<" Second max is "<<smax;
}