#include <iostream>
using namespace std;
int main(){
    int num[10];
    int digit;
    for(int i=0 ;i<=9;i++){
        cout<<"Enter "<<i+1<<" Number:\n";
        cin>>num[i];
    }
    for(int i=0 ;i<=9;i++){

        while(num[i]>0){
            digit=num[i]%10;
            num[i]=num[i]/10;
            if(digit%2==0){
                cout<<digit<<"\n";
                break;
            }

        }
    }
}