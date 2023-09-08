#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a 5 digit number\n";
    cin>>num;
    if(num<10000||num>99999){
        cout<<"input is invalid"<<endl;
    }
    int digit1=num/10000;
    int digit2=(num/1000)%10;
    int digit3=(num/100)%10;
    int digit4=(num/10)%10;
    int digit5=num%10;
    cout<<"Digit1="<<digit1<<"\nDigit2="<<digit2<<"\nDigit3="<<digit3<<"\nDigit4="<<digit4<<"\nDigit5="<<digit5;


}