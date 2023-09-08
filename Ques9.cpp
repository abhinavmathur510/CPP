#include <iostream>
using namespace std;
int main(){
    int num;
    int max=0;
    int digit;
    cout<<"Enter a 3 digit number\n";
    cin>>num;
    if(num<100||num>999){
        cout<<"Input is invalid\n";
        goto end;
    }
    while(num>0){
        digit=num%10;
        num=num/10;
        if(digit>max){
            max=digit;
        }
    }
    cout<<"The maximum among all the digits is "<<max;
    end:
    return 0;
}
