#include<iostream>
using namespace std;
int main(){
    int pos;
    int sum=1;
    int  num=1;
    cout<<"Enter the position:\n";
    cin>>pos;
    for(int i=0;i<pos;i++){
        sum=sum+i;
        cout<<sum<<"  ";
    }
}