#include<iostream>
using namespace std;
int main(){
    int amount,incentive;
    cout<<"Enter the amount?\n";
    cin>>amount;
    if(amount<=10000){
        incentive=amount*10/100;
        cout<<"The amount of incentive given is "<<incentive;
    }
    else if(amount>10000 && amount<=20000){
        incentive=amount*15/100;
        cout<<"The amount of incentive given is "<<incentive;
    }
    else if(amount>=20000){
        incentive=amount*17/100;
        cout<<"The amount of incentive given is "<<incentive;
    }
}