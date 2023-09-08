#include<iostream>
using namespace std;
int main(){
     int num,count=0,digit ;
    cout<<"Enter a number:\n";
    cin>>num;
    while(num>0){
        digit=num%10;
        num=num/10;
        count++;
    }
    cout<<"The count of digits is  "<<count;
}

