#include <iostream>
using namespace std;
int main(){
    int num,digit,ldigit,flag;
    cout<<"Enter a number:\n";
    cin>>num;
    ldigit=num%10;
    while(num>0){
        digit=num%10;
        num=num/10;
        if(digit!=ldigit){
            flag=0;
            break;
        }
        else{
            flag=1;
        }

    }
    if(flag==1){
        cout<<"All digits are same\n";
    }
    if(flag==0){
        cout<<"All digits not are same\n";
    }
}