#include<iostream>
using namespace std;
int fact(int digit){

    if(digit==0 || digit==1){
        return 1;
    }
    else{
        return digit * fact(digit-1);
    }
    
}
int main(){
    int num,digit,factorial;
    cout<<"Enter a number:\n";
    cin>>num;
    while(num>0){
        digit=num%10;
        factorial=fact(digit);
        num=num/10;
        cout<<"Factorial of "<<digit<<" is "<<factorial<<"\n";
    }

}