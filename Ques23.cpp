#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter a number:\n";
    cin>>num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        cout<<num<<" Is a perfect number\n";
    }
    else{
        cout<<num<<" Is not a perfect number";
    }
}