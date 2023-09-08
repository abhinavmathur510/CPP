#include<iostream>
using namespace std;
int main(){
    int pos;
    int num1=1;
    int num2=5;
    cout<<"Enter the position:\n";
    cin>>pos;
    for(int i=0;i<pos;i++){
        if(i%2==0){
            cout<<num1<<" ";
            num1++;
        }
        if(i%2!=0){
            cout<<num2<<" ";
            num2++;
        }
    }
}