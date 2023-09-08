#include<iostream>
using namespace std;
int main(){
    int num,rem,odd,flag=0;
    cout<<"Enter a number:\n";
    cin>>num;
    while (num>0){
        rem=num%10;
        if(rem%2!=0){
            odd=rem;
            flag=1;
        }
        num=num/10;
    }
    if(flag==1){
         cout<<"The first odd digit is "<<odd;
    }
    else{
        cout<<"\nThere is no odd number";
    }
}